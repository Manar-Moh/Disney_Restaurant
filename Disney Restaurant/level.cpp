#include "level.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include<string>
#include <sstream>
#include <fstream>
#include<vector>
#include "SFML/Audio.hpp"
#include <cstdlib>
#include <queue>
#include <Stack>
#include<fstream>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace sf;
using namespace std;
level::level()
{
	sound_click_buf.loadFromFile("Menu Selection Click.wav");
	sound_click.setBuffer(sound_click_buf);


	////////////////////////////before level////////////////////////////////

	beforelevelbackgroundtexture.loadFromFile("beforelevel.png");
	beforelevelbackgroundsprite.setTexture(beforelevelbackgroundtexture);
	beforelevelbackgroundsprite.setPosition(550, 150);
	beforelevelbackgroundsprite.setScale(Vector2f(1.2, 1.2));

	beforelevel_play_texture.loadFromFile("beforelevel_play.png");
	beforelevel_play_sprite.setTexture(beforelevel_play_texture);
	beforelevel_play_sprite.setPosition(930, 655);
	beforelevel_play_sprite.setScale(Vector2f(1, 1));

	beforelevel_back_texture.loadFromFile("level_back.png");
	beforelevel_back_sprite.setTexture(beforelevel_back_texture);
	beforelevel_back_sprite.setPosition(730, 650);
	beforelevel_back_sprite.setScale(Vector2f(1, 1));

	beforelevel_playhover_texture.loadFromFile("beforelevel_play_hover.png");
	beforelevel_playhover_sprite.setTexture(beforelevel_playhover_texture);
	beforelevel_playhover_sprite.setPosition(930, 655);
	beforelevel_playhover_sprite.setScale(Vector2f(1, 1));

	beforelevel_backhover_texture.loadFromFile("level_back_hover.png");
	beforelevel_backhover_sprite.setTexture(beforelevel_backhover_texture);
	beforelevel_backhover_sprite.setPosition(730, 650);
	beforelevel_backhover_sprite.setScale(Vector2f(1, 1));

	disneyfont.loadFromFile("waltographUI.ttf");

	level_goal_text.setFont(disneyfont);
	level_goal_text.setCharacterSize(45);
	level_goal_text.setFillColor(Color::Yellow);
	level_goal_text.setPosition(950, 540);
	level_goal_text.setOutlineColor(Color::Black);
	level_goal_text.setOutlineThickness(2);
	

	
	level_number_text.setFont(disneyfont);
	level_number_text.setCharacterSize(45);
	level_number_text.setFillColor(Color::Yellow);
	level_number_text.setPosition(950, 440);
	level_number_text.setOutlineColor(Color::Black);
	level_number_text.setOutlineThickness(2);
	converttostring << current_level;
	level_number_text.setString(converttostring.str());
	

	///////////////////////////////////level food component////////////////////////////////////////////////////////////////////////
	levelbackgroundtexture.loadFromFile("background level.jpg");
	levelbackgroundsprite.setTexture(levelbackgroundtexture);
	levelbackgroundsprite.setScale(Vector2f(1, 1));
	levelbackgroundsprite.setPosition(Vector2f(0, 0));
	

	level_score_text.setFont(disneyfont);
	level_score_text.setCharacterSize(35);
	level_score_text.setFillColor(Color::Yellow);
	level_score_text.setPosition(747, 30);
	level_score_text.setOutlineColor(Color::Black);
	level_score_text.setOutlineThickness(2);
	
	

	////////////coin gif//////////////////////

	money1.loadFromFile("coin1.png");
	money2.loadFromFile("coin2.png");
	money3.loadFromFile("coin3.png");
	money4.loadFromFile("coin4.png");
	money5.loadFromFile("coin5.png");
	money6.loadFromFile("coin6.png");
	money7.loadFromFile("coin7.png");
	money8.loadFromFile("coin8.png");
	money9.loadFromFile("coin9.png");

	money1_sprite.setTexture(money1);
	money1_sprite.setPosition(Vector2f(520, 7));
	money1_sprite.setScale(Vector2f(0.25, 0.25));

	money2_sprite.setTexture(money2);
	money2_sprite.setPosition(Vector2f(520, 7));
	money2_sprite.setScale(Vector2f(0.25, 0.25));

	money3_sprite.setTexture(money3);
	money3_sprite.setPosition(Vector2f(520, 7));
	money3_sprite.setScale(Vector2f(0.25, 0.25));

	money4_sprite.setTexture(money4);
	money4_sprite.setPosition(Vector2f(520, 7));
	money4_sprite.setScale(Vector2f(0.25, 0.25));

	money5_sprite.setTexture(money5);
	money5_sprite.setPosition(Vector2f(520, 7));
	money5_sprite.setScale(Vector2f(0.25, 0.25));

	money6_sprite.setTexture(money6);
	money6_sprite.setPosition(Vector2f(520, 7));
	money6_sprite.setScale(Vector2f(0.25, 0.25));

	money7_sprite.setTexture(money7);
	money7_sprite.setPosition(Vector2f(520, 7));
	money7_sprite.setScale(Vector2f(0.25, 0.25));

	money8_sprite.setTexture(money8);
	money8_sprite.setPosition(Vector2f(520, 7));
	money8_sprite.setScale(Vector2f(0.25, 0.25));

	money9_sprite.setTexture(money9);
	money9_sprite.setPosition(Vector2f(520, 7));
	money9_sprite.setScale(Vector2f(0.25, 0.25));

	second = seconds(0.01f);

	//////////////////////////////////
	component3texture.loadFromFile("lettuce2.png");
	component3sprite.setTexture(component3texture);
	component3sprite.setScale(Vector2f(1.1, 1.1));
	component3sprite.setPosition(Vector2f(454, 970));
	/////////////////////////////////
	component3_1texture.loadFromFile("salad02.png");
	component3_1sprite.setTexture(component3_1texture);
	component3_1sprite.setScale(Vector2f(1, 0.77));
	component3_1sprite.setPosition(Vector2f(470, 882));
	//////////////////////////////
	component2texture.loadFromFile("cu2.png");
	component2sprite.setTexture(component2texture);
	component2sprite.setScale(Vector2f(1.2, 1.2));
	component2sprite.setPosition(Vector2f(190, 950));
	/////////////////////////////
	component2_1texture.loadFromFile("zeton2.png");
	component2_1sprite.setTexture(component2_1texture);
	component2_1sprite.setScale(Vector2f(1.2, 1.2));
	component2_1sprite.setPosition(Vector2f(190, 900));
	/////////////////////////////
	component1texture.loadFromFile("burger2.png");
	component1sprite.setTexture(component1texture);
	component1sprite.setScale(Vector2f(1, 1));
	component1sprite.setPosition(Vector2f(1720, 860));
	///////////////////////////
	component1_1texture.loadFromFile("cheese2.png");
	component1_1sprite.setTexture(component1_1texture);
	component1_1sprite.setScale(Vector2f(1, 1));
	component1_1sprite.setPosition(Vector2f(1720, 925));
	//////////////////////////
	component4texture.loadFromFile("fra52.png");
	component4sprite.setTexture(component4texture);
	component4sprite.setScale(Vector2f(1, 1));
	component4sprite.setPosition(Vector2f(1230, 950));
	/////////////////////////
	component4_1texture.loadFromFile("meat2.png");
	component4_1sprite.setTexture(component4_1texture);
	component4_1sprite.setScale(Vector2f(1, 1));
	component4_1sprite.setPosition(Vector2f(1230, 904));
	/////////////////////////
	component6texture.loadFromFile("Pizza pieces2.png");
	component6sprite.setTexture(component6texture);
	component6sprite.setScale(Vector2f(0.7, 0.7));
	component6sprite.setPosition(Vector2f(630, 650));

	component6_1sprite.setTexture(component6texture);
	component6_1sprite.setScale(Vector2f(0.7, 0.7));
	component6_1sprite.setPosition(Vector2f(610, 630));
	/////////////////////////
	component7texture.loadFromFile("icecream2.png");
	component7sprite.setTexture(component7texture);
	component7sprite.setScale(Vector2f(0.9, 0.9));
	component7sprite.setPosition(Vector2f(210, 620));

	component7_1sprite.setTexture(component7texture);
	component7_1sprite.setScale(Vector2f(0.9, 0.9));
	component7_1sprite.setPosition(Vector2f(210, 650));
	///////////////////////
	component8texture.loadFromFile("juice2.png");
	component8sprite.setTexture(component8texture);
	component8sprite.setScale(Vector2f(1.1, 1.1));
	component8sprite.setPosition(Vector2f(90, 620));

	component8_1sprite.setTexture(component8texture);
	component8_1sprite.setScale(Vector2f(1.1, 1.1));
	component8_1sprite.setPosition(Vector2f(90, 650));
	//////////////////////
	component9texture.loadFromFile("felfel2.png");
	component9sprite.setTexture(component9texture);
	component9sprite.setScale(Vector2f(0.9, 0.9));
	component9sprite.setPosition(Vector2f(700, 905));
	/////////////////////
	component9_1texture.loadFromFile("tometo2.png");
	component9_1sprite.setTexture(component9_1texture);
	component9_1sprite.setScale(Vector2f(0.9, 0.9));
	component9_1sprite.setPosition(Vector2f(720, 960));
	/////////////////////
	component10texture.loadFromFile("dish12.png");
	component10sprite.setTexture(component10texture);
	component10sprite.setScale(Vector2f(1.4, 1.4));
	component10sprite.setPosition(Vector2f(1630, 630));
	/////////////////////
	component10_1texture.loadFromFile("dish22.png");
	component10_1sprite.setTexture(component10_1texture);
	component10_1sprite.setScale(Vector2f(1.2, 1.2));
	component10_1sprite.setPosition(Vector2f(1795, 650));
	////////////////////
	component11texture.loadFromFile("hotdog2.png");
	component11sprite.setTexture(component11texture);
	component11sprite.setScale(Vector2f(1, 1));
	component11sprite.setPosition(Vector2f(1450, 920));
	///////////////////
	component11_1texture.loadFromFile("salmon2.png");
	component11_1sprite.setTexture(component11_1texture);
	component11_1sprite.setScale(Vector2f(1, 1));
	component11_1sprite.setPosition(Vector2f(1500, 990));
	//////////////////
	component12texture.loadFromFile("gatto2.png");
	component12sprite.setTexture(component12texture);
	component12sprite.setScale(Vector2f(0.9, 0.9));
	component12sprite.setPosition(Vector2f(1505, 640));
	//////////////////
	component12_1texture.loadFromFile("pancake2.png");
	component12_1sprite.setTexture(component12_1texture);
	component12_1sprite.setScale(Vector2f(1.1, 1.1));
	component12_1sprite.setPosition(Vector2f(1417, 640));
	//////////////////
	component13texture.loadFromFile("Dount2.png");
	component13sprite.setTexture(component13texture);
	component13sprite.setScale(Vector2f(1, 1));
	component13sprite.setPosition(Vector2f(1300, 650));
	//////////////////
	component13_1texture.loadFromFile("cupcake2.png");
	component13_1sprite.setTexture(component13_1texture);
	component13_1sprite.setScale(Vector2f(1, 1));
	component13_1sprite.setPosition(Vector2f(1210, 633));
	/////////////////
	component14texture.loadFromFile("saoup2.png");
	component14sprite.setTexture(component14texture);
	component14sprite.setScale(Vector2f(0.9, 0.9));
	component14sprite.setPosition(Vector2f(1070, 650));
	////////////////
	component14_1texture.loadFromFile("appel2.png");
	component14_1sprite.setTexture(component14_1texture);
	component14_1sprite.setScale(Vector2f(0.8, 0.8));
	component14_1sprite.setPosition(Vector2f(1010, 660));
	////////////////////
	component15texture.loadFromFile("Eclier2.png");
	component15sprite.setTexture(component15texture);
	component15sprite.setScale(Vector2f(0.9, 0.9));
	component15sprite.setPosition(Vector2f(810, 630));
	////////////////////
	component15_1texture.loadFromFile("sweasroll2.png");
	component15_1sprite.setTexture(component15_1texture);
	component15_1sprite.setScale(Vector2f(0.9, 0.9));
	component15_1sprite.setPosition(Vector2f(870, 680));
	////////////////////
	component5texture.loadFromFile("bread03.png");
	component5sprite.setTexture(component5texture);
	component5sprite.setScale(Vector2f(0.9, 0.9));
	component5sprite.setPosition(Vector2f(400, 650));
	
	component5_1texture.loadFromFile("bread02.png");
	component5_1sprite.setTexture(component5_1texture);
	component5_1sprite.setScale(Vector2f(0.9, 0.9));
	component5_1sprite.setPosition(Vector2f(410, 700));

	////////////////////check which component will be drawn////////////////////////////

	char ch;
	infile.open("Store_food_array.txt",ios::binary);
	if (infile.fail())
	{
		cout << "fail";
	}
	else 
	{
		int total_money;
		infile >> total_money >> ch;
		while (!infile.eof())
		{
			
			infile >> struct1.id;
			infile >> ch;
			infile >> struct1.price;
			infile >> ch;
			infile >> struct1.can_buy;
			infile >> ch;
			getline(infile, struct1.namesprite, '/');
				
			if (struct1.can_buy == false)
			{
					vector_food.push_back(struct1);
			}
			
		}
	}
	infile.close();

	
	////////////////////////////person&food////////////////////////////////////////////////////////////////

	ptexture0.loadFromFile("00.png");
	playimage0.setTexture(ptexture0);
	playimage0.setPosition(370, 280);
	playimage0.setScale(0.9, 0.9);

	
	ptexture1.loadFromFile("6 (2).png");
	playimage1.setTexture(ptexture1);
	playimage1.setPosition(850, 210);
	playimage1.setScale(0.96, 0.96);

	ptexture2.loadFromFile("22.png");
	playimage2.setTexture(ptexture2);
	playimage2.setPosition(1400, 238);
	playimage2.setScale(1, 1);



	ptexture3.loadFromFile("55.png");
	playimage3.setTexture(ptexture3);
	playimage3.setPosition(340, 238);
	playimage3.setScale(0.27, 0.27);


	ptexture4.loadFromFile("99.png");
	playimage4.setTexture(ptexture4);
	playimage4.setPosition(850, 255);
	playimage4.setScale(0.61, 0.61);

	ptexture5.loadFromFile("88.png");
	playimage5.setTexture(ptexture5);
	playimage5.setPosition(1390, 250);
	playimage5.setScale(0.35, 0.35);


	ptexture6.loadFromFile("77.png");
	playimage6.setTexture(ptexture6);
	playimage6.setPosition(350, 194);
	playimage6.setScale(0.60, 0.60);

	ptexture7.loadFromFile("11.png");
	playimage7.setTexture(ptexture7);
	playimage7.setPosition(810, 240);
	playimage7.setScale(0.80, 0.80);

	ptexture8.loadFromFile("33.png");
	playimage8.setTexture(ptexture8);
	playimage8.setPosition(1450, 168);
	playimage8.setScale(0.6, 0.6);


	ptexture9.loadFromFile("44.png");
	playimage9.setTexture(ptexture9);
	playimage9.setPosition(320, 246);
	playimage9.setScale(0.75, 0.75);


	ptexture10.loadFromFile("1010.png");
	playimage10.setTexture(ptexture10);
	playimage10.setPosition(800, 248);
	playimage10.setScale(0.86, 0.86);

	ptexture11.loadFromFile("1212.png");
	playimage11.setTexture(ptexture11);
	playimage11.setPosition(1310, 250);
	playimage11.setScale(0.46, 0.46);

	character_q.push(id_sprit0);
	character_q.push(id_sprit1);
	character_q.push(id_sprit2);
	character_q.push(id_sprit3);
	character_q.push(id_sprit4);
	character_q.push(id_sprit5);
	character_q.push(id_sprit6);
	character_q.push(id_sprit7);
	character_q.push(id_sprit8);
	character_q.push(id_sprit9);
	character_q.push(id_sprit10);
	character_q.push(id_sprit11);

	//left
	
	menuordertexture.loadFromFile("menu.png");
	menuordersprite.setTexture(menuordertexture);
	menuordersprite.setPosition(600, 120);
	menuordersprite.setScale(0.47, 0.47);

	//middle
	
	menuorder1texture.loadFromFile("menu.png");
	menuorder1sprite.setTexture(menuorder1texture);
	menuorder1sprite.setPosition(1120, 120);
	menuorder1sprite.setScale(0.47, 0.47);

	//right
	menuorder2texture.loadFromFile("menu.png");
	menuorder2sprite.setTexture(menuorder2texture);
	menuorder2sprite.setPosition(1570, 120);
	menuorder2sprite.setScale(0.47, 0.47);


	//main game food component structure assignment


	burger.id = 19;
	burger.price = 15;
	burger.can_buy = false;
	burger.spritename = "Burger";


	olives.id = 21;
	olives.price = 5;
	olives.can_buy = false;
	olives.spritename = "Olives";

	lettuce.id = 22;
	lettuce.price = 5;
	lettuce.can_buy = false;
	lettuce.spritename = "Lettuce";

	meat.id = 23;
	meat.price = 20;
	meat.can_buy = false;
	meat.spritename = "Meat";

	chicken.id = 24;
	chicken.price = 20;
	chicken.can_buy = false;
	chicken.spritename = "Chicken";

	juice.id = 25;
	juice.price = 10;
	juice.can_buy = false;
	juice.spritename = "Juice";

	icecream.id = 26;
	icecream.price = 15;
	icecream.can_buy = false;
	icecream.spritename = "Ice cream";

	pizza.id = 27;
	pizza.price = 10;
	pizza.can_buy = false;
	pizza.spritename = "Pizza";

	cu.id = 28;
	cu.price = 5;
	cu.can_buy = false;
	cu.spritename = "cu";

	//stack will contain 7 burgers
	for (int i = 0; i < 10; i++)
	{
		burgerstack.push(burger.id);
	}
	for (int i = 0; i < 10; i++)
	{
		chickenstack.push(chicken.id);
	}
	for (int i = 0; i < 10; i++)
	{
		meatstack.push(meat.id);
	}



	////read from file & push buyed food component into the vector
	char slash;
	infile2.open("Store_food_array.txt", ios::binary);

	if (infile2.fail())
	{
		cout << "fail";
	}
	else
	{
		int money;
		infile2 >> money >> slash;
		while (!infile2.eof())
		{

			infile2 >> storeelement.id;
			infile2 >> slash;
			infile2 >> storeelement.price;
			infile2 >> slash;
			infile2 >> storeelement.can_buy;
			infile2 >> slash;
			getline(infile2, storeelement.spritename, '/');
			if (storeelement.can_buy == false)
			{
				existfoodvector.push_back(storeelement);
			}
		}
		infile2.close();
	}


	/////////////////////////////

	sandwitch_elements.push_back(olives);
	sandwitch_elements.push_back(lettuce);
	sandwitch_elements.push_back(cu);

	for (int i = 0; i < existfoodvector.size(); i++)
	{
		if (existfoodvector[i].id == 5 || existfoodvector[i].id == 6 || existfoodvector[i].id == 8)
		{
			storeelement.id = existfoodvector[i].id;
			storeelement.can_buy = existfoodvector[i].can_buy;
			storeelement.price = existfoodvector[i].price;
			storeelement.spritename = existfoodvector[i].spritename;
			sandwitch_elements.push_back(storeelement);

		}

	}

	//////////////////////////////////


	elements_not_sandwitch.push_back(salad);
	elements_not_sandwitch.push_back(juice);
	elements_not_sandwitch.push_back(icecream);
	elements_not_sandwitch.push_back(pizza);


	for (int i = 0; i < existfoodvector.size(); i++)
	{

		if (existfoodvector[i].id != 2 && existfoodvector[i].id != 3 && existfoodvector[i].id != 5 && existfoodvector[i].id != 6 && existfoodvector[i].id != 8 && existfoodvector[i].id != 10 && existfoodvector[i].id != 11)
		{
			storeelement.id = existfoodvector[i].id;
			storeelement.can_buy = existfoodvector[i].can_buy;
			storeelement.price = existfoodvector[i].price;
			storeelement.spritename = existfoodvector[i].spritename;
			elements_not_sandwitch.push_back(storeelement);
		}
	}

	///////////////////////////////

	sandwitch_meat_elements.push_back(burger);
	sandwitch_meat_elements.push_back(meat);
	sandwitch_meat_elements.push_back(chicken);

	for (int i = 0; i < existfoodvector.size(); i++)
	{

		if (existfoodvector[i].id == 10 || existfoodvector[i].id == 11)
		{
			storeelement.id = existfoodvector[i].id;
			storeelement.can_buy = existfoodvector[i].can_buy;
			storeelement.price = existfoodvector[i].price;
			storeelement.spritename = existfoodvector[i].spritename;
			elements_not_sandwitch.push_back(storeelement);
		}
	}

	/////////////////////gametime//////////////////////////

	
	timegametexture0.loadFromFile("gametime0.png");
	timegamesprite0.setTexture(timegametexture0);
	timegamesprite0.setScale(Vector2f(1.3, 1.3));
	timegamesprite0.setPosition(Vector2f(1000, 0));

	
	timegametexture1.loadFromFile("gametime1.png");
	timegamesprite1.setTexture(timegametexture1);
	timegamesprite1.setScale(Vector2f(1.3, 1.3));
	timegamesprite1.setPosition(Vector2f(1000, 0));

	
	timegametexture2.loadFromFile("gametime2.png");
	timegamesprite2.setTexture(timegametexture2);
	timegamesprite2.setScale(Vector2f(1.3, 1.3));
	timegamesprite2.setPosition(Vector2f(1000, 0));


	timegametexture3.loadFromFile("gametime3.png");
	timegamesprite3.setTexture(timegametexture3);
	timegamesprite3.setScale(Vector2f(1.3, 1.3));
	timegamesprite3.setPosition(Vector2f(1000, 0));

	timegametexture4.loadFromFile("gametime4.png");
	timegamesprite4.setTexture(timegametexture4);
	timegamesprite4.setScale(Vector2f(1.3, 1.3));
	timegamesprite4.setPosition(Vector2f(1000, 0));

	
	timegametexture5.loadFromFile("gametime5.png");
	timegamesprite5.setTexture(timegametexture5);
	timegamesprite5.setScale(Vector2f(1.3, 1.3));
	timegamesprite5.setPosition(Vector2f(1000, 0));


	timegametexture6.loadFromFile("gametime6.png");
	timegamesprite6.setTexture(timegametexture6);
	timegamesprite6.setScale(Vector2f(1.3, 1.3));
	timegamesprite6.setPosition(Vector2f(1000, 0));

	
	timegametexture7.loadFromFile("gametime7.png");
	timegamesprite7.setTexture(timegametexture7);
	timegamesprite7.setScale(Vector2f(1.3, 1.3));
	timegamesprite7.setPosition(Vector2f(1000, 0));

	
	timegametexture8.loadFromFile("gametime8.png");
	timegamesprite8.setTexture(timegametexture8);
	timegamesprite8.setScale(Vector2f(1.3, 1.3));
	timegamesprite8.setPosition(Vector2f(1000, 0));

	
	timegametexture9.loadFromFile("gametime9.png");
	timegamesprite9.setTexture(timegametexture9);
	timegamesprite9.setScale(Vector2f(1.3, 1.3));
	timegamesprite9.setPosition(Vector2f(1000, 0));

	
	timegametexture10.loadFromFile("gametime10.png");
	
	timegamesprite10.setTexture(timegametexture10);
	timegamesprite10.setScale(Vector2f(1.3, 1.3));
	timegamesprite10.setPosition(Vector2f(1000, 0));

	
	timegametexture11.loadFromFile("gametime11.png");
	timegamesprite11.setTexture(timegametexture11);
	timegamesprite11.setScale(Vector2f(1.3, 1.3));
	timegamesprite11.setPosition(Vector2f(1000, 0));

	
	timegametexture12.loadFromFile("gametime12.png");
	Sprite timegamesprite12;
	timegamesprite12.setTexture(timegametexture12);
	timegamesprite12.setScale(Vector2f(1.3, 1.3));
	timegamesprite12.setPosition(Vector2f(1000, 0));

	
	timegametexture13.loadFromFile("gametime13.png");
	
	timegamesprite13.setTexture(timegametexture13);
	timegamesprite13.setScale(Vector2f(1.3, 1.3));
	timegamesprite13.setPosition(Vector2f(1000, 0));

	
	timegametexture14.loadFromFile("gametime14.png");
	
	timegamesprite14.setTexture(timegametexture14);
	timegamesprite14.setScale(Vector2f(1.3, 1.3));
	timegamesprite14.setPosition(Vector2f(1000, 0));

	
	timegametexture15.loadFromFile("gametime15.png");
	
	timegamesprite15.setTexture(timegametexture15);
	timegamesprite15.setScale(Vector2f(1.3, 1.3));
	timegamesprite15.setPosition(Vector2f(1000, 0));


	timegametexture16.loadFromFile("gametime16.png");
	
	timegamesprite16.setTexture(timegametexture16);
	timegamesprite16.setScale(Vector2f(1.3, 1.3));
	timegamesprite16.setPosition(Vector2f(1000, 0));

	
	timegametexture17.loadFromFile("gametime17.png");
	
	timegamesprite17.setTexture(timegametexture17);
	timegamesprite17.setScale(Vector2f(1.3, 1.3));
	timegamesprite17.setPosition(Vector2f(1000, 0));

	timegametexture18.loadFromFile("gametime18.png");
	timegamesprite18.setTexture(timegametexture18);
	timegamesprite18.setScale(Vector2f(1.3, 1.3));
	timegamesprite18.setPosition(Vector2f(1000, 0));




	//////////////////////////// level up////////////////////////////////

	levelupbackgroundtexture.loadFromFile("levelcomp.png");
	levelupbackgroundsprite.setTexture(levelupbackgroundtexture);
	levelupbackgroundsprite.setPosition(550, 150);
	levelupbackgroundsprite.setScale(Vector2f(1.2, 1.2));

	level_up_texture.loadFromFile("levelcomp_next.png");
	level_up_sprite.setTexture(level_up_texture);
	level_up_sprite.setPosition(840, 695);
	level_up_sprite.setScale(Vector2f(1, 1));

	level_uphover_texture.loadFromFile("levelcomp_next_hover.png");
	level_uphover_sprite.setTexture(level_uphover_texture);
	level_uphover_sprite.setPosition(840, 695);
	level_uphover_sprite.setScale(Vector2f(1, 1));

	level_upgoal_text.setFont(disneyfont);
	level_upgoal_text.setCharacterSize(45);
	level_upgoal_text.setFillColor(Color::Yellow);
	level_upgoal_text.setPosition(990, 600);
	level_upgoal_text.setOutlineColor(Color::Black);
	level_upgoal_text.setOutlineThickness(2);

	////////////lose/////////////////////////////

	levellosebackgroundtexture.loadFromFile("levellose.png");
	levellosebackgroundsprite.setTexture(levellosebackgroundtexture);
	levellosebackgroundsprite.setPosition(550, 150);
	levellosebackgroundsprite.setScale(Vector2f(1.2, 1.2));

	level_lose_texture.loadFromFile("levellose_back.png");
	level_lose_sprite.setTexture(level_lose_texture);
	level_lose_sprite.setPosition(960, 655);
	level_lose_sprite.setScale(Vector2f(1, 1));

	level_losehover_texture.loadFromFile("levellose_back_hover.png");
	level_losehover_sprite.setTexture(level_losehover_texture);
	level_losehover_sprite.setPosition(960, 655);
	level_losehover_sprite.setScale(Vector2f(1, 1));

	basket_texture.loadFromFile("basket.png");
	basket_sprite.setTexture(basket_texture);
	basket_sprite.setScale(Vector2f(0.25, 0.3));
	basket_sprite.setPosition(Vector2f(8, 900));


	fra5_texture.loadFromFile("fra52.png");
	fra5_sprite.setTexture(fra5_texture);
	fra5_sprite.setScale(Vector2f(0.9, 0.9));
	fra5_sprite.setPosition(Vector2f(966, 915));

	meat_texture.loadFromFile("meat2.png");
	meat_sprite.setTexture(meat_texture);
	meat_sprite.setScale(Vector2f(0.9, 0.9));
	meat_sprite.setPosition(Vector2f(966, 919));


	
	component5spritepop.setTexture(component5texture);
	component5spritepop.setScale(Vector2f(0.81, 0.81));
	component5spritepop.setPosition(Vector2f(966, 902));

	////////////////////////////////

	component2spritepop.setTexture(component2texture);
	component2spritepop.setScale(Vector2f(0.91, 0.91));
	component2spritepop.setPosition(Vector2f(969, 905));

	component2_1spritepop.setTexture(component2_1texture);
	component2_1spritepop.setScale(Vector2f(0.87, 0.87));
	component2_1spritepop.setPosition(Vector2f(969, 905));

	component2_1spritepop2.setTexture(component2_1texture);
	component2_1spritepop2.setScale(Vector2f(0.87, 0.87));
	component2_1spritepop2.setPosition(Vector2f(969, 903));

	component2_1spritepop2.setTexture(component2_1texture);
	component2_1spritepop2.setScale(Vector2f(0.87, 0.87));
	component2_1spritepop2.setPosition(Vector2f(969, 903));

	////////////////////////////////////////

	component1spritepop.setTexture(component1texture);
	component1spritepop.setScale(Vector2f(0.81, 0.81));
	component1spritepop.setPosition(Vector2f(970, 920));

	component1_1spritepop.setTexture(component1_1texture);
	component1_1spritepop.setScale(Vector2f(1, 1));
	component1_1spritepop.setPosition(Vector2f(1720, 870));

	////////////////////
	component5spritepop.setTexture(component5texture);
	component5spritepop.setScale(Vector2f(0.81, 0.81));
	component5spritepop.setPosition(Vector2f(966, 900));

	//////////////////////
	component5_1spritepop.setTexture(component5_1texture);
	component5_1spritepop.setScale(Vector2f(0.82, 0.82));
	component5_1spritepop.setPosition(Vector2f(965, 950));

	component9spritepop.setTexture(component9texture);
	component9spritepop.setScale(Vector2f(0.68, 0.68));
	component9spritepop.setPosition(Vector2f(963, 920));

	component9_1spritepop.setTexture(component9_1texture);
	component9_1spritepop.setScale(Vector2f(0.75, 0.75));
	component9_1spritepop.setPosition(Vector2f(969, 920));

	
	component3spritepop.setTexture(component3texture);
	component3spritepop.setScale(Vector2f(0.86, 0.86));
	component3spritepop.setPosition(Vector2f(969, 905));

	component3spritepop2.setTexture(component3texture);
	component3spritepop2.setScale(Vector2f(0.86, 0.86));
	component3spritepop2.setPosition(Vector2f(969, 903));

	stack_id.push(0);

	true_order.loadFromFile("true.png");

	true_order1_first.setTexture(true_order);
	true_order1_first.setScale(0.2,0.2);
	true_order1_first.setPosition(715, 195);
	true_order1_second.setScale(0.2, 0.2);
	true_order1_second.setPosition(800, 240);

	true_order2_first.setTexture(true_order);
	true_order2_first.setScale(0.2, 0.2);
	true_order2_first.setPosition(1215, 195);
	true_order2_second.setScale(0.2, 0.2);
	true_order2_second.setPosition(1320, 240);

	true_order3_first.setTexture(true_order);
	true_order3_first.setScale(0.2, 0.2);
	true_order3_first.setPosition(1690, 195);
	true_order3_second.setScale(0.2, 0.2);
	true_order3_second.setPosition(1760, 245);
}



