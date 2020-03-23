#include <SFML/Graphics.hpp>
#include<iostream>
#include"Menu.h"
#include"map_levels.h"
#include"store.h"
#include"loading.h"
#include"level.h"
#include "SFML/Audio.hpp"

using namespace std;
using namespace sf;

//score in game
int score ;

//to check which window is open
const int menu_win = 0;
const int map_win = 1;
const int store_win = 2;
const int loading_win = 3;
const int before_level = 4;
const int level_win = 5;

int win_active = 0;
bool loading_back = false;
//for before level image

int current_level;
int current_score_level;

int main()
{
	//classes
	Menu menu;
	map_levels m;
	store s;
	loading l;
	level g;

	//window
	RenderWindow win(sf::VideoMode(1920, 1080), "Disney Restaurant", Style::Default);
	win.setFramerateLimit(60);

	//cursor
	Cursor cur;
	cur.loadFromSystem(Cursor::Hand);
	win.setMouseCursor(cur);

	//sound
	 Music music;
	music.openFromFile("up.ogg");
	music.setLoop(true);
	music.play();

	
	while (win.isOpen()) {

		win.clear();
		switch (win_active)
		{
		case menu_win:
			menu.menu_items(win,music);
			break;
		case map_win:
			m.map_window(win);
			break;
		case store_win:
			s.store_items(win);
			break;
		case loading_win:
			l.loading_display(win);
			break;
		case before_level:
			g.before_level(win);
			break;
		case level_win:
			g.level_game(win);
			
			break;
			
		}
		win.display();
		
	}
	return 0;
}