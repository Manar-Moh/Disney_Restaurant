#include "store.h"
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <vector>
#include <fstream>
#include <string>
#include<iostream>
using namespace std;
using namespace sf;

store::store()
{	
	//shelvise
	ptexture.loadFromFile("shelves.jpg");
	playimage.setTexture(ptexture);
	playimage.setPosition(0, 0);

	//check which window is open
    buy_window_open = false;

	disneyfont1.loadFromFile("waltographUI.ttf");

	//APPEL
	withouthover1.loadFromFile("without hover.png");
	WithoutHover1.setTexture(withouthover1);
	WithoutHover1.setPosition(1242, 215);
	appel.loadFromFile("appel.png");
	Apple.setTexture(appel);
	Apple.setPosition(1180, 160);
	apple_text.setFont(disneyfont1);
	apple_text.setString("Apple");
	apple_text.setCharacterSize(25);
	apple_text.setFillColor(Color(219, 182, 156));
	apple_text.setPosition(1335, 265);
	price1.setFont(disneyfont1);
	price1.setString("15");
	price1.setCharacterSize(25);
	price1.setFillColor(Color(219, 182, 156));
	price1.setPosition(1365, 405);

	// BREAD2
	WithoutHover2.setTexture(withouthover1);
	WithoutHover2.setPosition(322, 445);
	bread.loadFromFile("bread2.png");
	Bread2.setTexture(bread);
	Bread2.setPosition(300, 400);
	Bread_text.setFont(disneyfont1);
	Bread_text.setString("Bread");
	Bread_text.setCharacterSize(25);
	Bread_text.setFillColor(Color(219, 182, 156));
	Bread_text.setPosition(420, 490);
	price2.setFont(disneyfont1);
	price2.setString("25");
	price2.setCharacterSize(25);
	price2.setFillColor(Color(219, 182, 156));
	price2.setPosition(450, 640);

	//BREAD1
	WithoutHover3.setTexture(withouthover1);
	WithoutHover3.setPosition(1548, 675);
	bread1.loadFromFile("bread1.png");
	Bread1.setTexture(bread1);
	Bread1.setPosition(1510, 620);
	Bread1_text.setFont(disneyfont1);
	Bread1_text.setString("Bread");
	Bread1_text.setCharacterSize(25);
	Bread1_text.setFillColor(Color(219, 182, 156));
	Bread1_text.setPosition(1640, 710);
	price3.setFont(disneyfont1);
	price3.setString("20");
	price3.setCharacterSize(25);
	price3.setFillColor(Color(219, 182, 156));
	price3.setPosition(1670, 860);

	//cupcake
	WithoutHover4.setTexture(withouthover1);
	WithoutHover4.setPosition(920, 215);
	cup.loadFromFile("cupcake.png");
	Cupcake.setTexture(cup);
	Cupcake.setPosition(850, 140);
	CUPCAKE.setFont(disneyfont1);
	CUPCAKE.setString("CUPCAKE");
	CUPCAKE.setCharacterSize(25);
	CUPCAKE.setFillColor(Color(219, 182, 156));
	CUPCAKE.setPosition(1006, 250);
	price4.setFont(disneyfont1);
	price4.setString("30");
	price4.setCharacterSize(25);
	price4.setFillColor(Color(219, 182, 156));
	price4.setPosition(1045, 410);

	// Tometo
	WithoutHover5.setTexture(withouthover1);
	WithoutHover5.setPosition(630, 215);
	tometo.loadFromFile("tometo1.png");
	Tometo.setTexture(tometo);
	Tometo.setPosition(600, 203);
	TOMATO.setFont(disneyfont1);
	TOMATO.setString("TOMATO");
	TOMATO.setCharacterSize(25);
	TOMATO.setFillColor(Color(219, 182, 156));
	TOMATO.setPosition(707, 265);
	price5.setFont(disneyfont1);
	price5.setString("10");
	price5.setCharacterSize(25);
	price5.setFillColor(Color(219, 182, 156));
	price5.setPosition(755, 403);

	// CHEESE
	WithoutHover6.setTexture(withouthover1);
	WithoutHover6.setPosition(1546, 215);
	cheese.loadFromFile("cheese.png");
	Cheese.setTexture(cheese);
	Cheese.setPosition(1485, 210);
	CHEESE1.setFont(disneyfont1);
	CHEESE1.setString("CHESSE");
	CHEESE1.setCharacterSize(25);
	CHEESE1.setFillColor(Color(219, 182, 156));
	CHEESE1.setPosition(1635, 260);
	price6.setFont(disneyfont1);
	price6.setString("10");
	price6.setCharacterSize(25);
	price6.setFillColor(Color(219, 182, 156));
	price6.setPosition(1670, 405);

	//Eclier
	WithoutHover7.setTexture(withouthover1);
	WithoutHover7.setPosition(1546, 445);
	eclier.loadFromFile("Eclier.png");
	Eclier.setTexture(eclier);
	Eclier.setPosition(1500, 430);
	ECLIER.setFont(disneyfont1);
	ECLIER.setString("ECLIER");
	ECLIER.setCharacterSize(25);
	ECLIER.setFillColor(Color(219, 182, 156));
	ECLIER.setPosition(1640, 487);
	price7.setFont(disneyfont1);
	price7.setString("30");
	price7.setCharacterSize(25);
	price7.setFillColor(Color(219, 182, 156));
	price7.setPosition(1665, 630);

	//felfel
	WithoutHover8.setTexture(withouthover1);
	WithoutHover8.setPosition(324, 675);
	felfel.loadFromFile("felfel.png");
	Pepper.setTexture(felfel);
	Pepper.setPosition(240, 560);
	FELFEL0.setFont(disneyfont1);
	FELFEL0.setString("PEPPER");
	FELFEL0.setCharacterSize(25);
	FELFEL0.setFillColor(Color(219, 182, 156));
	FELFEL0.setPosition(410, 720);
	price8.setFont(disneyfont1);
	price8.setString("18");
	price8.setCharacterSize(25);
	price8.setFillColor(Color(219, 182, 156));
	price8.setPosition(446, 860);

	//donatise1
	WithoutHover9.setTexture(withouthover1);
	WithoutHover9.setPosition(330, 215);
	donatse.loadFromFile("Dount.png");
	Dount.setTexture(donatse);
	Dount.setPosition(297, 210);
	Donatise.setFont(disneyfont1);
	Donatise.setString("Dount");
	Donatise.setCharacterSize(25);
	Donatise.setFillColor(Color(219, 182, 156));
	Donatise.setPosition(417, 270);
	price9.setFont(disneyfont1);
	price9.setString("35");
	price9.setCharacterSize(25);
	price9.setFillColor(Color(219, 182, 156));
	price9.setPosition(450, 399);

	//hotdog
	WithoutHoverA.setTexture(withouthover1);
	WithoutHoverA.setPosition(630, 445);
	hotdog.loadFromFile("hotdog.png");
	Hotdog.setTexture(hotdog);
	Hotdog.setPosition(680, 475);
	HOTDOG1.setFont(disneyfont1);
	HOTDOG1.setString("HOTDOG");
	HOTDOG1.setCharacterSize(25);
	HOTDOG1.setFillColor(Color(219, 182, 156));
	HOTDOG1.setPosition(710, 490);
	priceA.setFont(disneyfont1);
	priceA.setString("25");
	priceA.setCharacterSize(25);
	priceA.setFillColor(Color(219, 182, 156));
	priceA.setPosition(765, 635);

	//lan4on
	WithoutHoverB.setTexture(withouthover1);
	WithoutHoverB.setPosition(923, 445);
	salmon.loadFromFile("salmon.png");
	Salmon.setTexture(salmon);
	Salmon.setPosition(900, 410);
	SALAMON.setFont(disneyfont1);
	SALAMON.setString("SALMON");
	SALAMON.setCharacterSize(25);
	SALAMON.setFillColor(Color(219, 182, 156));
	SALAMON.setPosition(1030, 490);
	priceB.setFont(disneyfont1);
	priceB.setString("37");
	priceB.setCharacterSize(25);
	priceB.setFillColor(Color(219, 182, 156));
	priceB.setPosition(1065, 634);

	// salad0
	WithoutHoverC.setTexture(withouthover1);
	WithoutHoverC.setPosition(1245, 445);
	salad0.loadFromFile("salad0.png");
	Salad.setTexture(salad0);
	Salad.setPosition(1200, 415);
	SALAD.setFont(disneyfont1);
	SALAD.setString("SALAD");
	SALAD.setCharacterSize(25);
	SALAD.setFillColor(Color(219, 182, 156));
	SALAD.setPosition(1330, 475);
	priceC.setFont(disneyfont1);
	priceC.setString("55");
	priceC.setCharacterSize(25);
	priceC.setFillColor(Color(219, 182, 156));
	priceC.setPosition(1360, 630);

	// pancake
	WithoutHoverD.setTexture(withouthover1);
	WithoutHoverD.setPosition(33, 215);
	pancake.loadFromFile("pancake.png");
	Pancake.setTexture(pancake);
	Pancake.setPosition(10, 230);
	BANCAKE.setFont(disneyfont1);
	BANCAKE.setString("BANCAKE");
	BANCAKE.setCharacterSize(25);
	BANCAKE.setFillColor(Color(219, 182, 156));
	BANCAKE.setPosition(115, 270);
	priceD.setFont(disneyfont1);
	priceD.setString("40");
	priceD.setCharacterSize(25);
	priceD.setFillColor(Color(219, 182, 156));
	priceD.setPosition(160, 415);

	//gato
	WithoutHoverE.setTexture(withouthover1);
	WithoutHoverE.setPosition(1245, 675);
	gatto.loadFromFile("gatto.png");
	Cake.setTexture(gatto);
	Cake.setPosition(1160, 600);
	GATO.setFont(disneyfont1);
	GATO.setString("Cake");
	GATO.setCharacterSize(25);
	GATO.setFillColor(Color(219, 182, 156));
	GATO.setPosition(1340, 710);
	priceE.setFont(disneyfont1);
	priceE.setString("50");
	priceE.setCharacterSize(25);
	priceE.setFillColor(Color(219, 182, 156));
	priceE.setPosition(1360, 865);

	// sweasroll
	WithoutHoverG.setTexture(withouthover1);
	WithoutHoverG.setPosition(630, 675);
	sweasroll.loadFromFile("sweasroll.png");
	Swissroll.setTexture(sweasroll);
	Swissroll.setPosition(600, 650);
	SWEASROLL0.setFont(disneyfont1);
	SWEASROLL0.setString("SWEASROLL");
	SWEASROLL0.setCharacterSize(25);
	SWEASROLL0.setFillColor(Color(219, 182, 156));
	SWEASROLL0.setPosition(720, 710);
	priceF.setFont(disneyfont1);
	priceF.setString("40");
	priceF.setCharacterSize(25);
	priceF.setFillColor(Color(219, 182, 156));
	priceF.setPosition(755, 865);

	//SOUAP
	WithoutHoverF.setTexture(withouthover1);
	WithoutHoverF.setPosition(920, 675);
	saoup.loadFromFile("saoup.png");
	Soup.setTexture(saoup);
	Soup.setPosition(900, 630);
	SOUP.setFont(disneyfont1);
	SOUP.setString("SOUP");
	SOUP.setCharacterSize(25);
	SOUP.setFillColor(Color(219, 182, 156));
	SOUP.setPosition(1040, 715);
	priceG.setFont(disneyfont1);
	priceG.setString("45");
	priceG.setCharacterSize(25);
	priceG.setFillColor(Color(219, 182, 156));
	priceG.setPosition(1060, 865);

	// Dish
	WithoutHoverJ.setTexture(withouthover1);
	WithoutHoverJ.setPosition(30, 675);
	dish.loadFromFile("dish2.png");
	Dish2.setTexture(dish);
	Dish2.setPosition(6, 630);
	DISH1.setFont(disneyfont1);
	DISH1.setString("DISH2");
	DISH1.setCharacterSize(25);
	DISH1.setFillColor(Color(219, 182, 156));
	DISH1.setPosition(130, 700);
	priceH.setFont(disneyfont1);
	priceH.setString("60");
	priceH.setCharacterSize(25);
	priceH.setFillColor(Color(219, 182, 156));
	priceH.setPosition(160, 855);

	// Dish0
	WithoutHoverH.setTexture(withouthover1);
	WithoutHoverH.setPosition(30, 445);
	dish0.loadFromFile("dish1.png");
	Dish1.setTexture(dish0);
	Dish1.setPosition(5, 400);
	DISH2.setFont(disneyfont1);
	DISH2.setString("DISH1");
	DISH2.setCharacterSize(25);
	DISH2.setFillColor(Color(219, 182, 156));
	DISH2.setPosition(119, 485);
	priceI.setFont(disneyfont1);
	priceI.setString("60");
	priceI.setCharacterSize(25);
	priceI.setFillColor(Color(219, 182, 156));
	priceI.setPosition(155, 638);

	//back
	back.loadFromFile("back_without_hover.png");
	BACK.setTexture(back);
	BACK.setPosition(0, 845);
	//back_hover
	back2.loadFromFile("back.png");
	BACK_hover.setTexture(back2);
	BACK_hover.setPosition(0, 340);

	buy_window_texture.loadFromFile("buy_window.png");
	buy_window_sprite.setTexture(buy_window_texture);
	buy_window_sprite.setPosition(550, 230);

	BUY.setFont(disneyfont1);
	BUY.setString("Buy");
	BUY.setCharacterSize(60);
	BUY.setOutlineThickness(4);
	BUY.setOutlineColor(Color::Black);
	BUY.setFillColor(Color(219, 182, 156));
	BUY.setPosition(855, 600);

	CANCEL.setFont(disneyfont1);
	CANCEL.setString("Cancel");
	CANCEL.setCharacterSize(60);
	CANCEL.setOutlineThickness(4);
	CANCEL.setOutlineColor(Color::Black);
	CANCEL.setFillColor(Color(219, 182, 156));
	CANCEL.setPosition(830, 750);


	

	money_back.loadFromFile("money_background.png");
	money_back_sprite.setTexture(money_back);
	money_back_sprite.setPosition(-100, 0);

	disneyfont.loadFromFile("waltographUI.ttf");
	scoretext.setFont(disneyfont);
	scoretext.setCharacterSize(35);
	scoretext.setFillColor(Color::Yellow);
	scoretext.setPosition(90, 17);
	scoretext.setOutlineColor(Color::Black);
	scoretext.setOutlineThickness(2);



	//////////////////////////////////
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
	money1_sprite.setPosition(Vector2f(205, 1));
	money1_sprite.setScale(Vector2f(0.22, 0.2));

	money2_sprite.setTexture(money2);
	money2_sprite.setPosition(Vector2f(205, 1));
	money2_sprite.setScale(Vector2f(0.22, 0.2));

	money3_sprite.setTexture(money3);
	money3_sprite.setPosition(Vector2f(205, 1));
	money3_sprite.setScale(Vector2f(0.22, 0.2));

	money4_sprite.setTexture(money4);
	money4_sprite.setPosition(Vector2f(205, 1));
	money4_sprite.setScale(Vector2f(0.22, 0.2));

	money5_sprite.setTexture(money5);
	money5_sprite.setPosition(Vector2f(205, 1));
	money5_sprite.setScale(Vector2f(0.22, 0.2));

	money6_sprite.setTexture(money6);
	money6_sprite.setPosition(Vector2f(205, 1));
	money6_sprite.setScale(Vector2f(0.22, 0.2));

	money7_sprite.setTexture(money7);
	money7_sprite.setPosition(Vector2f(205, 1));
	money7_sprite.setScale(Vector2f(0.22, 0.2));

	money8_sprite.setTexture(money8);
	money8_sprite.setPosition(Vector2f(205, 1));
	money8_sprite.setScale(Vector2f(0.22, 0.2));

	money9_sprite.setTexture(money9);
	money9_sprite.setPosition(Vector2f(205, 1));
	money9_sprite.setScale(Vector2f(0.22, 0.2));

	second = seconds(0.01f);

///////////////////////////
	char ch;
	int i = 0;
	infile2.open("Store_food_array.txt",ios::binary);
	if (infile2.fail())
		cout << "fail";
	else {
		infile2 >> score;
		infile2 >> ch;
		while (!infile2.eof()) {
			{
				infile2 >> arr[i].id>>ch;
				
				infile2 >> arr[i].price;
				infile2 >> ch;
				infile2 >> arr[i].can_buy;
				infile2 >> ch;
				getline(infile2, arr[i].namesprite, '/');
				i++;
			}
		}
		infile2.close();
	}

	true_icon.loadFromFile("true.png");

	true_sprite1.setTexture(true_icon);
	true_sprite1.setPosition(1300, 245);
	true_sprite1.setScale(0.5, 0.5);

	true_sprite2.setTexture(true_icon);
	true_sprite2.setPosition(80, 245);
	true_sprite2.setScale(0.5, 0.5);

	true_sprite3.setTexture(true_icon);
	true_sprite3.setPosition(380, 710);
	true_sprite3.setScale(0.5, 0.5);

	true_sprite4.setTexture(true_icon);
	true_sprite4.setPosition(980, 245);
	true_sprite4.setScale(0.5, 0.5);

	true_sprite5.setTexture(true_icon);
	true_sprite5.setPosition(680, 245);
	true_sprite5.setScale(0.5, 0.5);

	true_sprite6.setTexture(true_icon);
	true_sprite6.setPosition(1590, 245);
	true_sprite6.setScale(0.5, 0.5);

	true_sprite7.setTexture(true_icon);
	true_sprite7.setPosition(1590, 480);
	true_sprite7.setScale(0.5, 0.5);

	true_sprite8.setTexture(true_icon);
	true_sprite8.setPosition(80, 480);
	true_sprite8.setScale(0.5, 0.5);

	true_sprite9.setTexture(true_icon);
	true_sprite9.setPosition(380, 245);
	true_sprite9.setScale(0.5, 0.5);

	true_sprite10.setTexture(true_icon);
	true_sprite10.setPosition(380, 480);
	true_sprite10.setScale(0.5, 0.5);

	true_sprite11.setTexture(true_icon);
	true_sprite11.setPosition(80, 710);
	true_sprite11.setScale(0.5, 0.5);

	true_sprite12.setTexture(true_icon);
	true_sprite12.setPosition(680, 710);
	true_sprite12.setScale(0.5, 0.5);


	true_sprite13.setTexture(true_icon);
	true_sprite13.setPosition(680, 480);
	true_sprite13.setScale(0.5, 0.5);


	true_sprite14.setTexture(true_icon);
	true_sprite14.setPosition(1300, 710);
	true_sprite14.setScale(0.5, 0.5);

	true_sprite15.setTexture(true_icon);
	true_sprite15.setPosition(1300, 480);
	true_sprite15.setScale(0.5, 0.5);

	true_sprite16.setTexture(true_icon);
	true_sprite16.setPosition(980, 480);
	true_sprite16.setScale(0.5, 0.5);

	true_sprite17.setTexture(true_icon);
	true_sprite17.setPosition(980, 710);
	true_sprite17.setScale(0.5, 0.5);

	true_sprite18.setTexture(true_icon);
	true_sprite18.setPosition(1590, 245);
	true_sprite18.setScale(0.5, 0.5);

	sound_click_buf.loadFromFile("Menu Selection Click.wav");
	sound_click.setBuffer(sound_click_buf);

	sound_click2_buf.loadFromFile("qubodup-crash.ogg");
	sound_click2.setBuffer(sound_click2_buf);

	sound_click3_buf.loadFromFile("hjm-coindrop_v2.wav");
	
	sound_click3.setBuffer(sound_click3_buf);

	converttostring << score;
	scoretext.setString(converttostring.str());
	converttostring.str("");
	converttostring.clear();
}