void level::level_game(RenderWindow& win)
{

		Event event;
		while (win.pollEvent(event))
		{

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > level_losehover_sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level_losehover_sprite.getGlobalBounds().left + level_losehover_sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level_losehover_sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level_losehover_sprite.getGlobalBounds().top + level_losehover_sprite.getGlobalBounds().height))
			{
				sound_click.play();
				win_active = 1;


			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > level_up_sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level_up_sprite.getGlobalBounds().left + level_up_sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level_up_sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level_up_sprite.getGlobalBounds().top + level_up_sprite.getGlobalBounds().height))
			{
				sound_click.play();
				win_active = 1;

			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > basket_sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (basket_sprite.getGlobalBounds().left + basket_sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > basket_sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (basket_sprite.getGlobalBounds().top + basket_sprite.getGlobalBounds().height))
			{
				wronge_order = true;

				if (wronge_order == true)
				{

					burger_draw = false;
					cu_draw = false;
					zaton_draw = false;
					tomatom_draw = false;
					lettuce_draw = false;
					cheese_draw = false;
					bread2_draw = false;
					bread0_draw = false;
					felfel_draw = false;
					lettuce2 = false;
					fra5_draw = false;
					meat_draw = false;

				}
			}
			///////////////////////////////////////////

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component5sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component5sprite.getGlobalBounds().left + component5sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component5sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component5sprite.getGlobalBounds().top + component5sprite.getGlobalBounds().height))
			{
				bread2_draw = true;
				stack_id.push(3);
			}


			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component1sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component1sprite.getGlobalBounds().left + component1sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component1sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component1sprite.getGlobalBounds().top + component1sprite.getGlobalBounds().height))

			{
			
				if (bread2_draw == false)
				{
					if (bread0_draw == true)
					{
						

						level_score_before_add += 15;
						burger_draw = true;
						if (current_order == 1)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order1[i].storeelement.id == 19)
								{
									price_order1[i].order_food_done = true;
								}

							}
						}

						if (current_order == 2)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order2[i].storeelement.id == 19)
								{
									price_order2[i].order_food_done = true;
								}

							}
						}

						if (current_order == 3)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order3[i].storeelement.id == 19)
								{
									price_order3[i].order_food_done = true;

								}

							}
						}
					}
				}

			}
		

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component5_1sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component5_1sprite.getGlobalBounds().left + component5_1sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component5_1sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component5_1sprite.getGlobalBounds().top + component5_1sprite.getGlobalBounds().height))
			{

				
				if (bread2_draw == false)
				{
					
					bread0_draw = true;
				}


			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component4sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component4sprite.getGlobalBounds().left + component4sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component4sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component4sprite.getGlobalBounds().top + component4sprite.getGlobalBounds().height))
			{
				if (bread2_draw == false)
				{
					if (bread0_draw == true)
					{

						fra5_draw = true;

						if (current_order == 1)
						{
							level_score_before_add += 20;
							for (int i = 0; i < 4; i++)
							{
								if (price_order1[i].storeelement.id == 24)
								{
									price_order1[i].order_food_done = true;


								}

							}
						}

						if (current_order == 2)
						{
							level_score_before_add += 20;
							for (int i = 0; i < 4; i++)
							{
								if (price_order2[i].storeelement.id == 24)
								{
									price_order2[i].order_food_done = true;

								}

							}
						}

						if (current_order == 3)
						{
							level_score_before_add += 20;
							for (int i = 0; i < 4; i++)
							{
								if (price_order3[i].storeelement.id == 24)
								{
									price_order3[i].order_food_done = true;

								}

							}
						}

					}
				}
			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component4_1sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component4_1sprite.getGlobalBounds().left + component4_1sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component4_1sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component4_1sprite.getGlobalBounds().top + component4_1sprite.getGlobalBounds().height))
			{
				if (bread2_draw == false)
				{
					if (bread0_draw == true)
					{

						meat_draw = true;
						level_score_before_add += 20;
						if (current_order == 1)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order1[i].storeelement.id == 23)
								{
									price_order1[i].order_food_done = true;

								}

							}
						}

						if (current_order == 2)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order2[i].storeelement.id == 23)
								{
									price_order2[i].order_food_done = true;
								}

							}
						}

						if (current_order == 3)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order3[i].storeelement.id == 23)
								{
									price_order3[i].order_food_done = true;
								}

							}
						}
					}
				}
			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component3sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component3sprite.getGlobalBounds().left + component3sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component3sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component3sprite.getGlobalBounds().top + component3sprite.getGlobalBounds().height))
			{
				if (bread2_draw == false) {
					
					
					int num = stack_id.top();
					stack_id.push(num + 1);
					level_score_before_add += 5;
					lettuce_draw = true;
					if (current_order == 1)
					{
						for (int i = 0; i < 4; i++)
						{
							if (price_order1[i].storeelement.id == 22)
							{
								price_order1[i].order_food_done = true;
								
							}

						}
						
					}

					if (current_order == 2)
					{
						for (int i = 0; i < 4; i++)
						{
							if (price_order2[i].storeelement.id == 22)
							{
								price_order2[i].order_food_done = true;

							}

						}
					}

					if (current_order == 3)
					{
						for (int i = 0; i < 4; i++)
						{
							if (price_order3[i].storeelement.id == 22)
							{
								price_order3[i].order_food_done = true;

							}

						}
					}
					
				}

			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component8_1sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component8_1sprite.getGlobalBounds().left + component8_1sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component8_1sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component8_1sprite.getGlobalBounds().top + component8_1sprite.getGlobalBounds().height))
			{

				level_score_before_add += 10;
				
				if (current_order == 1)
				{
					
							price_order1[0].order_food_done = true;
						

				}

				if (current_order == 2)
				{
					price_order2[0].order_food_done = true;
				}

				if (current_order == 3)
				{
					price_order3[0].order_food_done = true;
				}
			
				
			}


			if (event.type == Event::MouseButtonPressed&& Mouse::getPosition(win).x > component6_1sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component6_1sprite.getGlobalBounds().left + component6_1sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component6_1sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component6_1sprite.getGlobalBounds().top + component6_1sprite.getGlobalBounds().height))
			{

				level_score_before_add += 10;
				if (current_order == 1)
				{
					price_order1[0].order_food_done = true;
					
				}

				if (current_order == 2)
				{
					price_order2[0].order_food_done = true;
				}

				if (current_order == 3)
				{
					price_order3[0].order_food_done = true;
				}
			
			}


			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component7sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component7sprite.getGlobalBounds().left + component7sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component7sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component7sprite.getGlobalBounds().top + component7sprite.getGlobalBounds().height))
			{

				level_score_before_add += 15;
				if (current_order == 1)
				{
					price_order1[0].order_food_done = true;
				}

				if (current_order == 2)
				{
					price_order2[0].order_food_done = true;
				}

				if (current_order == 3)
				{
					price_order3[0].order_food_done = true;
				}
				
			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component2sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component2sprite.getGlobalBounds().left + component2sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component2sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component2sprite.getGlobalBounds().top + component2sprite.getGlobalBounds().height))
			{
				if (bread2_draw == false) {
					if (bread0_draw == true)
					{

						cu_draw = true;
						int num = stack_id.top();
						stack_id.push(num + 1);
						level_score_before_add += 5;

						if (current_order == 1)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order1[i].storeelement.id == 28)
								{
									price_order1[i].order_food_done = true;

								}

							}
						}

						if (current_order == 2)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order2[i].storeelement.id == 28)
								{
									price_order2[i].order_food_done = true;


								}

							}
						}

						if (current_order == 3)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order3[i].storeelement.id == 28)
								{
									price_order3[i].order_food_done = true;

								}

							}
						}
					}
				}


			}

			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > component2_1sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (component2_1sprite.getGlobalBounds().left + component2_1sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > component2_1sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (component2_1sprite.getGlobalBounds().top + component2_1sprite.getGlobalBounds().height))
			{
				if (bread2_draw == false) {
					if (bread0_draw == true)
					{
						zaton_draw = true;
						int num = stack_id.top();
						stack_id.push(num + 1);
						level_score_before_add += 5;
						if (current_order == 1)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order1[i].storeelement.id == 21)
								{
									price_order1[i].order_food_done = true;

								}

							}
						}

						if (current_order == 2)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order2[i].storeelement.id == 21)
								{
									price_order2[i].order_food_done = true;

								}

							}
						}

						if (current_order == 3)
						{
							for (int i = 0; i < 4; i++)
							{
								if (price_order3[i].storeelement.id == 21)
								{
									price_order3[i].order_food_done = true;

								}

							}
						}
					}
				}

			}


			
		}
	
		if (Mouse::getPosition(win).x > level_up_sprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level_up_sprite.getGlobalBounds().left + level_up_sprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level_up_sprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level_up_sprite.getGlobalBounds().top + level_up_sprite.getGlobalBounds().height))
		{
			win.draw(level_uphover_sprite);
		}
	//push to serve orders
	passedTimeperson += clock2.getElapsedTime();

	if (people_in_order < 3)
	{

		if (passedTimeperson >= sf::seconds(350))
		{
			srand(time(NULL));

			z = character_q.front();
			character_q.pop();
			character_q.push(z);

			if (z == 0)
			{
				draw_before0 = true;
				draw_before3 = false;
				draw_before6 = false;
				draw_before9 = false;

				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						people_order_array[0].order_done = false;
						time_done1 = false;
						break;
					}
				}
				//////////////////////////////////

				randomelement1 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement3 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];

				while ((randomelement2.id == 19 && burgercount == 0) || (randomelement2.id == '24' && chickencount == '0') || (randomelement2.id == '23' && meatcount == '0'))
				{

					randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement2.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement2.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement2.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement4.id == randomelement3.id)
				{
					randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement1
				storeelement.id = randomelement1.id;
				storeelement.spritename = randomelement1.spritename;
				storeelement.can_buy = randomelement1.can_buy;
				storeelement.price = randomelement1.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[0] = price_order_struct;

				//randomelement2
				storeelement.id = randomelement2.id;
				storeelement.spritename = randomelement2.spritename;
				storeelement.can_buy = randomelement2.can_buy;
				storeelement.price = randomelement2.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[1] = price_order_struct;

				//randomelement3
				storeelement.id = randomelement3.id;
				storeelement.spritename = randomelement3.spritename;
				storeelement.can_buy = randomelement3.can_buy;
				storeelement.price = randomelement3.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[2] = price_order_struct;

				//randomelement4
				storeelement.id = randomelement4.id;
				storeelement.spritename = randomelement4.spritename;
				storeelement.can_buy = randomelement4.can_buy;
				storeelement.price = randomelement4.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[3] = price_order_struct;
			}
			else if (z == 1)
			{

				draw_before1 = true;
				draw_before4 = false;
				draw_before7 = false;
				draw_before10 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						people_order_array[1].order_done = false;
						time_done2 = false;
						break;
					}
				}

				//////////////////////////////////

				randomelement5 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement7 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement6.id == 19 && burgercount == 0) || (randomelement6.id == '24' && chickencount == '0') || (randomelement6.id == '23' && meatcount == '0'))
				{

					randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement6.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement6.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement6.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement8.id == randomelement7.id)
				{
					randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement5
				storeelement.id = randomelement5.id;
				storeelement.spritename = randomelement5.spritename;
				storeelement.can_buy = randomelement5.can_buy;
				storeelement.price = randomelement5.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[0] = price_order_struct;

				//randomelement6
				storeelement.id = randomelement6.id;
				storeelement.spritename = randomelement6.spritename;
				storeelement.can_buy = randomelement6.can_buy;
				storeelement.price = randomelement6.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[1] = price_order_struct;

				//randomelement7
				storeelement.id = randomelement7.id;
				storeelement.spritename = randomelement7.spritename;
				storeelement.can_buy = randomelement7.can_buy;
				storeelement.price = randomelement7.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[2] = price_order_struct;

				//randomelement8
				storeelement.id = randomelement8.id;
				storeelement.spritename = randomelement8.spritename;
				storeelement.can_buy = randomelement8.can_buy;
				storeelement.price = randomelement8.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[3] = price_order_struct;
			}
			else if (z == 2)
			{
				draw_before2 = true;
				draw_before5 = false;
				draw_before8 = false;
				draw_before11 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						people_order_array[2].order_done = false;
						time_done3 = false;
						break;
					}
				}

				//////////////////////////////////

				randomelement9 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement11 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement10.id == 19 && burgercount == 0) || (randomelement10.id == '24' && chickencount == '0') || (randomelement10.id == '23' && meatcount == '0'))
				{

					randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement10.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement10.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement10.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}
				while (randomelement12.id == randomelement7.id)
				{
					randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement9
				storeelement.id = randomelement9.id;
				storeelement.spritename = randomelement9.spritename;
				storeelement.can_buy = randomelement9.can_buy;
				storeelement.price = randomelement9.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[0] = price_order_struct;

				//randomelement10
				storeelement.id = randomelement10.id;
				storeelement.spritename = randomelement10.spritename;
				storeelement.can_buy = randomelement10.can_buy;
				storeelement.price = randomelement10.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[1] = price_order_struct;

				//randomelement11
				storeelement.id = randomelement11.id;
				storeelement.spritename = randomelement11.spritename;
				storeelement.can_buy = randomelement11.can_buy;
				storeelement.price = randomelement11.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[2] = price_order_struct;

				//randomelement12
				storeelement.id = randomelement12.id;
				storeelement.spritename = randomelement12.spritename;
				storeelement.can_buy = randomelement12.can_buy;
				storeelement.price = randomelement12.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[3] = price_order_struct;
			}
			else if (z == 3)
			{
				draw_before0 = false;
				draw_before3 = true;
				draw_before6 = false;
				draw_before9 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						people_order_array[0].order_done = false;
						time_done1 = false;
						break;

					}
				}

				//////////////////////////////////

				randomelement1 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement3 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];

				while ((randomelement2.id == 19 && burgercount == 0) || (randomelement2.id == '24' && chickencount == '0') || (randomelement2.id == '23' && meatcount == '0'))
				{

					randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement2.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement2.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement2.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement4.id == randomelement3.id)
				{
					randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement1
				storeelement.id = randomelement1.id;
				storeelement.spritename = randomelement1.spritename;
				storeelement.can_buy = randomelement1.can_buy;
				storeelement.price = randomelement1.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[0] = price_order_struct;

				//randomelement2
				storeelement.id = randomelement2.id;
				storeelement.spritename = randomelement2.spritename;
				storeelement.can_buy = randomelement2.can_buy;
				storeelement.price = randomelement2.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[1] = price_order_struct;

				//randomelement3
				storeelement.id = randomelement3.id;
				storeelement.spritename = randomelement3.spritename;
				storeelement.can_buy = randomelement3.can_buy;
				storeelement.price = randomelement3.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[2] = price_order_struct;

				//randomelement4
				storeelement.id = randomelement4.id;
				storeelement.spritename = randomelement4.spritename;
				storeelement.can_buy = randomelement4.can_buy;
				storeelement.price = randomelement4.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[3] = price_order_struct;
			}
			else if (z == 4)
			{
				draw_before1 = false;
				draw_before4 = true;
				draw_before7 = false;
				draw_before10 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						people_order_array[1].order_done = false;
						time_done2 = false;
						break;

					}
				}

				//////////////////////////////////

				randomelement5 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement7 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement6.id == 19 && burgercount == 0) || (randomelement6.id == '24' && chickencount == '0') || (randomelement6.id == '23' && meatcount == '0'))
				{

					randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement6.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement6.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement6.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement8.id == randomelement7.id)
				{
					randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement5
				storeelement.id = randomelement5.id;
				storeelement.spritename = randomelement5.spritename;
				storeelement.can_buy = randomelement5.can_buy;
				storeelement.price = randomelement5.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[0] = price_order_struct;

				//randomelement6
				storeelement.id = randomelement6.id;
				storeelement.spritename = randomelement6.spritename;
				storeelement.can_buy = randomelement6.can_buy;
				storeelement.price = randomelement6.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[1] = price_order_struct;

				//randomelement7
				storeelement.id = randomelement7.id;
				storeelement.spritename = randomelement7.spritename;
				storeelement.can_buy = randomelement7.can_buy;
				storeelement.price = randomelement7.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[2] = price_order_struct;

				//randomelement8
				storeelement.id = randomelement8.id;
				storeelement.spritename = randomelement8.spritename;
				storeelement.can_buy = randomelement8.can_buy;
				storeelement.price = randomelement8.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[3] = price_order_struct;
			}
			else if (z == 5)
			{
				draw_before2 = false;
				draw_before5 = true;
				draw_before8 = false;
				draw_before11 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						people_order_array[2].order_done = false;
						time_done3 = false;

						break;

					}
				}

				//////////////////////////////////

				randomelement9 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement11 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement10.id == 19 && burgercount == 0) || (randomelement10.id == '24' && chickencount == '0') || (randomelement10.id == '23' && meatcount == '0'))
				{

					randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement10.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement10.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement10.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}
				while (randomelement12.id == randomelement7.id)
				{
					randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}


				///////////////////////////////////////////////////
				//randomelement9
				storeelement.id = randomelement9.id;
				storeelement.spritename = randomelement9.spritename;
				storeelement.can_buy = randomelement9.can_buy;
				storeelement.price = randomelement9.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[0] = price_order_struct;

				//randomelement10
				storeelement.id = randomelement10.id;
				storeelement.spritename = randomelement10.spritename;
				storeelement.can_buy = randomelement10.can_buy;
				storeelement.price = randomelement10.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[1] = price_order_struct;

				//randomelement11
				storeelement.id = randomelement11.id;
				storeelement.spritename = randomelement11.spritename;
				storeelement.can_buy = randomelement11.can_buy;
				storeelement.price = randomelement11.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[2] = price_order_struct;

				//randomelement12
				storeelement.id = randomelement12.id;
				storeelement.spritename = randomelement12.spritename;
				storeelement.can_buy = randomelement12.can_buy;
				storeelement.price = randomelement12.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[3] = price_order_struct;
			}
			else if (z == 6)
			{
				draw_before0 = false;
				draw_before3 = false;
				draw_before6 = true;
				draw_before9 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						time_done1 = false;
						people_order_array[0].order_done = false;
						break;

					}
				}

				//////////////////////////////////


				randomelement1 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement3 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];

				while ((randomelement2.id == 19 && burgercount == 0) || (randomelement2.id == '24' && chickencount == '0') || (randomelement2.id == '23' && meatcount == '0'))
				{

					randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement2.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement2.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement2.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement4.id == randomelement3.id)
				{
					randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement1
				storeelement.id = randomelement1.id;
				storeelement.spritename = randomelement1.spritename;
				storeelement.can_buy = randomelement1.can_buy;
				storeelement.price = randomelement1.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[0] = price_order_struct;

				//randomelement2
				storeelement.id = randomelement2.id;
				storeelement.spritename = randomelement2.spritename;
				storeelement.can_buy = randomelement2.can_buy;
				storeelement.price = randomelement2.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[1] = price_order_struct;

				//randomelement3
				storeelement.id = randomelement3.id;
				storeelement.spritename = randomelement3.spritename;
				storeelement.can_buy = randomelement3.can_buy;
				storeelement.price = randomelement3.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[2] = price_order_struct;

				//randomelement4
				storeelement.id = randomelement4.id;
				storeelement.spritename = randomelement4.spritename;
				storeelement.can_buy = randomelement4.can_buy;
				storeelement.price = randomelement4.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[3] = price_order_struct;
			}
			else if (z == 7)
			{
				draw_before1 = false;
				draw_before4 = false;
				draw_before7 = true;
				draw_before10 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						time_done2 = false;
						people_order_array[1].order_done = false;
						break;

					}
				}

				//////////////////////////////////

				randomelement5 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement7 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement6.id == 19 && burgercount == 0) || (randomelement6.id == '24' && chickencount == '0') || (randomelement6.id == '23' && meatcount == '0'))
				{

					randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement6.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement6.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement6.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement8.id == randomelement7.id)
				{
					randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement5
				storeelement.id = randomelement5.id;
				storeelement.spritename = randomelement5.spritename;
				storeelement.can_buy = randomelement5.can_buy;
				storeelement.price = randomelement5.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[0] = price_order_struct;

				//randomelement6
				storeelement.id = randomelement6.id;
				storeelement.spritename = randomelement6.spritename;
				storeelement.can_buy = randomelement6.can_buy;
				storeelement.price = randomelement6.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[1] = price_order_struct;

				//randomelement7
				storeelement.id = randomelement7.id;
				storeelement.spritename = randomelement7.spritename;
				storeelement.can_buy = randomelement7.can_buy;
				storeelement.price = randomelement7.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[2] = price_order_struct;

				//randomelement8
				storeelement.id = randomelement8.id;
				storeelement.spritename = randomelement8.spritename;
				storeelement.can_buy = randomelement8.can_buy;
				storeelement.price = randomelement8.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[3] = price_order_struct;
			}
			else if (z == 8)
			{
				draw_before5 = false;
				draw_before2 = false;
				draw_before8 = true;
				draw_before11 = false;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						time_done3 = false;
						people_order_array[2].order_done = false;
						break;

					}
				}

				//////////////////////////////////

				randomelement9 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement11 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement10.id == 19 && burgercount == 0) || (randomelement10.id == '24' && chickencount == '0') || (randomelement10.id == '23' && meatcount == '0'))
				{

					randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement10.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement10.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement10.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}
				while (randomelement12.id == randomelement7.id)
				{
					randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////

			//randomelement9
				storeelement.id = randomelement9.id;
				storeelement.spritename = randomelement9.spritename;
				storeelement.can_buy = randomelement9.can_buy;
				storeelement.price = randomelement9.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[0] = price_order_struct;

				//randomelement10
				storeelement.id = randomelement10.id;
				storeelement.spritename = randomelement10.spritename;
				storeelement.can_buy = randomelement10.can_buy;
				storeelement.price = randomelement10.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[1] = price_order_struct;

				//randomelement11
				storeelement.id = randomelement11.id;
				storeelement.spritename = randomelement11.spritename;
				storeelement.can_buy = randomelement11.can_buy;
				storeelement.price = randomelement11.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[2] = price_order_struct;

				//randomelement12
				storeelement.id = randomelement12.id;
				storeelement.spritename = randomelement12.spritename;
				storeelement.can_buy = randomelement12.can_buy;
				storeelement.price = randomelement12.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[3] = price_order_struct;
			}
			else if (z == 9)
			{
				draw_before0 = false;
				draw_before3 = false;
				draw_before6 = false;
				draw_before9 = true;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						time_done1 = false;
						people_order_array[0].order_done = false;
						break;

					}
				}

				//////////////////////////////////


				randomelement1 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement3 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];

				while ((randomelement2.id == 19 && burgercount == 0) || (randomelement2.id == '24' && chickencount == '0') || (randomelement2.id == '23' && meatcount == '0'))
				{

					randomelement2 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement2.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement2.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement2.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement4.id == randomelement3.id)
				{
					randomelement4 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement1
				storeelement.id = randomelement1.id;
				storeelement.spritename = randomelement1.spritename;
				storeelement.can_buy = randomelement1.can_buy;
				storeelement.price = randomelement1.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[0] = price_order_struct;

				//randomelement2
				storeelement.id = randomelement2.id;
				storeelement.spritename = randomelement2.spritename;
				storeelement.can_buy = randomelement2.can_buy;
				storeelement.price = randomelement2.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[1] = price_order_struct;

				//randomelement3
				storeelement.id = randomelement3.id;
				storeelement.spritename = randomelement3.spritename;
				storeelement.can_buy = randomelement3.can_buy;
				storeelement.price = randomelement3.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[2] = price_order_struct;

				//randomelement4
				storeelement.id = randomelement4.id;
				storeelement.spritename = randomelement4.spritename;
				storeelement.can_buy = randomelement4.can_buy;
				storeelement.price = randomelement4.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order1[3] = price_order_struct;

			}
			else if (z == 10)
			{
				draw_before1 = false;
				draw_before4 = false;
				draw_before7 = false;
				draw_before10 = true;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						time_done2 = false;
						people_order_array[1].order_done = false;
						break;

					}
				}

				//////////////////////////////////

				randomelement5 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement7 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement6.id == 19 && burgercount == 0) || (randomelement6.id == '24' && chickencount == '0') || (randomelement6.id == '23' && meatcount == '0'))
				{

					randomelement6 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement6.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement6.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement6.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}

				while (randomelement8.id == randomelement7.id)
				{
					randomelement8 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}

				///////////////////////////////////////////////////
				//randomelement5
				storeelement.id = randomelement5.id;
				storeelement.spritename = randomelement5.spritename;
				storeelement.can_buy = randomelement5.can_buy;
				storeelement.price = randomelement5.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[0] = price_order_struct;

				//randomelement6
				storeelement.id = randomelement6.id;
				storeelement.spritename = randomelement6.spritename;
				storeelement.can_buy = randomelement6.can_buy;
				storeelement.price = randomelement6.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[1] = price_order_struct;

				//randomelement7
				storeelement.id = randomelement7.id;
				storeelement.spritename = randomelement7.spritename;
				storeelement.can_buy = randomelement7.can_buy;
				storeelement.price = randomelement7.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[2] = price_order_struct;

				//randomelement8
				storeelement.id = randomelement8.id;
				storeelement.spritename = randomelement8.spritename;
				storeelement.can_buy = randomelement8.can_buy;
				storeelement.price = randomelement8.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order2[3] = price_order_struct;
			}
			else if (z == 11)
			{
				draw_before2 = false;
				draw_before5 = false;
				draw_before8 = false;
				draw_before11 = true;
				person_order_struct.order_done = false;
				person_order_struct.id_of_person = z;
				for (int i = 0; i < 3; i++)
				{
					if (people_order_array[i].order_done == true)
					{
						people_order_array[i] = person_order_struct;
						time_done3 = false;
						people_order_array[2].order_done = false;
						break;
					}
				}

				//////////////////////////////////

				randomelement9 = elements_not_sandwitch[rand() % elements_not_sandwitch.size()];
				randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				randomelement11 = sandwitch_elements[rand() % sandwitch_elements.size()];
				randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];


				while ((randomelement10.id == 19 && burgercount == 0) || (randomelement10.id == '24' && chickencount == '0') || (randomelement10.id == '23' && meatcount == '0'))
				{

					randomelement10 = sandwitch_meat_elements[rand() % sandwitch_meat_elements.size()];
				}
				if (randomelement10.id == 19)
				{
					burgerstack.pop();
					burgercount--;
				}
				else if (randomelement10.id == 24)
				{
					chickenstack.pop();
					chickencount--;
				}
				else if (randomelement10.id == 23)
				{
					meatstack.pop();
					meatcount--;
				}
				while (randomelement12.id == randomelement7.id)
				{
					randomelement12 = sandwitch_elements[rand() % sandwitch_elements.size()];
				}


				///////////////////////////////////////////////////
				//randomelement9
				storeelement.id = randomelement9.id;
				storeelement.spritename = randomelement9.spritename;
				storeelement.can_buy = randomelement9.can_buy;
				storeelement.price = randomelement9.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[0] = price_order_struct;

				//randomelement10
				storeelement.id = randomelement10.id;
				storeelement.spritename = randomelement10.spritename;
				storeelement.can_buy = randomelement10.can_buy;
				storeelement.price = randomelement10.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[1] = price_order_struct;

				//randomelement11
				storeelement.id = randomelement11.id;
				storeelement.spritename = randomelement11.spritename;
				storeelement.can_buy = randomelement11.can_buy;
				storeelement.price = randomelement11.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[2] = price_order_struct;

				//randomelement12
				storeelement.id = randomelement12.id;
				storeelement.spritename = randomelement12.spritename;
				storeelement.can_buy = randomelement12.can_buy;
				storeelement.price = randomelement12.price;
				price_order_struct.storeelement = storeelement;
				price_order_struct.order_food_done = false;
				price_order3[3] = price_order_struct;
			}

			people_in_order++;
			passedTimeperson = clock2.restart();

		}

	}

	/////////////////////check if time for person is done////////////////////

	if (time_done1 == true)
	{
		people_order_array[0].order_done = true;
		people_in_order--;
		current_order = 2;
	}
	if (time_done2 == true)
	{
		people_order_array[1].order_done = true;
		people_in_order--;
		current_order = 3;
	}
	if (time_done3 == true)
	{
		people_order_array[2].order_done = true;
		people_in_order--;
		current_order = 1;
	}

	win.draw(levelbackgroundsprite);

	//////////////////////////////////////////////////////////////
	converttostring.str("");
	converttostring.clear();

	converttostring << level_score;
	level_score_text.setString(converttostring.str());

	win.draw(level_score_text);

	time_game(win);

	/////////////money gif//////////////////
	if (game_time_done == false)
	{

		win.draw(basket_sprite);
		////////////draw food///////////////

		win.draw(component3sprite);
		win.draw(component2sprite);
		win.draw(component2_1sprite);
		win.draw(component1sprite);
		win.draw(component4sprite);
		win.draw(component4_1sprite);/*
		win.draw(component6sprite);*/
		win.draw(component6_1sprite);
		win.draw(component7sprite);/*
		win.draw(component7_1sprite);*/
		win.draw(component8sprite);
		win.draw(component8_1sprite);
		win.draw(component5sprite);
		win.draw(component5_1sprite);

		if (!vector_food.empty())
		{
			for (int i = 0; i < vector_food.size(); i++)
			{
				if (vector_food[i].namesprite == "Apple")
				{
					win.draw(component14_1sprite);
				}
				else if (vector_food[i].namesprite == "Cupcake")
				{
					win.draw(component13_1sprite);
				}
				else if (vector_food[i].namesprite == "Tomato")
				{
					win.draw(component9_1sprite);
				}
				else if (vector_food[i].namesprite == "Cheese")
				{
					win.draw(component1_1sprite);
				}
				else if (vector_food[i].namesprite == "Eclier")
				{
					win.draw(component15sprite);
				}
				else if (vector_food[i].namesprite == "Pepper")
				{
					win.draw(component9sprite);
				}
				else if (vector_food[i].namesprite == "Dount")
				{
					win.draw(component13sprite);
				}
				else if (vector_food[i].namesprite == "Hotdog")
				{
					win.draw(component11sprite);
				}
				else if (vector_food[i].namesprite == "Salmon")
				{
					win.draw(component11_1sprite);
				}
				else if (vector_food[i].namesprite == "Salad")
				{
					win.draw(component3_1sprite);
				}
				else if (vector_food[i].namesprite == "Pancake")
				{
					win.draw(component12_1sprite);
				}
				else if (vector_food[i].namesprite == "Cake")
				{
					win.draw(component12sprite);
				}
				else if (vector_food[i].namesprite == "Swissroll")
				{
					win.draw(component15_1sprite);
				}
				else if (vector_food[i].namesprite == "Soup")
				{
					win.draw(component14sprite);
				}
				else if (vector_food[i].namesprite == "Dish1")
				{
					win.draw(component10sprite);
				}
				else if (vector_food[i].namesprite == "Dish2")
				{
					win.draw(component10_1sprite);
				}
			}
		}


		////////////////////////////////////


		if (bread0_draw == true)
		{

			win.draw(component5_1spritepop);

		}
		if (burger_draw == true)
		{


			win.draw(component1spritepop);

		}
		if (meat_draw == true)
		{

			win.draw(meat_sprite);

		}
		if (fra5_draw == true)
		{

			win.draw(fra5_sprite);

		}
		
		if (lettuce_draw == true)
		{
			if (stack_id.top() == 1)
			{
				win.draw(component3spritepop);
			}
			
		}

		if (cu_draw == true)
		{

			if (stack_id.top() == 1)
			{
				win.draw(component2spritepop);
			}
			

		}
		if (zaton_draw == true)
		{

			if (stack_id.top() == 1)
			{
				win.draw(component2_1spritepop);
			}
			
		}
		if (lettuce_draw == true)
		{
			if (stack_id.top() == 2)
			{
				win.draw(component3spritepop2);
			}
			
		}
		if (cu_draw == true)
		{

			if (stack_id.top() == 2)
			{
				win.draw(component2spritepop2);
			}
			

		}
		if (zaton_draw == true)
		{

			if (stack_id.top() == 2)
			{
				win.draw(component2_1spritepop2);
			}
			

		}

		if (cheese_draw == true)
		{

			win.draw(component1_1spritepop);

		}
		
		
		if (tomatom_draw == true)
		{

			win.draw(component9_1spritepop);

		}
		if (felfel_draw == true)
		{

			win.draw(component9spritepop);


		}

		if (salmon_draw == true)
		{

			win.draw(salmon_sprite);

		}
		

		if (bread2_draw == true)
		{

			win.draw(component5spritepop);

		}

		///////////////////////////////////
		
		passed_time_money += clock1.getElapsedTime();
		if (passed_time_money <= sf::seconds(20))
		{
			win.draw(money5_sprite);
		}
		else if (passed_time_money <= sf::seconds(40))
		{
			win.draw(money4_sprite);
		}
		else if (passed_time_money <= sf::seconds(60))
		{

			win.draw(money3_sprite);
		}
		else if (passed_time_money <= sf::seconds(80))
		{

			win.draw(money2_sprite);
		}
		else if (passed_time_money <= sf::seconds(100))
		{

			win.draw(money1_sprite);
		}
		else if (passed_time_money <= sf::seconds(120)) {
			win.draw(money6_sprite);
		}
		else if (passed_time_money <= sf::seconds(140)) {
			win.draw(money7_sprite);
		}
		else if (passed_time_money <= sf::seconds(160)) {
			win.draw(money8_sprite);
		}
		else if (passed_time_money <= sf::seconds(180)) {
			win.draw(money9_sprite);
		}
		else if (passed_time_money < sf::seconds(200)) {
			passed_time_money = clock1.restart();
		}

	
			//////////////////////left characters/////////////////////////

		if (people_order_array[0].order_done == false && draw_before0 == true)
		{
			win.draw(playimage0);
			leftOrderTime(win);

			win.draw(menuordersprite);
			leftorderposition(win, randomelement1.id, randomelement2.id, randomelement3.id, randomelement4.id);

			
		}
		else if (people_order_array[0].order_done == false && draw_before3 == true)
		{

			win.draw(playimage3);

			win.draw(menuordersprite);
			leftorderposition(win, randomelement1.id, randomelement2.id, randomelement3.id, randomelement4.id);
			leftOrderTime(win);


			
		}
		else if (people_order_array[0].order_done == false && draw_before6 == true)
		{

			win.draw(playimage6);
			leftOrderTime(win);
			win.draw(menuordersprite);
			leftorderposition(win, randomelement1.id, randomelement2.id, randomelement3.id, randomelement4.id);

			

		}
		else if (people_order_array[0].order_done == false && draw_before9 == true)
		{

			win.draw(playimage9);
			leftOrderTime(win);
			win.draw(menuordersprite);
			leftorderposition(win, randomelement1.id, randomelement2.id, randomelement3.id, randomelement4.id);
			
			
		}

		///////////////////////middle characters//////////////////////////////////

		if (draw_before1 == true && people_order_array[1].order_done == false)
		{
			win.draw(playimage1);
			middleOrderTime(win);

			win.draw(menuorder1sprite);
			middleorderposition(win, randomelement5.id, randomelement6.id, randomelement7.id, randomelement8.id);

			
		}
		else if (people_order_array[1].order_done == false && draw_before4 == true)
		{
			win.draw(playimage4);
			middleOrderTime(win);
			win.draw(menuorder1sprite);
			middleorderposition(win, randomelement5.id, randomelement6.id, randomelement7.id, randomelement8.id);

			
		}
		else if (draw_before7 == true && people_order_array[1].order_done == false)
		{
			win.draw(playimage7);
			middleOrderTime(win);
			win.draw(menuorder1sprite);
			middleorderposition(win, randomelement5.id, randomelement6.id, randomelement7.id, randomelement8.id);

			
		}
		else if (draw_before10 == true && people_order_array[1].order_done == false)
		{
			win.draw(playimage10);
			middleOrderTime(win);
			win.draw(menuorder1sprite);
			middleorderposition(win, randomelement5.id, randomelement6.id, randomelement7.id, randomelement8.id);

			
		}

		/////////////////////////right characters//////////////////////////

		if (draw_before2 == true && people_order_array[2].order_done == false)
		{
			win.draw(playimage2);
			rightOrderTime(win);
			win.draw(menuorder2sprite);

			rightorderposition(win, randomelement9.id, randomelement10.id, randomelement11.id, randomelement12.id);

			
		}
		else if (draw_before5 == true && people_order_array[2].order_done == false)
		{
			win.draw(playimage5);
			rightOrderTime(win);
			win.draw(menuorder2sprite);
			rightorderposition(win, randomelement9.id, randomelement10.id, randomelement11.id, randomelement12.id);

			
		}
		else if (draw_before8 == true && people_order_array[2].order_done == false)
		{
			win.draw(playimage8);
			rightOrderTime(win);
			win.draw(menuorder2sprite);
			rightorderposition(win, randomelement9.id, randomelement10.id, randomelement11.id, randomelement12.id);

		}
		else if (draw_before11 == true && people_order_array[2].order_done == false)
		{
			win.draw(playimage11);
			rightOrderTime(win);
			win.draw(menuorder2sprite);
			rightorderposition(win, randomelement9.id, randomelement10.id, randomelement11.id, randomelement12.id);

			
		}

		
		/////////////check if order done ////////////////////////////////
		if (current_order == 1)
		{
			
			if (price_order1[0].order_food_done == true)
			{
				win.draw(true_order1_first);

			}
			if (price_order1[1].order_food_done == true && price_order1[2].order_food_done == true && price_order1[3].order_food_done == true)
			{
				win.draw(true_order1_second);
			}
			if (stack_id.top() == 3)
			{

			
				if (price_order1[0].order_food_done == true && price_order1[1].order_food_done == true && price_order1[2].order_food_done == true && price_order1[3].order_food_done == true)
				{
					time_done1 = true;
					level_score += level_score_before_add;
					level_score_before_add = 0;
					bread2_draw = false;
					burger_draw = false;
					cu_draw = false;
					zaton_draw = false;
					tomatom_draw = false;
					lettuce_draw = false;
					cheese_draw = false;
					bread2_draw = false;
					bread0_draw = false;
					felfel_draw = false;
					lettuce2 = false;
					fra5_draw = false;
					meat_draw = false;
					stack_id.pop();
					stack_id.pop();
					stack_id.pop();

				}
			}
		}
		else if (current_order == 2)
		{
			if (price_order2[0].order_food_done == true)
			{
				win.draw(true_order2_first);
			}
			if (price_order2[1].order_food_done == true && price_order2[2].order_food_done == true && price_order2[3].order_food_done == true)
			{
				win.draw(true_order2_second);
			}
			if (stack_id.top() == 3)
			{

				if (price_order2[0].order_food_done == true && price_order2[1].order_food_done == true && price_order2[2].order_food_done == true && price_order2[3].order_food_done == true)
				{
					time_done2 = true;
					level_score += level_score_before_add;
					level_score_before_add = 0;

					burger_draw = false;
					cu_draw = false;
					zaton_draw = false;
					tomatom_draw = false;
					lettuce_draw = false;
					cheese_draw = false;
					bread2_draw = false;
					bread0_draw = false;
					felfel_draw = false;
					lettuce2 = false;
					fra5_draw = false;
					meat_draw = false;
					stack_id.pop();
					stack_id.pop();
					stack_id.pop();
				}
			}
		}
		else if (current_order == 3)
		{
			if (price_order3[0].order_food_done == true)
			{
				win.draw(true_order3_first);
			}
			if (price_order3[1].order_food_done == true && price_order3[2].order_food_done == true && price_order3[3].order_food_done == true)
			{
				win.draw(true_order3_second);
			}
			if (stack_id.top() == 3)
			{

				if (price_order3[0].order_food_done == true && price_order3[1].order_food_done == true && price_order3[2].order_food_done == true && price_order3[3].order_food_done == true)
				{
					time_done3 = true;
					level_score += level_score_before_add;
					level_score_before_add = 0;

					burger_draw = false;
					cu_draw = false;
					zaton_draw = false;
					tomatom_draw = false;
					lettuce_draw = false;
					cheese_draw = false;
					bread2_draw = false;
					bread0_draw = false;
					felfel_draw = false;
					lettuce2 = false;
					fra5_draw = false;
					meat_draw = false;
					stack_id.pop();
					stack_id.pop();
					stack_id.pop();
				}
			}
		}


	}
	else
	{
		if (level_score >= current_score_level)
		{

			win.draw(levelupbackgroundsprite);
			win.draw(level_up_sprite);
			win.draw(level_upgoal_text);


			converttostring.str("");
			converttostring.clear();

			converttostring << level_score;
			level_upgoal_text.setString(converttostring.str());



			char slash;
			infile3.open("Store_food_array.txt");

			if (infile3.fail())
			{
				cout << "fail";
			}
			else
			{
				infile3 >> money_level >> slash;
				while (!infile3.eof())
				{

					infile3 >> struct1.id;
					infile3 >> slash;
					infile3 >> struct1.price;
					infile3 >> slash;
					infile3 >> struct1.can_buy;
					infile3 >> slash;
					getline(infile3, struct1.namesprite, '/');
					
					update_file_after_game.push_back(struct1);
					
				}
				infile3.close();
			}
			//////////////////////////////////////////////

			money_level += level_score;
			outfile3.open("Store_food_array.txt" ,ios::trunc);

			if (outfile3.fail())
			{
				cout << "fail";
			}
			else
			{
				outfile3 << money_level << '/';
				for (int i = 0; i < update_file_after_game.size(); i++)
				{
					outfile3 << update_file_after_game[i].id;
					outfile3 << '/';
					outfile3 << update_file_after_game[i].price;
					outfile3 << '/';
					outfile3 << update_file_after_game[i].can_buy;
					outfile3 << '/';
					outfile3 << update_file_after_game[i].namesprite;
					outfile3 << '/';

				}
				outfile3.close();
			}
			//////////////////////////

			char check2;
			infile4.open("levelsdata.txt");
			if (infile4.fail())
				cout << "fail";
			else {
				while (!infile4.eof()) {

					infile4 >> levelsdata.done >> check2;

					infile4 >> levelsdata.levelnumber >> check2;
					infile4 >> levelsdata.target >> check2;

					infile4 >> levelsdata.achievedscore;
					infile4 >> check2;
					update_file2_after_game.push_back(levelsdata);
				

				}
				infile4.close();
			}


			//////////////////////
			next_level_score = update_file2_after_game[update_file2_after_game.size() - 1].target;

			levelsdata.done = false;
			levelsdata.levelnumber = current_level + 1;
			levelsdata.target = (next_level_score) + 10;
			levelsdata.achievedscore = 0;
			update_file2_after_game.push_back(levelsdata);

			outfile4.open("levelsdata.txt" ,ios::trunc);

			if (outfile4.fail())
			{
				cout << "fail";
			}
			else {

				for (int i = 0; i < update_file2_after_game.size(); i++)
				{
					if (update_file2_after_game[i].levelnumber == current_level)
					{
						levelsdata.done = true;
						levelsdata.levelnumber = update_file2_after_game[i].levelnumber;
						levelsdata.target = update_file2_after_game[i].target;
						levelsdata.achievedscore = level_score;

						outfile4 << levelsdata.done << "/";
						outfile4 << levelsdata.levelnumber << "/";
						outfile4 << levelsdata.target << "/";
						outfile4 << levelsdata.achievedscore << "/";
					}
					else
					{
						outfile4 << update_file2_after_game[i].done << "/";
						outfile4 << update_file2_after_game[i].levelnumber << "/";
						outfile4 << update_file2_after_game[i].target << "/";
						outfile4 << update_file2_after_game[i].achievedscore << "/";
					}


				}

				outfile4.close();

			}
			//////////////////////////////

			
			//////////////////////////////////////////
			

		}
		else 
		{
			
			win.draw(levellosebackgroundsprite);
			win.draw(level_lose_sprite);


			if (Mouse::getPosition(win).x > level_lose_sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level_lose_sprite.getGlobalBounds().left + level_lose_sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level_lose_sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level_lose_sprite.getGlobalBounds().top + level_lose_sprite.getGlobalBounds().height))
			{
				win.draw(level_losehover_sprite);
			}
		}
		passed_time_game = clock2.restart();
	}

	
}



