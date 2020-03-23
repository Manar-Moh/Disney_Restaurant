#include "map_levels.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include<vector>

using namespace sf;
using namespace std;

map_levels::map_levels()
{
	sound_click_buf.loadFromFile("Menu Selection Click.wav");
	sound_click.setBuffer(sound_click_buf);

	
	countlevel = 1;
	
	backgroundmaptexture.loadFromFile("backgroundmap.jpg");
	
	level1icontexture.loadFromFile("1.png");
	level2icontexture.loadFromFile("2.png");
	level3icontexture.loadFromFile("3.png");
	level4icontexture.loadFromFile("4.png");
	level5icontexture.loadFromFile("5.png");
	level6icontexture.loadFromFile("6.png");
	level7icontexture.loadFromFile("7.png");
	level8icontexture.loadFromFile("8.png");
	level9icontexture.loadFromFile("9.png");
	hoverlevelicontexture.loadFromFile("level_hover.png");
	
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
	
	 ///////////////////////////////////////
	disneyfont.loadFromFile("waltographUI.ttf");
	

	scoretext.setFont(disneyfont);
	scoretext.setCharacterSize(35);
	scoretext.setFillColor(Color::Yellow);
	scoretext.setPosition(90, 17);
	scoretext.setOutlineColor(Color::Black);
	scoretext.setOutlineThickness(2);
	
	storeicontexture.loadFromFile("storeicon.png");
	storeiconsprite.setTexture(storeicontexture);
	storeiconsprite.setPosition(Vector2f(1686, 893));
	storeiconsprite.setScale(Vector2f(0.85, 0.82));

	backicontexture.loadFromFile("backicon.png");
	backiconsprite.setTexture(backicontexture);
	backiconsprite.setPosition(Vector2f(0, 886));
	backiconsprite.setScale(Vector2f(0.85, 0.82));

	storehovertexture.loadFromFile("storehover.png");
	storehoversprite.setTexture(storehovertexture);
	storehoversprite.setPosition(Vector2f(1285, 465));
	storehoversprite.setScale(Vector2f(0.85, 0.82));

	backhovertexture.loadFromFile("backhover.png");
	backhoversprite.setTexture(backhovertexture);
	backhoversprite.setPosition(Vector2f(0, 470));
	backhoversprite.setScale(Vector2f(0.85, 0.82));

	levelhovertexture.loadFromFile("level_hover.png");
	levelhoversprite.setTexture(levelhovertexture);

	hoverleveliconsprite.setTexture(hoverlevelicontexture);

	//backgroungmap
	backgroundmapsprite.setTexture(backgroundmaptexture);
	backgroundmapsprite.setScale(Vector2f(1, 1));

	//level1icon
	level1iconsprite.setTexture(level1icontexture);
	level1iconsprite.setPosition(Vector2f(200, 220));
	level1iconsprite.setScale(Vector2f(0.45, 0.45));

	//level2icon
	level2iconsprite.setTexture(level2icontexture);
	level2iconsprite.setPosition(Vector2f(550, 80));
	level2iconsprite.setScale(Vector2f(0.45, 0.45));

	//level3icon
	level3iconsprite.setTexture(level3icontexture);
	level3iconsprite.setPosition(Vector2f(925, 175));
	level3iconsprite.setScale(Vector2f(0.45, 0.45));

	//level4icon
	level4iconsprite.setTexture(level4icontexture);
	level4iconsprite.setPosition(Vector2f(1220, -3));
	level4iconsprite.setScale(Vector2f(0.45, 0.45));

	//level5icon
	level5iconsprite.setTexture(level5icontexture);
	level5iconsprite.setPosition(Vector2f(1420, 285));
	level5iconsprite.setScale(Vector2f(0.45, 0.45));

	//level6icon
	level6iconsprite.setTexture(level6icontexture);
	level6iconsprite.setPosition(Vector2f(1780, 700));
	level6iconsprite.setScale(Vector2f(0.45, 0.45));

	//level7icon
	level7iconsprite.setTexture(level7icontexture);
	level7iconsprite.setPosition(Vector2f(930, 630));
	level7iconsprite.setScale(Vector2f(0.45, 0.45));

	//level8icon
	level8iconsprite.setTexture(level8icontexture);
	level8iconsprite.setPosition(Vector2f(417, 920));
	level8iconsprite.setScale(Vector2f(0.45, 0.45));

	//level9icon
	level9iconsprite.setTexture(level9icontexture);
	level9iconsprite.setPosition(Vector2f(230, 460));
	level9iconsprite.setScale(Vector2f(0.45, 0.45));
    
	char check2;
	infile.open("levelsdata.txt", ios::binary);
	if (infile.fail())
		cout << "fail";
	else {
		while (!infile.eof()) {

			infile >> levelsdata.done >> check2;

			infile >> levelsdata.levelnumber >> check2;
			countlevel = levelsdata.levelnumber;

			infile >> levelsdata.target >> check2;

			infile >> levelsdata.achievedscore ;
			infile >> check2;
			leveldata_vector.push_back(levelsdata);
			
			
			
		}
		
	}
	infile2.open("Store_food_array.txt", ios::binary);
	infile2 >> score;
	infile2.close();

	converttostring << score;
	scoretext.setString(converttostring.str());
	converttostring.str("");
	converttostring.clear();
}

