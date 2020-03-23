#include "Menu.h"
#include <SFML/Graphics.hpp>
#include<iostream>
#include "SFML/Audio.hpp"
using namespace std;
using namespace sf;

Menu::Menu() {

	menu_background.loadFromFile("menu_background2.jpg");
	background_sprite.setTexture(menu_background);
	background_sprite.setTextureRect(IntRect(0, 0, 1950, 1505));

	menu_font.loadFromFile("waltographUI.ttf");

	play_text.setFont(menu_font);
	play_text.setString("Start");
	play_text.setPosition(770, 450);
	play_text.setCharacterSize(100);
	play_text.setOutlineThickness(2);
	play_text.setOutlineColor(Color::Black);

	settings_text.setFont(menu_font);
	settings_text.setString("Sound");
	settings_text.setPosition(740, 690);
	settings_text.setCharacterSize(100);
	settings_text.setOutlineThickness(2);
	settings_text.setOutlineColor(Color::Black);

	exit_text.setFont(menu_font);
	exit_text.setString("Exit");
	exit_text.setPosition(820, 900);
	exit_text.setCharacterSize(100);
	exit_text.setOutlineThickness(2);
	exit_text.setOutlineColor(Color::Black);

	settings_is_activated = false;

	play_music_text.setFont(menu_font);
	play_music_text.setString("Play Music");
	play_music_text.setPosition(300, 750);
	play_music_text.setCharacterSize(66);
	play_music_text.setOutlineThickness(2);
	play_music_text.setOutlineColor(Color::White);
	play_music_text.setFillColor(Color::Black);

	stop_music_text.setFont(menu_font);
	stop_music_text.setString("Stop Music");
	stop_music_text.setPosition(1100, 750);
	stop_music_text.setCharacterSize(66);
	stop_music_text.setOutlineThickness(2);
	stop_music_text.setOutlineColor(Color::Black);

	sound_pic.loadFromFile("sound_active.png");
	sound_sprite.setTexture(sound_pic);
	sound_sprite.setPosition(380, 470);
	sound_sprite.setScale(0.5, 0.5);

	play_sound_active = true;
	stop_sound_active = false;

	back_pic.loadFromFile("back_without_hover.png");
	back_without_hover_sprite.setTexture(back_pic);
	back_without_hover_sprite.setPosition(0,843);

	back_hover.loadFromFile("back.png");
	back_sprite.setTexture(back_hover);
	back_sprite.setPosition(0, 340);

	hover_on_back = false;
	
	menu_icon.loadFromFile("mouse_cursor1.png");
	menu_icon_sprite.setTexture(menu_icon);
	menu_icon_active = false;

	
	sound_click_buf.loadFromFile("Menu Selection Click.wav");
	sound_click.setBuffer(sound_click_buf);
}