void level::before_level(RenderWindow& win)
{
	Event event;

	while (win.pollEvent(event))
	{
		if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > beforelevel_play_sprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (beforelevel_play_sprite.getGlobalBounds().left + beforelevel_play_sprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > beforelevel_play_sprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (beforelevel_play_sprite.getGlobalBounds().top + beforelevel_play_sprite.getGlobalBounds().height))
		{
			sound_click.play();
			win_active = 5;

		}
		if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > beforelevel_back_sprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (beforelevel_back_sprite.getGlobalBounds().left + beforelevel_back_sprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > beforelevel_back_sprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (beforelevel_back_sprite.getGlobalBounds().top + beforelevel_back_sprite.getGlobalBounds().height))
		{
			sound_click.play();
			win_active = 3;
			loading_back = true;
		}
	}

	/////////////////////////////////////////////

	win.draw(levelbackgroundsprite);
	win.draw(money9_sprite);
	win.draw(beforelevelbackgroundsprite);
	win.draw(beforelevel_play_sprite);
	win.draw(beforelevel_back_sprite);


	////////////////////////////////////////
	converttostring.str("");
	converttostring.clear();

	converttostring << current_score_level;
	level_goal_text.setString(converttostring.str());
	converttostring.str("");
	converttostring.clear();

	converttostring << current_level;
	level_number_text.setString(converttostring.str());
	
	//////////////////////////////////////////
	win.draw(level_goal_text);
	win.draw(level_number_text);

	if (Mouse::getPosition(win).x > beforelevel_play_sprite.getGlobalBounds().left&&
		Mouse::getPosition(win).x < (beforelevel_play_sprite.getGlobalBounds().left + beforelevel_play_sprite.getGlobalBounds().width) &&
		Mouse::getPosition(win).y > beforelevel_play_sprite.getGlobalBounds().top&&
		Mouse::getPosition(win).y < (beforelevel_play_sprite.getGlobalBounds().top + beforelevel_play_sprite.getGlobalBounds().height))
	{
		win.draw(beforelevel_playhover_sprite);
	}
	if (Mouse::getPosition(win).x > beforelevel_back_sprite.getGlobalBounds().left&&
		Mouse::getPosition(win).x < (beforelevel_back_sprite.getGlobalBounds().left + beforelevel_back_sprite.getGlobalBounds().width) &&
		Mouse::getPosition(win).y > beforelevel_back_sprite.getGlobalBounds().top&&
		Mouse::getPosition(win).y < (beforelevel_back_sprite.getGlobalBounds().top + beforelevel_back_sprite.getGlobalBounds().height))
	{
		win.draw(beforelevel_backhover_sprite);
	}
}