void map_levels::map_window(RenderWindow& win)
{

	Event event;

	while (win.pollEvent(event))
	{
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > backiconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (backiconsprite.getGlobalBounds().left + backiconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > backiconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (backiconsprite.getGlobalBounds().top + backiconsprite.getGlobalBounds().height))
		{
		
			win_active = 0;
			sound_click.play();
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > storeiconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (storeiconsprite.getGlobalBounds().left + storeiconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > storeiconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (storeiconsprite.getGlobalBounds().top + storeiconsprite.getGlobalBounds().height))
		{

			win_active = 2;
			sound_click.play();
		}

		////////////////which level will begin//////////////////////////////

		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level1iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level1iconsprite.getGlobalBounds().left + level1iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level1iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level1iconsprite.getGlobalBounds().top + level1iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 1;
			current_score_level = leveldata_vector[0].target;
			
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level2iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level2iconsprite.getGlobalBounds().left + level2iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level2iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level2iconsprite.getGlobalBounds().top + level2iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 2;
			current_score_level = leveldata_vector[1].target;
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level3iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level3iconsprite.getGlobalBounds().left + level3iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level3iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level3iconsprite.getGlobalBounds().top + level3iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 3;
			current_score_level = leveldata_vector[2].target;
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level4iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level4iconsprite.getGlobalBounds().left + level4iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level4iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level4iconsprite.getGlobalBounds().top + level4iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 4;
			current_score_level = leveldata_vector[3].target;
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level5iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level5iconsprite.getGlobalBounds().left + level5iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level5iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level5iconsprite.getGlobalBounds().top + level5iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 5;
			current_score_level = leveldata_vector[4].target;
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level6iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level6iconsprite.getGlobalBounds().left + level6iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level6iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level6iconsprite.getGlobalBounds().top + level6iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 6;
			current_score_level = leveldata_vector[5].target;
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level7iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level7iconsprite.getGlobalBounds().left + level7iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level7iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level7iconsprite.getGlobalBounds().top + level7iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 7;
			current_score_level = leveldata_vector[6].target;
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level8iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level8iconsprite.getGlobalBounds().left + level8iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level8iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level8iconsprite.getGlobalBounds().top + level8iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 8;
			current_score_level = leveldata_vector[7].target;
		}
		if (event.type == Event::MouseButtonPressed &&
			Mouse::getPosition(win).x > level9iconsprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (level9iconsprite.getGlobalBounds().left + level9iconsprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > level9iconsprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (level9iconsprite.getGlobalBounds().top + level9iconsprite.getGlobalBounds().height))
		{

			win_active = 3;
			loading_back = false;
			sound_click.play();
			current_level = 9;
			current_score_level = leveldata_vector[8].target;
		}


	}
	
	win.draw(backgroundmapsprite);
	converttostring << score;
	scoretext.setString(converttostring.str());
	converttostring.str("");
	converttostring.clear();
	win.draw(scoretext);
	
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
	else if(passed_time <= sf::seconds(120)) {
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
	
		


	win.draw(backiconsprite);
	win.draw(storeiconsprite);

	for (int i = 0; i < countlevel; i++)
	{
		if (i == 0)
		{
			win.draw(level1iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level1iconsprite.setColor(Color(255, 255, 0));

			}
			if (Mouse::getPosition(win).x > level1iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level1iconsprite.getGlobalBounds().left + level1iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level1iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level1iconsprite.getGlobalBounds().top + level1iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(84, 110));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}

		}
		if (i == 1)
		{
			win.draw(level2iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level2iconsprite.setColor(Color(255, 255, 0));
			}
			if (Mouse::getPosition(win).x > level2iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level2iconsprite.getGlobalBounds().left + level2iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level2iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level2iconsprite.getGlobalBounds().top + level2iconsprite.getGlobalBounds().height))
			{

				levelhoversprite.setPosition(Vector2f(435, -30));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}



		}
		if ( i==2 )
		{
			win.draw(level3iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level3iconsprite.setColor(Color(255, 255, 0));
			}


			if (Mouse::getPosition(win).x > level3iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level3iconsprite.getGlobalBounds().left + level3iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level3iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level3iconsprite.getGlobalBounds().top + level3iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(810, 64));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}

		}
		if (i==3)
		{
			win.draw(level4iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level4iconsprite.setColor(Color(255, 255, 0));
			}
			if (Mouse::getPosition(win).x > level4iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level4iconsprite.getGlobalBounds().left + level4iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level4iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level4iconsprite.getGlobalBounds().top + level4iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(1105, -110));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}


		}
		if (i==4)
		{
			win.draw(level5iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level5iconsprite.setColor(Color(255, 255, 0));
			}
			if (Mouse::getPosition(win).x > level5iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level5iconsprite.getGlobalBounds().left + level5iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level5iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level5iconsprite.getGlobalBounds().top + level5iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(1305, 178));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}


		}
		if (i==5)
		{
			win.draw(level6iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level6iconsprite.setColor(Color(255, 255, 0));
			}
			if (Mouse::getPosition(win).x > level6iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level6iconsprite.getGlobalBounds().left + level6iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level6iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level6iconsprite.getGlobalBounds().top + level6iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(1665, 590));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}


		}

		if (i==6)
		{
			win.draw(level7iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level7iconsprite.setColor(Color(255, 255, 0));
			}
			if (Mouse::getPosition(win).x > level7iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level7iconsprite.getGlobalBounds().left + level7iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level7iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level7iconsprite.getGlobalBounds().top + level7iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(813, 522));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}


		}
		if (i==7)
		{
			win.draw(level8iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level8iconsprite.setColor(Color(255, 255, 0));
			}
			if (Mouse::getPosition(win).x > level8iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level8iconsprite.getGlobalBounds().left + level8iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level8iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level8iconsprite.getGlobalBounds().top + level8iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(303, 810));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}


		}
		if (i==8)
		{
			win.draw(level9iconsprite);

			if (leveldata_vector[i].done == true)
			{
				level9iconsprite.setColor(Color(255, 255, 0));
			}
			if (Mouse::getPosition(win).x > level9iconsprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (level9iconsprite.getGlobalBounds().left + level9iconsprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > level9iconsprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (level9iconsprite.getGlobalBounds().top + level9iconsprite.getGlobalBounds().height))
			{
				levelhoversprite.setPosition(Vector2f(115, 352));
				levelhoversprite.setScale(Vector2f(0.45, 0.45));
				win.draw(levelhoversprite);
			}


		}

		
	}
	if (Mouse::getPosition(win).x > backiconsprite.getGlobalBounds().left&&
		Mouse::getPosition(win).x < (backiconsprite.getGlobalBounds().left + backiconsprite.getGlobalBounds().width) &&
		Mouse::getPosition(win).y > backiconsprite.getGlobalBounds().top&&
		Mouse::getPosition(win).y < (backiconsprite.getGlobalBounds().top + backiconsprite.getGlobalBounds().height))
	{
		win.draw(backhoversprite);
	}

	if (Mouse::getPosition(win).x > storeiconsprite.getGlobalBounds().left&&
		Mouse::getPosition(win).x < (storeiconsprite.getGlobalBounds().left + storeiconsprite.getGlobalBounds().width) &&
		Mouse::getPosition(win).y > storeiconsprite.getGlobalBounds().top&&
		Mouse::getPosition(win).y < (storeiconsprite.getGlobalBounds().top + storeiconsprite.getGlobalBounds().height))
	{
		win.draw(storehoversprite);
	}
	
	

	outfile.open("levelsdata.txt",ios::binary);

	if (outfile.fail())
	{
		cout << "fail";
	}
	else {

		for (int i = 0; i < countlevel; i++) {
			
			outfile << leveldata_vector[i].done << "/";
			outfile << leveldata_vector[i].levelnumber << "/";
			outfile << leveldata_vector[i].target << "/";
			outfile << leveldata_vector[i].achievedscore << "/";
			
		}
		outfile.close();
		
	}
}