void Menu::menu_items(RenderWindow& win, Music& music) {

	Event event;

	while (win.pollEvent(event))
	{
		if (settings_is_activated == false) {

			//play
			if (event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > play_text.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (play_text.getGlobalBounds().left + play_text.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > play_text.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (play_text.getGlobalBounds().top + play_text.getGlobalBounds().height))
			{
				
				win_active = 1;
				sound_click.play();

			}		//exit
			else if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > exit_text.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (exit_text.getGlobalBounds().left + exit_text.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > exit_text.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (exit_text.getGlobalBounds().top + exit_text.getGlobalBounds().height))
			     {
				      win.close();
					  sound_click.play();
			     } //settings
			else if (event.type == Event::MouseButtonPressed && Mouse::getPosition(win).x > settings_text.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (settings_text.getGlobalBounds().left + settings_text.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > settings_text.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (settings_text.getGlobalBounds().top + settings_text.getGlobalBounds().height))
			     {
				     settings_is_activated = true;
					 sound_click.play();
			     }

		}
		else if (settings_is_activated == true) {

			if (play_sound_active == true && stop_sound_active == false &&
				event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > stop_music_text.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (stop_music_text.getGlobalBounds().left + stop_music_text.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > stop_music_text.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (stop_music_text.getGlobalBounds().top + stop_music_text.getGlobalBounds().height))
			{
				stop_music_text.setFillColor(Color::Black);
				stop_music_text.setOutlineColor(Color::White);
				play_music_text.setFillColor(Color::White);
				play_music_text.setOutlineColor(Color::Black);
				sound_sprite.setPosition(1170, 470);

				play_sound_active = false;
				stop_sound_active = true;
				music.pause();
				sound_click.play();
			}
			else if (play_sound_active == false && stop_sound_active == true &&
				event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > play_music_text.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (play_music_text.getGlobalBounds().left + play_music_text.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > play_music_text.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (play_music_text.getGlobalBounds().top + play_music_text.getGlobalBounds().height))
			     {
				stop_music_text.setFillColor(Color::White);
				stop_music_text.setOutlineColor(Color::Black);
				play_music_text.setFillColor(Color::Black);
				play_music_text.setOutlineColor(Color::White);
				sound_sprite.setPosition(380, 470);

				play_sound_active = true;
				stop_sound_active = false;
				music.play();
				sound_click.play();
			     }
			if (event.type == Event::MouseButtonPressed &&
				Mouse::getPosition(win).x > back_without_hover_sprite.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (back_without_hover_sprite.getGlobalBounds().left + back_without_hover_sprite.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > back_without_hover_sprite.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (back_without_hover_sprite.getGlobalBounds().top + back_without_hover_sprite.getGlobalBounds().height))
			{
				win_active = 0;
				settings_is_activated = false;
				sound_click.play();
			}
		}
		

	}
	
	//update 

	if (settings_is_activated == false) {
		//hover
		play_text.setFillColor(Color::White);
		play_text.setOutlineColor(Color::Black);

		settings_text.setFillColor(Color::White);
		settings_text.setOutlineColor(Color::Black);

		exit_text.setFillColor(Color::White);
		exit_text.setOutlineColor(Color::Black);

		menu_icon_active = false;

		if (Mouse::getPosition(win).x > play_text.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (play_text.getGlobalBounds().left + play_text.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > play_text.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (play_text.getGlobalBounds().top + play_text.getGlobalBounds().height))
		{
			play_text.setFillColor(Color::Black);
			play_text.setOutlineColor(Color::White);
			menu_icon_active = true;
			menu_icon_sprite.setPosition(620, 442);
		}
		else if (Mouse::getPosition(win).x > settings_text.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (settings_text.getGlobalBounds().left + settings_text.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > settings_text.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (settings_text.getGlobalBounds().top + settings_text.getGlobalBounds().height))
		{
			settings_text.setFillColor(Color::Black);
			settings_text.setOutlineColor(Color::White);
			menu_icon_active = true;
			menu_icon_sprite.setPosition(600, 680);

		}
		else if (Mouse::getPosition(win).x > exit_text.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (exit_text.getGlobalBounds().left + exit_text.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > exit_text.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (exit_text.getGlobalBounds().top + exit_text.getGlobalBounds().height))
		{
			exit_text.setFillColor(Color::Black);
			exit_text.setOutlineColor(Color::White);
			menu_icon_active = true;
			menu_icon_sprite.setPosition(678, 889);

		}

	}
	else if (settings_is_activated == true) 
	{

		if (play_sound_active == true && stop_sound_active==false)
		{
			
			stop_music_text.setFillColor(Color::White);
			stop_music_text.setOutlineColor(Color::Black);


			if (Mouse::getPosition(win).x > stop_music_text.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (stop_music_text.getGlobalBounds().left + stop_music_text.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > stop_music_text.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (stop_music_text.getGlobalBounds().top + stop_music_text.getGlobalBounds().height))
			{

				stop_music_text.setFillColor(Color::Black);
				stop_music_text.setOutlineColor(Color::White);

			}

		}
		 else if (play_sound_active == false && stop_sound_active ==true )
		{
			play_music_text.setFillColor(Color::White);
			play_music_text.setOutlineColor(Color::Black);


			if (Mouse::getPosition(win).x > play_music_text.getGlobalBounds().left&&
				Mouse::getPosition(win).x < (play_music_text.getGlobalBounds().left + play_music_text.getGlobalBounds().width) &&
				Mouse::getPosition(win).y > play_music_text.getGlobalBounds().top&&
				Mouse::getPosition(win).y < (play_music_text.getGlobalBounds().top + play_music_text.getGlobalBounds().height))
			{

				play_music_text.setFillColor(Color::Black);
				play_music_text.setOutlineColor(Color::White);

			}

		}
		    hover_on_back = false;

		if (Mouse::getPosition(win).x > back_without_hover_sprite.getGlobalBounds().left&&
			Mouse::getPosition(win).x < (back_without_hover_sprite.getGlobalBounds().left + back_without_hover_sprite.getGlobalBounds().width) &&
			Mouse::getPosition(win).y > back_without_hover_sprite.getGlobalBounds().top&&
			Mouse::getPosition(win).y < (back_without_hover_sprite.getGlobalBounds().top + back_without_hover_sprite.getGlobalBounds().height))
		{
			hover_on_back = true;
		}
		
	}
	


	//draw
	win.draw(background_sprite);

	if (settings_is_activated == false)
	{
		win.draw(play_text);
		win.draw(settings_text);
		win.draw(exit_text);
		if (menu_icon_active == true)
		{
			win.draw(menu_icon_sprite);
		}
		
	}
	else if (settings_is_activated == true)
	{
		
		if (hover_on_back == true) 
		{
			win.draw(back_sprite);
		}
		else
		{
			win.draw(back_without_hover_sprite);
		}
		win.draw(play_music_text);
		win.draw(stop_music_text);
		win.draw(sound_sprite);
		
	}

}