void level::leftOrderTime(RenderWindow& win)
{

		Texture loading0_menutexture;
		loading0_menutexture.loadFromFile("loading0_menu.png");
		Sprite loading0_menusprite;
		loading0_menusprite.setTexture(loading0_menutexture);
		loading0_menusprite.setPosition(460, 90);
		loading0_menusprite.setScale(0.5, 0.5);

		Texture loading1_menutexture;
		loading1_menutexture.loadFromFile("loading1_menu.png");
		Sprite loading1_menusprite;
		loading1_menusprite.setTexture(loading1_menutexture);
		loading1_menusprite.setPosition(460, 90);
		loading1_menusprite.setScale(0.5, 0.5);

		Texture loading2_menutexture;
		loading2_menutexture.loadFromFile("loading2_menu.png");
		Sprite loading2_menusprite;
		loading2_menusprite.setTexture(loading2_menutexture);
		loading2_menusprite.setPosition(460, 90);
		loading2_menusprite.setScale(0.5, 0.5);

		Texture loading3_menutexture;
		loading3_menutexture.loadFromFile("loading3_menu.png");
		Sprite loading3_menusprite;
		loading3_menusprite.setTexture(loading3_menutexture);
		loading3_menusprite.setPosition(460, 90);
		loading3_menusprite.setScale(0.5, 0.5);

		Texture loading4_menutexture;
		loading4_menutexture.loadFromFile("loading4_menu.png");
		Sprite loading4_menusprite;
		loading4_menusprite.setTexture(loading4_menutexture);
		loading4_menusprite.setPosition(460, 90);
		loading4_menusprite.setScale(0.5, 0.5);

		Texture loading5_menutexture;
		loading5_menutexture.loadFromFile("loading5_menu.png");
		Sprite loading5_menusprite;
		loading5_menusprite.setTexture(loading5_menutexture);
		loading5_menusprite.setPosition(460, 90);
		loading5_menusprite.setScale(0.5, 0.5);

		Texture loading6_menutexture;
		loading6_menutexture.loadFromFile("loading6_menu.png");
		Sprite loading6_menusprite;
		loading6_menusprite.setTexture(loading6_menutexture);
		loading6_menusprite.setPosition(460, 90);
		loading6_menusprite.setScale(0.5, 0.5);

		Texture loading7_menutexture;
		loading7_menutexture.loadFromFile("loading7_menu.png");
		Sprite loading7_menusprite;
		loading7_menusprite.setTexture(loading7_menutexture);
		loading7_menusprite.setPosition(460, 90);
		loading7_menusprite.setScale(0.5, 0.5);

		Texture loading8_menutexture;
		loading8_menutexture.loadFromFile("loading8_menu.png");
		Sprite loading8_menusprite;
		loading8_menusprite.setTexture(loading8_menutexture);
		loading8_menusprite.setPosition(460, 90);
		loading8_menusprite.setScale(0.5, 0.5);

		elapsed1 += clock3.getElapsedTime();
		if (elapsed1 <= seconds(100))
		{
			win.draw(loading0_menusprite);

		}
		else if (elapsed1 <= seconds(500))
		{
			win.draw(loading1_menusprite);
		}
		else if (elapsed1 <= seconds(1000))
		{

			win.draw(loading2_menusprite);
		}
		else if (elapsed1 <= seconds(1500))
		{
			win.draw(loading3_menusprite);
		}
		else if (elapsed1 <= seconds(2000))
		{
			win.draw(loading4_menusprite);
		}
		else if (elapsed1 <= seconds(2500))
		{
			win.draw(loading5_menusprite);
		}
		else if (elapsed1 <= seconds(3000))
		{
			win.draw(loading6_menusprite);
		}
		else if (elapsed1 <= seconds(3500))
		{
			win.draw(loading7_menusprite);
		}
		else if (elapsed1 <= seconds(4000))
		{
			win.draw(loading8_menusprite);

		}
		else
		{
			time_done1 = true;
			elapsed1 = clock3.restart();
		}

	
}