void store::store_items(RenderWindow& win)
{
	bool back_hover_active = false;
	sf::Event event;
	while (win.pollEvent(event))
	{

		if (buy_window_open == false)
		{
			if ( event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > BACK.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (BACK.getGlobalBounds().left + BACK.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > BACK.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (BACK.getGlobalBounds().top + BACK.getGlobalBounds().height))
			{
				win_active = 1;
				sound_click.play();
			}
			else if (arr[0].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover1.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover1.getGlobalBounds().left + WithoutHover1.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover1.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover1.getGlobalBounds().top + WithoutHover1.getGlobalBounds().height))
			{
				if (score >= arr[0].price)
				{
					buy_window_open = true;
					active_id = 1;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[1].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover2.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover2.getGlobalBounds().left + WithoutHover2.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover2.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover2.getGlobalBounds().top + WithoutHover2.getGlobalBounds().height))
			{
				if (score >= arr[1].price)
				{
					buy_window_open = true;
					active_id = 2;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[2].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover3.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover3.getGlobalBounds().left + WithoutHover3.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover3.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover3.getGlobalBounds().top + WithoutHover3.getGlobalBounds().height))
			{
				if (score >= arr[2].price)
				{
					buy_window_open = true;
					active_id = 3;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[3].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover4.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover4.getGlobalBounds().left + WithoutHover4.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover4.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover4.getGlobalBounds().top + WithoutHover4.getGlobalBounds().height))
			{
				if (score >= arr[3].price)
				{
					buy_window_open = true;
					active_id = 4;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[4].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover5.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover5.getGlobalBounds().left + WithoutHover5.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover5.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover5.getGlobalBounds().top + WithoutHover5.getGlobalBounds().height))
			{
				if (score >= arr[4].price)
				{
					buy_window_open = true;
					active_id = 5;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[5].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover6.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover6.getGlobalBounds().left + WithoutHover6.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover6.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover6.getGlobalBounds().top + WithoutHover6.getGlobalBounds().height))
			{
				if (score >= arr[5].price)
				{
					buy_window_open = true;
					active_id = 6;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[6].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover7.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover7.getGlobalBounds().left + WithoutHover7.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover7.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover7.getGlobalBounds().top + WithoutHover7.getGlobalBounds().height))
			{
				if (score >= arr[6].price)
				{
					buy_window_open = true;
					active_id = 7;
					sound_click.play();
				}
				else
					sound_click2.play();
			}

			else if (arr[7].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover8.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover8.getGlobalBounds().left + WithoutHover8.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover8.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover8.getGlobalBounds().top + WithoutHover8.getGlobalBounds().height))
			{
				if (score >= arr[7].price)
				{
					buy_window_open = true;
					active_id = 8;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[8].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHover9.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover9.getGlobalBounds().left + WithoutHover9.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover9.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover9.getGlobalBounds().top + WithoutHover9.getGlobalBounds().height))
			{
				if (score >= arr[8].price)
				{
					buy_window_open = true;
					active_id = 9;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[9].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverA.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverA.getGlobalBounds().left + WithoutHoverA.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverA.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverA.getGlobalBounds().top + WithoutHoverA.getGlobalBounds().height))
			{
				if (score >= arr[9].price)
				{
					buy_window_open = true;
					active_id = 10;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[10].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverB.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverB.getGlobalBounds().left + WithoutHoverB.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverB.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverB.getGlobalBounds().top + WithoutHoverB.getGlobalBounds().height))
			{
				if (score >= arr[10].price)
				{
					buy_window_open = true;
					active_id = 11;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[11].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverC.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverC.getGlobalBounds().left + WithoutHoverC.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverC.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverC.getGlobalBounds().top + WithoutHoverC.getGlobalBounds().height))
			{
				if (score >= arr[11].price)
				{
					buy_window_open = true;
					active_id = 12;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[12].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverD.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverD.getGlobalBounds().left + WithoutHoverD.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverD.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverD.getGlobalBounds().top + WithoutHoverD.getGlobalBounds().height))
			{
				if (score >= arr[12].price)
				{
					buy_window_open = true;
					active_id = 13;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[13].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverE.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverE.getGlobalBounds().left + WithoutHoverE.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverE.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverE.getGlobalBounds().top + WithoutHoverE.getGlobalBounds().height))
			{
				if (score >= arr[13].price)
				{
					buy_window_open = true;
					active_id = 14;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[14].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverF.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverF.getGlobalBounds().left + WithoutHoverF.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverF.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverF.getGlobalBounds().top + WithoutHoverF.getGlobalBounds().height))
			{
				if (score >= arr[14].price)
				{
					buy_window_open = true;
					active_id = 15;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[15].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverG.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverG.getGlobalBounds().left + WithoutHoverG.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverG.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverG.getGlobalBounds().top + WithoutHoverG.getGlobalBounds().height))
			{
				if (score >= arr[15].price)
				{
					buy_window_open = true;
					active_id = 16;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[16].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverH.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverH.getGlobalBounds().left + WithoutHoverH.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverH.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverH.getGlobalBounds().top + WithoutHoverH.getGlobalBounds().height))
			{
				if (score >= arr[16].price)
				{
					buy_window_open = true;
					active_id = 17;
					sound_click.play();
				}
				else
					sound_click2.play();
			}
			else if (arr[17].can_buy == true && event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > WithoutHoverJ.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverJ.getGlobalBounds().left + WithoutHoverJ.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverJ.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverJ.getGlobalBounds().top + WithoutHoverJ.getGlobalBounds().height))
			{
				if (score >= arr[17].price)
				{
					buy_window_open = true;
					active_id = 18;
					sound_click.play();
				}
				else
					sound_click2.play();
			}

		}
		else if (buy_window_open == true)
		{
			if (event.type == Event::MouseButtonPressed &&Mouse::getPosition(win).x > CANCEL.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (CANCEL.getGlobalBounds().left + CANCEL.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > CANCEL.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (CANCEL.getGlobalBounds().top + CANCEL.getGlobalBounds().height))
			{
				buy_window_open = false;
				sound_click.play();
			}
			if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > BUY.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (BUY.getGlobalBounds().left + BUY.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > BUY.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (BUY.getGlobalBounds().top + BUY.getGlobalBounds().height))
			{
				int f = active_id - 1;
				arr[f].can_buy = false;
				
				buy_window_open = false;
				sound_click3.play();
				score = score - arr[f].price;
			}

		}
	}

		//////////////*  HOVER  *///////////////////
		if (buy_window_open == true)
		{

			BUY.setOutlineColor(Color::Black);
			BUY.setFillColor(Color(219, 182, 156));
			CANCEL.setOutlineColor(Color::Black);
			CANCEL.setFillColor(Color(219, 182, 156));

			if (Mouse::getPosition(win).x > BUY.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (BUY.getGlobalBounds().left + BUY.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > BUY.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (BUY.getGlobalBounds().top + BUY.getGlobalBounds().height))
			{

				BUY.setFillColor(Color::Black);
				BUY.setOutlineColor(Color(219, 182, 156));
			}

			if (Mouse::getPosition(win).x > CANCEL.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (CANCEL.getGlobalBounds().left + CANCEL.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > CANCEL.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (CANCEL.getGlobalBounds().top + CANCEL.getGlobalBounds().height))
			{

				CANCEL.setFillColor(Color::Black);
				CANCEL.setOutlineColor(Color(219, 182, 156));
			}


		}
		else if (buy_window_open == false)
		{
			back_hover_active = false;
			BACK.setColor(Color(222, 207, 202));
			WithoutHover1.setColor(Color(222, 207, 202));
			WithoutHover2.setColor(Color(222, 207, 202));
			WithoutHover3.setColor(Color(222, 207, 202));
			WithoutHover4.setColor(Color(222, 207, 202));
			WithoutHover5.setColor(Color(222, 207, 202));
			WithoutHover6.setColor(Color(222, 207, 202));
			WithoutHover7.setColor(Color(222, 207, 202));
			WithoutHover8.setColor(Color(222, 207, 202));
			WithoutHover9.setColor(Color(222, 207, 202));
			WithoutHoverA.setColor(Color(222, 207, 202));
			WithoutHoverB.setColor(Color(222, 207, 202));
			WithoutHoverC.setColor(Color(222, 207, 202));
			WithoutHoverD.setColor(Color(222, 207, 202));
			WithoutHoverE.setColor(Color(222, 207, 202));
			WithoutHoverF.setColor(Color(222, 207, 202));
			WithoutHoverG.setColor(Color(222, 207, 202));
			WithoutHoverH.setColor(Color(222, 207, 202));
			WithoutHoverJ.setColor(Color(222, 207, 202));

			//* BACK 

			if (Mouse::getPosition(win).x > BACK.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (BACK.getGlobalBounds().left + BACK.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > BACK.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (BACK.getGlobalBounds().top + BACK.getGlobalBounds().height))
			{

				back_hover_active = true;

			}


			//*1

			if (arr[0].can_buy==true &&Mouse::getPosition(win).x > WithoutHover1.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover1.getGlobalBounds().left + WithoutHover1.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover1.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover1.getGlobalBounds().top + WithoutHover1.getGlobalBounds().height))
			{

				WithoutHover1.setColor(Color(97, 86, 82));

			}
			//*2


			else if (arr[1].can_buy == true &&Mouse::getPosition(win).x > WithoutHover2.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover2.getGlobalBounds().left + WithoutHover2.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover2.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover2.getGlobalBounds().top + WithoutHover2.getGlobalBounds().height))
			{

				WithoutHover2.setColor(Color(97, 86, 82));

			}
			//*3

			else if (arr[2].can_buy == true && Mouse::getPosition(win).x > WithoutHover3.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover3.getGlobalBounds().left + WithoutHover3.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover3.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover3.getGlobalBounds().top + WithoutHover3.getGlobalBounds().height))
			{

				WithoutHover3.setColor(Color(97, 86, 82));

			}
			//*4

			else if (arr[3].can_buy == true && Mouse::getPosition(win).x > WithoutHover4.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover4.getGlobalBounds().left + WithoutHover4.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover4.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover4.getGlobalBounds().top + WithoutHover4.getGlobalBounds().height))
			{

				WithoutHover4.setColor(Color(97, 86, 82));

			}
			//*5

			else if (arr[4].can_buy == true && Mouse::getPosition(win).x > WithoutHover5.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover5.getGlobalBounds().left + WithoutHover5.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover5.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover5.getGlobalBounds().top + WithoutHover5.getGlobalBounds().height))
			{

				WithoutHover5.setColor(Color(97, 86, 82));

			}
			//*6

			else if (arr[5].can_buy == true && Mouse::getPosition(win).x > WithoutHover6.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover6.getGlobalBounds().left + WithoutHover6.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover6.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover6.getGlobalBounds().top + WithoutHover6.getGlobalBounds().height))
			{

				WithoutHover6.setColor(Color(97, 86, 82));

			}
			//*7

			else if (arr[6].can_buy == true && Mouse::getPosition(win).x > WithoutHover7.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover7.getGlobalBounds().left + WithoutHover7.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover7.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover7.getGlobalBounds().top + WithoutHover7.getGlobalBounds().height))
			{

				WithoutHover7.setColor(Color(97, 86, 82));

			}
			//*8

			else if (arr[7].can_buy == true && Mouse::getPosition(win).x > WithoutHover8.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover8.getGlobalBounds().left + WithoutHover8.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover8.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover8.getGlobalBounds().top + WithoutHover8.getGlobalBounds().height))
			{

				WithoutHover8.setColor(Color(97, 86, 82));

			}
			//*9

			else if (arr[8].can_buy == true && Mouse::getPosition(win).x > WithoutHover9.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHover9.getGlobalBounds().left + WithoutHover9.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHover9.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHover9.getGlobalBounds().top + WithoutHover9.getGlobalBounds().height))
			{

				WithoutHover9.setColor(Color(97, 86, 82));

			}
			//*A

			else if (arr[9].can_buy == true && Mouse::getPosition(win).x > WithoutHoverA.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverA.getGlobalBounds().left + WithoutHoverA.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverA.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverA.getGlobalBounds().top + WithoutHoverA.getGlobalBounds().height))
			{

				WithoutHoverA.setColor(Color(97, 86, 82));

			}
			//*B

			else if (arr[10].can_buy == true && Mouse::getPosition(win).x > WithoutHoverB.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverB.getGlobalBounds().left + WithoutHoverB.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverB.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverB.getGlobalBounds().top + WithoutHoverB.getGlobalBounds().height))
			{

				WithoutHoverB.setColor(Color(97, 86, 82));

			}
			//*C

			else if (arr[11].can_buy == true && Mouse::getPosition(win).x > WithoutHoverC.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverC.getGlobalBounds().left + WithoutHoverC.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverC.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverC.getGlobalBounds().top + WithoutHoverC.getGlobalBounds().height))
			{

				WithoutHoverC.setColor(Color(97, 86, 82));

			}
			//*D

			else if (arr[12].can_buy == true && Mouse::getPosition(win).x > WithoutHoverD.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverD.getGlobalBounds().left + WithoutHoverD.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverD.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverD.getGlobalBounds().top + WithoutHoverD.getGlobalBounds().height))
			{

				WithoutHoverD.setColor(Color(97, 86, 82));

			}
			//*E

			else if (arr[13].can_buy == true && Mouse::getPosition(win).x > WithoutHoverE.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverE.getGlobalBounds().left + WithoutHoverE.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverE.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverE.getGlobalBounds().top + WithoutHoverE.getGlobalBounds().height))
			{

				WithoutHoverE.setColor(Color(97, 86, 82));

			}
			//*F

			else if (arr[14].can_buy == true && Mouse::getPosition(win).x > WithoutHoverF.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverF.getGlobalBounds().left + WithoutHoverF.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverF.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverF.getGlobalBounds().top + WithoutHoverF.getGlobalBounds().height))
			{

				WithoutHoverF.setColor(Color(97, 86, 82));

			}
			//*G

			else if (arr[15].can_buy == true && Mouse::getPosition(win).x > WithoutHoverG.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverG.getGlobalBounds().left + WithoutHoverG.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverG.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverG.getGlobalBounds().top + WithoutHoverG.getGlobalBounds().height))
			{

				WithoutHoverG.setColor(Color(97, 86, 82));

			}
			//*H

			else if (arr[16].can_buy == true && Mouse::getPosition(win).x > WithoutHoverH.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverH.getGlobalBounds().left + WithoutHoverH.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverH.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverH.getGlobalBounds().top + WithoutHoverH.getGlobalBounds().height))
			{

				WithoutHoverH.setColor(Color(97, 86, 82));

			}
			//*J

			else if (arr[17].can_buy == true && Mouse::getPosition(win).x > WithoutHoverJ.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (WithoutHoverJ.getGlobalBounds().left + WithoutHoverJ.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > WithoutHoverJ.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (WithoutHoverJ.getGlobalBounds().top + WithoutHoverJ.getGlobalBounds().height))
			{

				WithoutHoverJ.setColor(Color(97, 86, 82));

			}

		}

		
			win.draw(playimage);
			win.draw(money_back_sprite);
			win.draw(WithoutHover1);
			win.draw(Apple);
			win.draw(WithoutHover2);
			win.draw(Bread2);
			win.draw(WithoutHover3);
			win.draw(Bread1);
			win.draw(WithoutHover4);
			win.draw(Cupcake);
			win.draw(WithoutHover5);
			win.draw(Tometo);
			win.draw(WithoutHover6);
			win.draw(WithoutHover7);
			win.draw(Cheese);
			win.draw(Eclier);
			win.draw(WithoutHover8);
			win.draw(Pepper);
			win.draw(WithoutHover9);
			win.draw(Dount);
			win.draw(WithoutHoverA);
			win.draw(Hotdog);
			win.draw(WithoutHoverB);
			win.draw(Salmon);
			win.draw(WithoutHoverC);
			win.draw(Salad);
			win.draw(WithoutHoverD);
			win.draw(Pancake);
			win.draw(WithoutHoverE);
			win.draw(Cake);
			win.draw(WithoutHoverF);
			win.draw(WithoutHoverG);
			win.draw(Swissroll);
			win.draw(Soup);
			win.draw(WithoutHoverJ);
			win.draw(WithoutHoverH);
			win.draw(Dish1);
			win.draw(Dish2);
			win.draw(BACK);
			if (back_hover_active == true)
			{
				win.draw(BACK_hover);
			}
			win.draw(apple_text);
			win.draw(price1);
			win.draw(Bread_text);
			win.draw(price2);
			win.draw(Bread1_text);
			win.draw(price3);
			win.draw(CUPCAKE);
			win.draw(price4);
			win.draw(TOMATO);
			win.draw(price5);
			win.draw(CHEESE1);
			win.draw(price6);
			win.draw(ECLIER);
			win.draw(price7);
			win.draw(FELFEL0);
			win.draw(price8);
			win.draw(Donatise);
			win.draw(price9);
			win.draw(HOTDOG1);
			win.draw(priceA);
			win.draw(SALAMON);
			win.draw(priceB);
			win.draw(SALAD);
			win.draw(priceC);
			win.draw(BANCAKE);
			win.draw(priceD);
			win.draw(GATO);
			win.draw(priceE);
			win.draw(SWEASROLL0);
			win.draw(priceF);
			win.draw(SOUP);
			win.draw(FELFEL0);

			win.draw(priceG);
			win.draw(DISH1);
			win.draw(priceH);
			win.draw(DISH2);
			win.draw(priceI);

			
			//////////////to check if item can buy or not///////////////

			if (arr[0].can_buy == false)
			{
				win.draw(true_sprite1);
			}
			if (arr[1].can_buy == false)
			{
				win.draw(true_sprite2);
			}
			if (arr[2].can_buy == false)
			{
				win.draw(true_sprite3);
			}
			if (arr[3].can_buy == false)
			{
				win.draw(true_sprite4);
			}
			if (arr[4].can_buy == false)
			{
				win.draw(true_sprite5);
			}
			if (arr[5].can_buy == false)
			{
				win.draw(true_sprite6);
			}
			if (arr[6].can_buy == false)
			{
				win.draw(true_sprite7);
			}
			if (arr[7].can_buy == false)
			{
				win.draw(true_sprite8);
			}
			if (arr[8].can_buy == false)
			{
				win.draw(true_sprite9);
			}
			if (arr[9].can_buy == false)
			{
				win.draw(true_sprite10);
			}
			if (arr[10].can_buy == false)
			{
				win.draw(true_sprite11);
			}
			if (arr[11].can_buy == false)
			{
				win.draw(true_sprite12);
			}
			if (arr[12].can_buy == false)
			{
				win.draw(true_sprite13);
			}
			if (arr[13].can_buy == false)
			{
				win.draw(true_sprite14);
			}
			if (arr[14].can_buy == false)
			{
				win.draw(true_sprite15);
			}
			if (arr[15].can_buy == false)
			{
				win.draw(true_sprite16);
			}
			if (arr[16].can_buy == false)
			{
				win.draw(true_sprite17);
			}
			if (arr[17].can_buy == false)
			{
				win.draw(true_sprite18);
			}

			///////////////////////////
		  if (buy_window_open == true)
			{
				win.draw(buy_window_sprite);
				win.draw(CANCEL);
				win.draw(BUY);

			}
		  converttostring << score;
		  scoretext.setString(converttostring.str());
		  converttostring.str("");
		  converttostring.clear();
		  win.draw(scoretext);

		 ////////////////////////////////////////////////////

		  passed_time += clock1.getElapsedTime();
		  if (passed_time <= sf::seconds(20))
		  {
			  win.draw(money5_sprite);
		  }
		  else if (passed_time <= sf::seconds(40))
		  {
			  win.draw(money4_sprite);
		  }
		  else if (passed_time <= sf::seconds(60))
		  {

			  win.draw(money3_sprite);
		  }
		  else if (passed_time <= sf::seconds(80))
		  {

			  win.draw(money2_sprite);
		  }
		  else if (passed_time <= sf::seconds(100))
		  {

			  win.draw(money1_sprite);
		  }
		  else if (passed_time <= sf::seconds(120)) {
			  win.draw(money6_sprite);
		  }
		  else if (passed_time <= sf::seconds(140)) {
			  win.draw(money7_sprite);
		  }
		  else if (passed_time <= sf::seconds(160)) {
			  win.draw(money8_sprite);
		  }
		  else if (passed_time <= sf::seconds(180)) {
			  win.draw(money9_sprite);
		  }
		  else if (passed_time < sf::seconds(200)) {
			  passed_time = clock1.restart();
		  }
		 //////////////////////////
		  outfile2.open("Store_food_array.txt", ios::binary);
		  outfile2 << score << "/";
		  for (int i = 0; i < 18; i++)
		  {
			  outfile2 << arr[i].id << "/"; 
			  outfile2 << arr[i].price << "/";
			  outfile2 << arr[i].can_buy << "/";
			  outfile2 << arr[i].namesprite << "/";
			 
		  } 
		  outfile2.close();
		 
}