void level::middleOrderTime(RenderWindow& win)
{

		Texture loading0_1_menutexture;
		loading0_1_menutexture.loadFromFile("loading0_menu.png");
		Sprite loading0_1_menusprite;
		loading0_1_menusprite.setTexture(loading0_1_menutexture);
		loading0_1_menusprite.setPosition(980, 90);
		loading0_1_menusprite.setScale(0.5, 0.5);

		Texture loading1_1_menutexture;
		loading1_1_menutexture.loadFromFile("loading1_menu.png");
		Sprite loading1_1_menusprite;
		loading1_1_menusprite.setTexture(loading1_1_menutexture);
		loading1_1_menusprite.setPosition(980, 90);
		loading1_1_menusprite.setScale(0.5, 0.5);

		Texture loading2_1_menutexture;
		loading2_1_menutexture.loadFromFile("loading2_menu.png");
		Sprite loading2_1_menusprite;
		loading2_1_menusprite.setTexture(loading2_1_menutexture);
		loading2_1_menusprite.setPosition(980, 90);
		loading2_1_menusprite.setScale(0.5, 0.5);

		Texture loading3_1_menutexture;
		loading3_1_menutexture.loadFromFile("loading3_menu.png");
		Sprite loading3_1_menusprite;
		loading3_1_menusprite.setTexture(loading3_1_menutexture);
		loading3_1_menusprite.setPosition(980, 90);
		loading3_1_menusprite.setScale(0.5, 0.5);

		Texture loading4_1_menutexture;
		loading4_1_menutexture.loadFromFile("loading4_menu.png");
		Sprite loading4_1_menusprite;
		loading4_1_menusprite.setTexture(loading4_1_menutexture);
		loading4_1_menusprite.setPosition(980, 90);
		loading4_1_menusprite.setScale(0.5, 0.5);

		Texture loading5_1_menutexture;
		loading5_1_menutexture.loadFromFile("loading5_menu.png");
		Sprite loading5_1_menusprite;
		loading5_1_menusprite.setTexture(loading5_1_menutexture);
		loading5_1_menusprite.setPosition(980, 90);
		loading5_1_menusprite.setScale(0.5, 0.5);

		Texture loading6_1_menutexture;
		loading6_1_menutexture.loadFromFile("loading6_menu.png");
		Sprite loading6_1_menusprite;
		loading6_1_menusprite.setTexture(loading6_1_menutexture);
		loading6_1_menusprite.setPosition(980, 90);
		loading6_1_menusprite.setScale(0.5, 0.5);

		Texture loading7_1_menutexture;
		loading7_1_menutexture.loadFromFile("loading7_menu.png");
		Sprite loading7_1_menusprite;
		loading7_1_menusprite.setTexture(loading7_1_menutexture);
		loading7_1_menusprite.setPosition(980, 90);
		loading7_1_menusprite.setScale(0.5, 0.5);

		Texture loading8_1_menutexture;
		loading8_1_menutexture.loadFromFile("loading8_menu.png");
		Sprite loading8_1_menusprite;
		loading8_1_menusprite.setTexture(loading8_1_menutexture);
		loading8_1_menusprite.setPosition(980, 90);
		loading8_1_menusprite.setScale(0.5, 0.5);
		elapsed2 += clock4.getElapsedTime();



		if (elapsed2 <= seconds(100))
		{
			win.draw(loading0_1_menusprite);

		}
		else if (elapsed2 <= seconds(500))
		{
			win.draw(loading1_1_menusprite);
		}
		else if (elapsed2 <= seconds(1000))
		{

			win.draw(loading2_1_menusprite);
		}
		else if (elapsed2 <= seconds(1500))
		{
			win.draw(loading3_1_menusprite);
		}
		else if (elapsed2 <= seconds(2000))
		{
			win.draw(loading4_1_menusprite);
		}
		else if (elapsed2 <= seconds(2500))
		{
			win.draw(loading5_1_menusprite);
		}
		else if (elapsed2 <= seconds(3000))
		{
			win.draw(loading6_1_menusprite);
		}
		else if (elapsed2 <= seconds(3500))
		{
			win.draw(loading7_1_menusprite);
		}
		else if (elapsed2 <= seconds(4000))
		{
			win.draw(loading8_1_menusprite);
		}
		else
		{
			time_done2 = true;
			elapsed2 = clock4.restart();

		}

	
}

void  level::rightOrderTime(RenderWindow& win)
{
		Texture loading0_2_menutexture;
		loading0_2_menutexture.loadFromFile("loading0_menu.png");
		Sprite loading0_2_menusprite;
		loading0_2_menusprite.setTexture(loading0_2_menutexture);
		loading0_2_menusprite.setPosition(1430, 90);
		loading0_2_menusprite.setScale(0.5, 0.5);

		Texture loading1_2_menutexture;
		loading1_2_menutexture.loadFromFile("loading1_menu.png");
		Sprite loading1_2_menusprite;
		loading1_2_menusprite.setTexture(loading1_2_menutexture);
		loading1_2_menusprite.setPosition(1430, 90);
		loading1_2_menusprite.setScale(0.5, 0.5);

		Texture loading2_2_menutexture;
		loading2_2_menutexture.loadFromFile("loading2_menu.png");
		Sprite loading2_2_menusprite;
		loading2_2_menusprite.setTexture(loading2_2_menutexture);
		loading2_2_menusprite.setPosition(1430, 90);
		loading2_2_menusprite.setScale(0.5, 0.5);

		Texture loading3_2_menutexture;
		loading3_2_menutexture.loadFromFile("loading3_menu.png");
		Sprite loading3_2_menusprite;
		loading3_2_menusprite.setTexture(loading3_2_menutexture);
		loading3_2_menusprite.setPosition(1430, 90);
		loading3_2_menusprite.setScale(0.5, 0.5);

		Texture loading4_2_menutexture;
		loading4_2_menutexture.loadFromFile("loading4_menu.png");
		Sprite loading4_2_menusprite;
		loading4_2_menusprite.setTexture(loading4_2_menutexture);
		loading4_2_menusprite.setPosition(1430, 90);
		loading4_2_menusprite.setScale(0.5, 0.5);

		Texture loading5_2_menutexture;
		loading5_2_menutexture.loadFromFile("loading5_menu.png");
		Sprite loading5_2_menusprite;
		loading5_2_menusprite.setTexture(loading5_2_menutexture);
		loading5_2_menusprite.setPosition(1430, 90);
		loading5_2_menusprite.setScale(0.5, 0.5);

		Texture loading6_2_menutexture;
		loading6_2_menutexture.loadFromFile("loading6_menu.png");
		Sprite loading6_2_menusprite;
		loading6_2_menusprite.setTexture(loading6_2_menutexture);
		loading6_2_menusprite.setPosition(1430, 90);
		loading6_2_menusprite.setScale(0.5, 0.5);

		Texture loading7_2_menutexture;
		loading7_2_menutexture.loadFromFile("loading7_menu.png");
		Sprite loading7_2_menusprite;
		loading7_2_menusprite.setTexture(loading7_2_menutexture);
		loading7_2_menusprite.setPosition(1430, 90);
		loading7_2_menusprite.setScale(0.5, 0.5);

		Texture loading8_2_menutexture;
		loading8_2_menutexture.loadFromFile("loading8_menu.png");
		Sprite loading8_2_menusprite;
		loading8_2_menusprite.setTexture(loading8_2_menutexture);
		loading8_2_menusprite.setPosition(1430, 90);
		loading8_2_menusprite.setScale(0.5, 0.5);

		elapsed3 += clock5.getElapsedTime();

		if (elapsed3 <= seconds(100))
		{
			win.draw(loading0_2_menusprite);

		}
		else if (elapsed3 <= seconds(500))
		{
			win.draw(loading1_2_menusprite);
		}
		else if (elapsed3 <= seconds(1000))
		{

			win.draw(loading2_2_menusprite);
		}
		else if (elapsed3 <= seconds(1500))
		{
			win.draw(loading3_2_menusprite);
		}
		else if (elapsed3 <= seconds(2000))
		{
			win.draw(loading4_2_menusprite);
		}
		else if (elapsed3 <= seconds(2500))
		{
			win.draw(loading5_2_menusprite);
		}
		else if (elapsed3 <= seconds(3000))
		{
			win.draw(loading6_2_menusprite);
		}
		else if (elapsed3 <= seconds(3500))
		{
			win.draw(loading7_2_menusprite);
		}
		else if (elapsed3 <= seconds(4000))
		{
			win.draw(loading8_2_menusprite);
		}
		else
		{
			elapsed3 = clock5.restart();
			time_done3 = true;
		}

	
}

void  level::leftorderposition(RenderWindow& win, int food1ID, int food2ID, int food3ID, int food4ID)
{

	Texture bread;
	Sprite breadsprite;
	bread.loadFromFile("bread02.png");
	breadsprite.setTexture(bread);
	breadsprite.setPosition(800, 245);
	breadsprite.setScale(0.5, 0.5);
	win.draw(breadsprite);


	////////////////////////////////////////////////
	if (food1ID == 1)
	{

		Texture appletexture;
		appletexture.loadFromFile("appel2.png");
		Sprite applesprite;
		applesprite.setTexture(appletexture);
		applesprite.setPosition(715, 195);
		applesprite.setScale(0.7, 0.7);
		win.draw(applesprite);
	}
	else if (food1ID == 4)
	{
		Texture Cupcaketexture;
		Cupcaketexture.loadFromFile("cupcake2.png");
		Sprite Cupcakesprite;
		Cupcakesprite.setTexture(Cupcaketexture);
		Cupcakesprite.setPosition(720, 195);
		Cupcakesprite.setScale(0.6, 0.6);
		win.draw(Cupcakesprite);
	}
	else if (food1ID == 7)
	{
		Texture Ecliertexture;
		Ecliertexture.loadFromFile("Eclier2.png");
		Sprite Ecliersprite;
		Ecliersprite.setTexture(Ecliertexture);
		Ecliersprite.setPosition(715, 197);
		Ecliersprite.setScale(0.7, 0.7);
		win.draw(Ecliersprite);
	}
	else if (food1ID == 9)
	{
		Texture Dounttexture;
		Dounttexture.loadFromFile("Dount2.png");
		Sprite Dountsprite;
		Dountsprite.setTexture(Dounttexture);
		Dountsprite.setPosition(720, 195);
		Dountsprite.setScale(0.8, 0.8);
		win.draw(Dountsprite);
	}
	else if (food1ID == 12)
	{
		Texture Saladtexture;
		Saladtexture.loadFromFile("salad02.png");
		Sprite Saladsprite;
		Saladsprite.setTexture(Saladtexture);
		Saladsprite.setPosition(720, 195);
		Saladsprite.setScale(0.8, 0.75);
		win.draw(Saladsprite);
	}
	else if (food1ID == 13)
	{
		Texture pancake;
		pancake.loadFromFile("pancake2.png");
		Sprite pancakesprite;
		pancakesprite.setTexture(pancake);
		pancakesprite.setPosition(715, 195);
		pancakesprite.setScale(0.8, 0.8);
		win.draw(pancakesprite);
	}
	else if (food1ID == 14)
	{
		Texture Caketexture;
		Caketexture.loadFromFile("gatto2.png");
		Sprite Cakesprite;
		Cakesprite.setTexture(Caketexture);
		Cakesprite.setPosition(715, 195);
		Cakesprite.setScale(0.7, 0.7);
		win.draw(Cakesprite);
	}
	else if (food1ID == 15)
	{
		Texture Swissrolltexture;
		Swissrolltexture.loadFromFile("sweasroll2.png");
		Sprite Swissrollsprite;
		Swissrollsprite.setTexture(Swissrolltexture);
		Swissrollsprite.setPosition(715, 195);
		Swissrollsprite.setScale(0.8, 0.8);
		win.draw(Swissrollsprite);
	}
	else if (food1ID == 16)
	{
		Texture Souptexture;
		Souptexture.loadFromFile("saoup2.png");
		Sprite Soupsprite;
		Soupsprite.setTexture(Souptexture);
		Soupsprite.setPosition(715, 195);
		Soupsprite.setScale(0.7, 0.7);
		win.draw(Soupsprite);
	}
	else if (food1ID == 17)
	{
		Texture Dish1texture;
		Dish1texture.loadFromFile("dish12.png");
		Sprite Dish1sprite;
		Dish1sprite.setTexture(Dish1texture);
		Dish1sprite.setPosition(715, 195);
		Dish1sprite.setScale(0.8, 0.8);
		win.draw(Dish1sprite);
	}
	else if (food1ID == 18)
	{
		Texture Dish2texture;
		Dish2texture.loadFromFile("dish22.png");
		Sprite Dish2sprite;
		Dish2sprite.setTexture(Dish2texture);
		Dish2sprite.setPosition(720, 195);
		Dish2sprite.setScale(0.7, 0.7);
		win.draw(Dish2sprite);
	}
	else if (food1ID == 27)
	{
		Texture component6texture;
		Sprite component6sprite;
		component6texture.loadFromFile("Pizza pieces2.png");
		component6sprite.setTexture(component6texture);
		component6sprite.setScale(Vector2f(0.5, 0.5));
		component6sprite.setPosition(Vector2f(710, 195));
		win.draw(component6sprite);
	}
	else if (food1ID == 26)
	{
		Texture component7texture;
		Sprite component7sprite;

		component7texture.loadFromFile("icecream2.png");
		component7sprite.setTexture(component7texture);
		component7sprite.setScale(Vector2f(0.7, 0.7));
		component7sprite.setPosition(Vector2f(710, 195));
		win.draw(component7sprite);
	}
	else if (food1ID == 25)
	{
		Texture component8texture;
		Sprite component8sprite;
		component8texture.loadFromFile("juice2.png");
		component8sprite.setTexture(component8texture);
		component8sprite.setScale(Vector2f(0.8, 0.8));
		component8sprite.setPosition(Vector2f(715, 195));
		win.draw(component8sprite);
	}

	////////////////////////////////////

	if (food2ID == 19)
	{
		Texture burger;
		Sprite burgersprite;
		burger.loadFromFile("burger2.png");
		burgersprite.setTexture(burger);
		burgersprite.setPosition(802, 230);
		burgersprite.setScale(0.5, 0.5);
		win.draw(burgersprite);
	}
	else if (food2ID == 11)
	{
		Texture Salmon;
		Sprite Salmonsprite;
		Salmon.loadFromFile("salmon2.png");
		Salmonsprite.setTexture(Salmon);
		Salmonsprite.setPosition(800, 240);
		Salmonsprite.setScale(0.5, 0.5);
		win.draw(Salmonsprite);
	}
	else if (food2ID == 24)
	{
		Texture chicken;
		Sprite chickensprite;
		chicken.loadFromFile("fra52.png");
		chickensprite.setTexture(chicken);
		chickensprite.setPosition(800, 230);
		chickensprite.setScale(0.5, 0.5);
		win.draw(chickensprite);
	}
	else if (food2ID == 23)
	{
		Texture meat;
		Sprite meatsprite;
		meat.loadFromFile("meat2.png");
		meatsprite.setTexture(meat);
		meatsprite.setPosition(802, 237);
		meatsprite.setScale(0.5, 0.5);
		win.draw(meatsprite);
	}

	/////////////////////////////////////////

	if (food3ID == 5)
	{
		Texture tometo;
		Sprite tometosprite;
		tometo.loadFromFile("tometo2.png");
		tometosprite.setTexture(tometo);
		tometosprite.setPosition(800, 220);
		tometosprite.setScale(0.5, 0.5);
		win.draw(tometosprite);
	}
	else if (food3ID == 28)
	{
		Texture cu;
		Sprite cusprite;
		cu.loadFromFile("cu2.png");
		cusprite.setTexture(cu);
		cusprite.setScale(Vector2f(0.45, 0.45));
		cusprite.setPosition(Vector2f(800, 230));
		win.draw(cusprite);
	}
	else if (food3ID == 22)
	{
		Texture lettuce;
		Sprite lettucesprite;
		lettuce.loadFromFile("lettuce2.png");
		lettucesprite.setTexture(lettuce);
		lettucesprite.setPosition(800, 230);
		lettucesprite.setScale(0.5, 0.5);
		win.draw(lettucesprite);
	}
	else if (food3ID == 21)
	{
		Texture olives;
		Sprite olivessprite;
		olives.loadFromFile("zeton2.png");
		olivessprite.setTexture(olives);
		olivessprite.setPosition(800, 230);
		olivessprite.setScale(0.5, 0.5);
		win.draw(olivessprite);
	}
	else if (food3ID == 8)
	{
		Texture felfel;
		Sprite felfelsprite;
		felfel.loadFromFile("felfel2.png");
		felfelsprite.setTexture(felfel);
		felfelsprite.setPosition(800, 230);
		felfelsprite.setScale(0.4, 0.4);
		win.draw(felfelsprite);
	}
	else if (food3ID == 6)
	{
		Texture cheese;
		Sprite cheesesprite;
		cheese.loadFromFile("cheese2.png");
		cheesesprite.setTexture(cheese);
		cheesesprite.setScale(Vector2f(0.5, 0.5));
		cheesesprite.setPosition(Vector2f(800, 227));
		win.draw(cheesesprite);
	}

	///////////////////////////////////

	if (food4ID == 5)
	{
		Texture tometo;
		Sprite tometosprite;
		tometo.loadFromFile("tometo2.png");
		tometosprite.setTexture(tometo);
		tometosprite.setPosition(803, 220);
		tometosprite.setScale(0.48, 0.48);
		win.draw(tometosprite);
	}
	else if (food4ID == 28)
	{
		Texture cu;
		Sprite cusprite;
		cu.loadFromFile("cu2.png");
		cusprite.setTexture(cu);
		cusprite.setScale(Vector2f(0.47, 0.47));
		cusprite.setPosition(Vector2f(803, 225));
		win.draw(cusprite);
	}
	else if (food4ID == 22)
	{
		Texture lettuce;
		Sprite lettucesprite;
		lettuce.loadFromFile("lettuce2.png");
		lettucesprite.setTexture(lettuce);
		lettucesprite.setPosition(800, 220);
		lettucesprite.setScale(0.5, 0.5);
		win.draw(lettucesprite);
	}
	else if (food4ID == 21)
	{
		Texture olives;
		Sprite olivessprite;
		olives.loadFromFile("zeton2.png");
		olivessprite.setTexture(olives);
		olivessprite.setPosition(800, 220);
		olivessprite.setScale(0.5, 0.5);
		win.draw(olivessprite);
	}
	else if (food4ID == 8)
	{
		Texture felfel;
		Sprite felfelsprite;
		felfel.loadFromFile("felfel2.png");
		felfelsprite.setTexture(felfel);
		felfelsprite.setPosition(800, 220);
		felfelsprite.setScale(0.4, 0.4);
		win.draw(felfelsprite);
	}
	else if (food4ID == 6)
	{
		Texture cheese;
		Sprite cheesesprite;
		cheese.loadFromFile("cheese2.png");
		cheesesprite.setTexture(cheese);
		cheesesprite.setScale(Vector2f(0.5, 0.5));
		cheesesprite.setPosition(Vector2f(800, 215));
		win.draw(cheesesprite);
	}

	///////////////////////////


	Texture bread1;
	Sprite bread1sprite;
	bread1.loadFromFile("bread03.png");
	bread1sprite.setTexture(bread1);
	bread1sprite.setPosition(800, 205);
	bread1sprite.setScale(0.5, 0.5);
	win.draw(bread1sprite);

}

void level::middleorderposition(RenderWindow& win, int food1ID, int food2ID, int food3ID, int food4ID)
{

	Texture bread;
	Sprite breadsprite;
	bread.loadFromFile("bread02.png");
	breadsprite.setTexture(bread);
	breadsprite.setPosition(1320, 245);
	breadsprite.setScale(0.5, 0.5);
	win.draw(breadsprite);


	////////////////////////////////////
	if (food1ID == 1)
	{

		Texture appletexture;
		appletexture.loadFromFile("appel2.png");
		Sprite applesprite;
		applesprite.setTexture(appletexture);
		applesprite.setPosition(1225, 195);
		applesprite.setScale(0.7, 0.7);
		win.draw(applesprite);
	}
	else if (food1ID == 4)
	{
		Texture Cupcaketexture;
		Cupcaketexture.loadFromFile("cupcake2.png");
		Sprite Cupcakesprite;
		Cupcakesprite.setTexture(Cupcaketexture);
		Cupcakesprite.setPosition(1225, 195);
		Cupcakesprite.setScale(0.6, 0.6);
		win.draw(Cupcakesprite);
	}
	else if (food1ID == 7)
	{
		Texture Ecliertexture;
		Ecliertexture.loadFromFile("Eclier2.png");
		Sprite Ecliersprite;
		Ecliersprite.setTexture(Ecliertexture);
		Ecliersprite.setPosition(1225, 197);
		Ecliersprite.setScale(0.7, 0.7);
		win.draw(Ecliersprite);
	}
	else if (food1ID == 9)
	{
		Texture Dounttexture;
		Dounttexture.loadFromFile("Dount2.png");
		Sprite Dountsprite;
		Dountsprite.setTexture(Dounttexture);
		Dountsprite.setPosition(1225, 195);
		Dountsprite.setScale(0.8, 0.8);
		win.draw(Dountsprite);
	}
	else if (food1ID == 12)
	{
		Texture Saladtexture;
		Saladtexture.loadFromFile("salad02.png");
		Sprite Saladsprite;
		Saladsprite.setTexture(Saladtexture);
		Saladsprite.setPosition(1225, 195);
		Saladsprite.setScale(0.8, 0.75);
		win.draw(Saladsprite);
	}
	else if (food1ID == 13)
	{
		Texture pancake;
		pancake.loadFromFile("pancake2.png");
		Sprite pancakesprite;
		pancakesprite.setTexture(pancake);
		pancakesprite.setPosition(1225, 195);
		pancakesprite.setScale(0.8, 0.8);
		win.draw(pancakesprite);
	}
	else if (food1ID == 14)
	{
		Texture Caketexture;
		Caketexture.loadFromFile("gatto2.png");
		Sprite Cakesprite;
		Cakesprite.setTexture(Caketexture);
		Cakesprite.setPosition(1225, 195);
		Cakesprite.setScale(0.7, 0.7);
		win.draw(Cakesprite);
	}
	else if (food1ID == 15)
	{
		Texture Swissrolltexture;
		Swissrolltexture.loadFromFile("sweasroll2.png");
		Sprite Swissrollsprite;
		Swissrollsprite.setTexture(Swissrolltexture);
		Swissrollsprite.setPosition(1225, 195);
		Swissrollsprite.setScale(0.8, 0.8);
		win.draw(Swissrollsprite);
	}
	else if (food1ID == 16)
	{
		Texture Souptexture;
		Souptexture.loadFromFile("saoup2.png");
		Sprite Soupsprite;
		Soupsprite.setTexture(Souptexture);
		Soupsprite.setPosition(1225, 195);
		Soupsprite.setScale(0.7, 0.7);
		win.draw(Soupsprite);
	}
	else if (food1ID == 17)
	{
		Texture Dish1texture;
		Dish1texture.loadFromFile("dish12.png");
		Sprite Dish1sprite;
		Dish1sprite.setTexture(Dish1texture);
		Dish1sprite.setPosition(1220, 195);
		Dish1sprite.setScale(0.8, 0.8);
		win.draw(Dish1sprite);
	}
	else if (food1ID == 18)
	{
		Texture Dish2texture;
		Dish2texture.loadFromFile("dish22.png");
		Sprite Dish2sprite;
		Dish2sprite.setTexture(Dish2texture);
		Dish2sprite.setPosition(1225, 195);
		Dish2sprite.setScale(0.7, 0.7);
		win.draw(Dish2sprite);
	}
	else if (food1ID == 27)
	{
		Texture component6texture;
		Sprite component6sprite;
		component6texture.loadFromFile("Pizza pieces2.png");
		component6sprite.setTexture(component6texture);
		component6sprite.setScale(Vector2f(0.5, 0.5));
		component6sprite.setPosition(Vector2f(1215, 195));
		win.draw(component6sprite);
	}
	else if (food1ID == 26)
	{
		Texture component7texture;
		Sprite component7sprite;

		component7texture.loadFromFile("icecream2.png");
		component7sprite.setTexture(component7texture);
		component7sprite.setScale(Vector2f(0.7, 0.7));
		component7sprite.setPosition(Vector2f(1225, 195));
		win.draw(component7sprite);
	}
	else if (food1ID == 25)
	{
		Texture component8texture;
		Sprite component8sprite;
		component8texture.loadFromFile("juice2.png");
		component8sprite.setTexture(component8texture);
		component8sprite.setScale(Vector2f(0.8, 0.8));
		component8sprite.setPosition(Vector2f(1225, 195));
		win.draw(component8sprite);
	}
	/////////////////////////////


	if (food2ID == 19)
	{
		Texture burger;
		Sprite burgersprite;
		burger.loadFromFile("burger2.png");
		burgersprite.setTexture(burger);
		burgersprite.setPosition(1320, 230);
		burgersprite.setScale(0.5, 0.5);
		win.draw(burgersprite);
	}
	else if (food2ID == 11)
	{
		Texture Salmon;
		Sprite Salmonsprite;
		Salmon.loadFromFile("salmon2.png");
		Salmonsprite.setTexture(Salmon);
		Salmonsprite.setPosition(1320, 240);
		Salmonsprite.setScale(0.5, 0.5);
		win.draw(Salmonsprite);
	}
	else if (food2ID == 24)
	{
		Texture chicken;
		Sprite chickensprite;
		chicken.loadFromFile("fra52.png");
		chickensprite.setTexture(chicken);
		chickensprite.setPosition(1320, 230);
		chickensprite.setScale(0.5, 0.5);
		win.draw(chickensprite);
	}
	else if (food2ID == 23)
	{
		Texture meat;
		Sprite meatsprite;
		meat.loadFromFile("meat2.png");
		meatsprite.setTexture(meat);
		meatsprite.setPosition(1320, 237);
		meatsprite.setScale(0.5, 0.5);
		win.draw(meatsprite);
	}

	/////////////////////////////////////////

	if (food3ID == 5)
	{
		Texture tometo;
		Sprite tometosprite;
		tometo.loadFromFile("tometo2.png");
		tometosprite.setTexture(tometo);
		tometosprite.setPosition(1320, 220);
		tometosprite.setScale(0.5, 0.5);
		win.draw(tometosprite);
	}
	else if (food3ID == 28)
	{
		Texture cu;
		Sprite cusprite;
		cu.loadFromFile("cu2.png");
		cusprite.setTexture(cu);
		cusprite.setScale(Vector2f(0.45, 0.45));
		cusprite.setPosition(Vector2f(1320, 230));
		win.draw(cusprite);
	}
	else if (food3ID == 22)
	{
		Texture lettuce;
		Sprite lettucesprite;
		lettuce.loadFromFile("lettuce2.png");
		lettucesprite.setTexture(lettuce);
		lettucesprite.setPosition(1320, 230);
		lettucesprite.setScale(0.5, 0.5);
		win.draw(lettucesprite);
	}
	else if (food3ID == 21)
	{
		Texture olives;
		Sprite olivessprite;
		olives.loadFromFile("zeton2.png");
		olivessprite.setTexture(olives);
		olivessprite.setPosition(1320, 230);
		olivessprite.setScale(0.5, 0.5);
		win.draw(olivessprite);
	}
	else if (food3ID == 8)
	{
		Texture felfel;
		Sprite felfelsprite;
		felfel.loadFromFile("felfel2.png");
		felfelsprite.setTexture(felfel);
		felfelsprite.setPosition(1320, 230);
		felfelsprite.setScale(0.4, 0.4);
		win.draw(felfelsprite);
	}
	else if (food3ID == 6)
	{
		Texture cheese;
		Sprite cheesesprite;
		cheese.loadFromFile("cheese2.png");
		cheesesprite.setTexture(cheese);
		cheesesprite.setScale(Vector2f(0.5, 0.5));
		cheesesprite.setPosition(Vector2f(1320, 227));
		win.draw(cheesesprite);
	}

	///////////////////////////////////

	if (food4ID == 5)
	{
		Texture tometo;
		Sprite tometosprite;
		tometo.loadFromFile("tometo2.png");
		tometosprite.setTexture(tometo);
		tometosprite.setPosition(1320, 220);
		tometosprite.setScale(0.48, 0.48);
		win.draw(tometosprite);
	}
	else if (food4ID == 28)
	{
		Texture cu;
		Sprite cusprite;
		cu.loadFromFile("cu2.png");
		cusprite.setTexture(cu);
		cusprite.setScale(Vector2f(0.47, 0.47));
		cusprite.setPosition(Vector2f(1320, 225));
		win.draw(cusprite);
	}
	else if (food4ID == 22)
	{
		Texture lettuce;
		Sprite lettucesprite;
		lettuce.loadFromFile("lettuce2.png");
		lettucesprite.setTexture(lettuce);
		lettucesprite.setPosition(1320, 220);
		lettucesprite.setScale(0.5, 0.5);
		win.draw(lettucesprite);
	}
	else if (food4ID == 21)
	{
		Texture olives;
		Sprite olivessprite;
		olives.loadFromFile("zeton2.png");
		olivessprite.setTexture(olives);
		olivessprite.setPosition(1320, 220);
		olivessprite.setScale(0.5, 0.5);
		win.draw(olivessprite);
	}
	else if (food4ID == 8)
	{
		Texture felfel;
		Sprite felfelsprite;
		felfel.loadFromFile("felfel2.png");
		felfelsprite.setTexture(felfel);
		felfelsprite.setPosition(1320, 220);
		felfelsprite.setScale(0.4, 0.4);
		win.draw(felfelsprite);
	}
	else if (food4ID == 6)
	{
		Texture cheese;
		Sprite cheesesprite;
		cheese.loadFromFile("cheese2.png");
		cheesesprite.setTexture(cheese);
		cheesesprite.setScale(Vector2f(0.5, 0.5));
		cheesesprite.setPosition(Vector2f(1320, 215));
		win.draw(cheesesprite);
	}

	///////////////////////////


	Texture bread1;
	Sprite bread1sprite;
	bread1.loadFromFile("bread03.png");
	bread1sprite.setTexture(bread1);
	bread1sprite.setPosition(1320, 205);
	bread1sprite.setScale(0.5, 0.5);
	win.draw(bread1sprite);

}

void  level::rightorderposition(RenderWindow& win, int food1ID, int food2ID, int food3ID, int food4ID)
{

	Texture bread;
	bread.loadFromFile("bread02.png");
	Sprite breadsprite;
	breadsprite.setTexture(bread);
	breadsprite.setPosition(1760, 245);
	breadsprite.setScale(0.5, 0.5);
	win.draw(breadsprite);


	////////////////////////////////////
	if (food1ID == 1)
	{

		Texture appletexture;
		appletexture.loadFromFile("appel2.png");
		Sprite applesprite;
		applesprite.setTexture(appletexture);
		applesprite.setPosition(1690, 195);
		applesprite.setScale(0.7, 0.7);
		win.draw(applesprite);
	}
	else if (food1ID == 4)
	{
		Texture Cupcaketexture;
		Cupcaketexture.loadFromFile("cupcake2.png");
		Sprite Cupcakesprite;
		Cupcakesprite.setTexture(Cupcaketexture);
		Cupcakesprite.setPosition(1690, 195);
		Cupcakesprite.setScale(0.6, 0.6);
		win.draw(Cupcakesprite);
	}
	else if (food1ID == 7)
	{
		Texture Ecliertexture;
		Ecliertexture.loadFromFile("Eclier2.png");
		Sprite Ecliersprite;
		Ecliersprite.setTexture(Ecliertexture);
		Ecliersprite.setPosition(1690, 197);
		Ecliersprite.setScale(0.7, 0.7);
		win.draw(Ecliersprite);
	}
	else if (food1ID == 9)
	{
		Texture Dounttexture;
		Dounttexture.loadFromFile("Dount2.png");
		Sprite Dountsprite;
		Dountsprite.setTexture(Dounttexture);
		Dountsprite.setPosition(1690, 195);
		Dountsprite.setScale(0.8, 0.8);
		win.draw(Dountsprite);
	}
	else if (food1ID == 12)
	{
		Texture Saladtexture;
		Saladtexture.loadFromFile("salad02.png");
		Sprite Saladsprite;
		Saladsprite.setTexture(Saladtexture);
		Saladsprite.setPosition(1690, 195);
		Saladsprite.setScale(0.8, 0.75);
		win.draw(Saladsprite);
	}
	else if (food1ID == 13)
	{
		Texture pancake;
		pancake.loadFromFile("pancake2.png");
		Sprite pancakesprite;
		pancakesprite.setTexture(pancake);
		pancakesprite.setPosition(1690, 195);
		pancakesprite.setScale(0.8, 0.8);
		win.draw(pancakesprite);
	}
	else if (food1ID == 14)
	{
		Texture Caketexture;
		Caketexture.loadFromFile("gatto2.png");
		Sprite Cakesprite;
		Cakesprite.setTexture(Caketexture);
		Cakesprite.setPosition(1690, 195);
		Cakesprite.setScale(0.7, 0.7);
		win.draw(Cakesprite);
	}
	else if (food1ID == 15)
	{
		Texture Swissrolltexture;
		Swissrolltexture.loadFromFile("sweasroll2.png");
		Sprite Swissrollsprite;
		Swissrollsprite.setTexture(Swissrolltexture);
		Swissrollsprite.setPosition(1690, 195);
		Swissrollsprite.setScale(0.8, 0.8);
		win.draw(Swissrollsprite);
	}
	else if (food1ID == 16)
	{
		Texture Souptexture;
		Souptexture.loadFromFile("saoup2.png");
		Sprite Soupsprite;
		Soupsprite.setTexture(Souptexture);
		Soupsprite.setPosition(1690, 195);
		Soupsprite.setScale(0.7, 0.7);
		win.draw(Soupsprite);
	}
	else if (food1ID == 17)
	{
		Texture Dish1texture;
		Dish1texture.loadFromFile("dish12.png");
		Sprite Dish1sprite;
		Dish1sprite.setTexture(Dish1texture);
		Dish1sprite.setPosition(1690, 195);
		Dish1sprite.setScale(0.8, 0.8);
		win.draw(Dish1sprite);
	}
	else if (food1ID == 18)
	{
		Texture Dish2texture;
		Dish2texture.loadFromFile("dish22.png");
		Sprite Dish2sprite;
		Dish2sprite.setTexture(Dish2texture);
		Dish2sprite.setPosition(1690, 195);
		Dish2sprite.setScale(0.7, 0.7);
		win.draw(Dish2sprite);
	}
	else if (food1ID == 27)
	{
		Texture component6texture;
		Sprite component6sprite;
		component6texture.loadFromFile("Pizza pieces2.png");
		component6sprite.setTexture(component6texture);
		component6sprite.setScale(Vector2f(0.5, 0.5));
		component6sprite.setPosition(Vector2f(1680, 195));
		win.draw(component6sprite);
	}
	else if (food1ID == 26)
	{
		Texture component7texture;
		Sprite component7sprite;

		component7texture.loadFromFile("icecream2.png");
		component7sprite.setTexture(component7texture);
		component7sprite.setScale(Vector2f(0.7, 0.7));
		component7sprite.setPosition(Vector2f(1690, 195));
		win.draw(component7sprite);
	}
	else if (food1ID == 25)
	{
		Texture component8texture;
		Sprite component8sprite;
		component8texture.loadFromFile("juice2.png");
		component8sprite.setTexture(component8texture);
		component8sprite.setScale(Vector2f(0.8, 0.8));
		component8sprite.setPosition(Vector2f(1685, 195));
		win.draw(component8sprite);
	}
	/////////////////////////////



	if (food2ID == 19)
	{
		Texture burger;
		Sprite burgersprite;
		burger.loadFromFile("burger2.png");
		burgersprite.setTexture(burger);
		burgersprite.setPosition(1762, 230);
		burgersprite.setScale(0.5, 0.5);
		win.draw(burgersprite);
	}
	else if (food2ID == 11)
	{
		Texture Salmon;
		Sprite Salmonsprite;
		Salmon.loadFromFile("salmon2.png");
		Salmonsprite.setTexture(Salmon);
		Salmonsprite.setPosition(1760, 240);
		Salmonsprite.setScale(0.5, 0.5);
		win.draw(Salmonsprite);
	}
	else if (food2ID == 24)
	{
		Texture chicken;
		Sprite chickensprite;
		chicken.loadFromFile("fra52.png");
		chickensprite.setTexture(chicken);
		chickensprite.setPosition(1760, 230);
		chickensprite.setScale(0.5, 0.5);
		win.draw(chickensprite);
	}
	else if (food2ID == 23)
	{
		Texture meat;
		Sprite meatsprite;
		meat.loadFromFile("meat2.png");
		meatsprite.setTexture(meat);
		meatsprite.setPosition(1760, 237);
		meatsprite.setScale(0.5, 0.5);
		win.draw(meatsprite);
	}

	/////////////////////////////////////////

	if (food3ID == 5)
	{
		Texture tometo;
		Sprite tometosprite;
		tometo.loadFromFile("tometo2.png");
		tometosprite.setTexture(tometo);
		tometosprite.setPosition(1760, 220);
		tometosprite.setScale(0.5, 0.5);
		win.draw(tometosprite);
	}
	else if (food3ID == 28)
	{
		Texture cu;
		Sprite cusprite;
		cu.loadFromFile("cu2.png");
		cusprite.setTexture(cu);
		cusprite.setScale(Vector2f(0.45, 0.45));
		cusprite.setPosition(Vector2f(1762, 230));
		win.draw(cusprite);
	}
	else if (food3ID == 22)
	{
		Texture lettuce;
		Sprite lettucesprite;
		lettuce.loadFromFile("lettuce2.png");
		lettucesprite.setTexture(lettuce);
		lettucesprite.setPosition(1760, 230);
		lettucesprite.setScale(0.5, 0.5);
		win.draw(lettucesprite);
	}
	else if (food3ID == 21)
	{
		Texture olives;
		Sprite olivessprite;
		olives.loadFromFile("zeton2.png");
		olivessprite.setTexture(olives);
		olivessprite.setPosition(1760, 230);
		olivessprite.setScale(0.5, 0.5);
		win.draw(olivessprite);
	}
	else if (food3ID == 8)
	{
		Texture felfel;
		Sprite felfelsprite;
		felfel.loadFromFile("felfel2.png");
		felfelsprite.setTexture(felfel);
		felfelsprite.setPosition(1760, 230);
		felfelsprite.setScale(0.4, 0.4);
		win.draw(felfelsprite);
	}
	else if (food3ID == 6)
	{
		Texture cheese;
		Sprite cheesesprite;
		cheese.loadFromFile("cheese2.png");
		cheesesprite.setTexture(cheese);
		cheesesprite.setScale(Vector2f(0.5, 0.5));
		cheesesprite.setPosition(Vector2f(1760, 227));
		win.draw(cheesesprite);
	}

	///////////////////////////////////

	if (food4ID == 5)
	{
		Texture tometo;
		Sprite tometosprite;
		tometo.loadFromFile("tometo2.png");
		tometosprite.setTexture(tometo);
		tometosprite.setPosition(1760, 220);
		tometosprite.setScale(0.48, 0.48);
		win.draw(tometosprite);
	}
	else if (food4ID == 28)
	{
		Texture cu;
		Sprite cusprite;
		cu.loadFromFile("cu2.png");
		cusprite.setTexture(cu);
		cusprite.setScale(Vector2f(0.47, 0.47));
		cusprite.setPosition(Vector2f(1762, 225));
		win.draw(cusprite);
	}
	else if (food4ID == 22)
	{
		Texture lettuce;
		Sprite lettucesprite;
		lettuce.loadFromFile("lettuce2.png");
		lettucesprite.setTexture(lettuce);
		lettucesprite.setPosition(1760, 220);
		lettucesprite.setScale(0.5, 0.5);
		win.draw(lettucesprite);
	}
	else if (food4ID == 21)
	{
		Texture olives;
		Sprite olivessprite;
		olives.loadFromFile("zeton2.png");
		olivessprite.setTexture(olives);
		olivessprite.setPosition(1760, 220);
		olivessprite.setScale(0.5, 0.5);
		win.draw(olivessprite);
	}
	else if (food4ID == 8)
	{
		Texture felfel;
		Sprite felfelsprite;
		felfel.loadFromFile("felfel2.png");
		felfelsprite.setTexture(felfel);
		felfelsprite.setPosition(1760, 220);
		felfelsprite.setScale(0.4, 0.4);
		win.draw(felfelsprite);
	}
	else if (food4ID == 6)
	{
		Texture cheese;
		Sprite cheesesprite;
		cheese.loadFromFile("cheese2.png");
		cheesesprite.setTexture(cheese);
		cheesesprite.setScale(Vector2f(0.5, 0.5));
		cheesesprite.setPosition(Vector2f(1760, 215));
		win.draw(cheesesprite);
	}

	///////////////////////////

	Texture bread1;
	Sprite bread1sprite;
	bread1.loadFromFile("bread03.png");
	bread1sprite.setTexture(bread1);
	bread1sprite.setPosition(1760, 205);
	bread1sprite.setScale(0.5, 0.5);
	win.draw(bread1sprite);
}

void level::time_game(RenderWindow& win)
{
	passed_time_game += clock2.getElapsedTime();
	
	if (passed_time_game <= sf::seconds(200)) {

		win.draw(timegamesprite0);
	}
	else if (passed_time_game <= sf::seconds(300))
	{

		win.draw(timegamesprite2);
	}
	else if (passed_time_game <= sf::seconds(400))
	{

		win.draw(timegamesprite3);
	}
	else if (passed_time_game <= sf::seconds(500))
	{

		win.draw(timegamesprite4);
	}
	else if (passed_time_game <= sf::seconds(600)) {
		win.draw(timegamesprite5);
	}
	else if (passed_time_game <= sf::seconds(700)) {
		win.draw(timegamesprite5);
	}
	else if (passed_time_game <= sf::seconds(800)) {
		win.draw(timegamesprite6);
	}
	else if (passed_time_game <= sf::seconds(900)) {
		win.draw(timegamesprite7);
	}
	else if (passed_time_game <= sf::seconds(1000))
	{
		win.draw(timegamesprite8);
	}
	else if (passed_time_game <= sf::seconds(1100))
	{

		win.draw(timegamesprite9);
	}
	else if (passed_time_game <= sf::seconds(1200))
	{

		win.draw(timegamesprite10);
		
	}
	else if (passed_time_game <= sf::seconds(1300))
	{

		win.draw(timegamesprite11);
		
	}
	else if (passed_time_game <= sf::seconds(1500)) {
		win.draw(timegamesprite13);
	}
	else if (passed_time_game <= sf::seconds(1700)) {
		win.draw(timegamesprite14);
	}
	else if (passed_time_game <= sf::seconds(1900)) {
		win.draw(timegamesprite15);
	}
	else if (passed_time_game <= sf::seconds(2100)) {
		win.draw(timegamesprite16);
	}
	else if (passed_time_game <= sf::seconds(2300)) {
		win.draw(timegamesprite17);
	}
	else if (passed_time_game <= sf::seconds(2500)) {
		win.draw(timegamesprite18);
	}
	else
	{
		game_time_done = true;

	}


}

