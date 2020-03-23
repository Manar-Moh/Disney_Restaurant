#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include<string>
#include <sstream>
#include <fstream>
#include<vector>
#include "SFML/Audio.hpp"
using namespace sf;
using namespace std;

extern int score;
extern int win_active;
extern int current_level;
extern int current_score_level;
extern bool loading_back;
class map_levels
{
	
	SoundBuffer sound_click_buf;
	Sound sound_click;

	Texture money1, money2, money3, money4, money5, money6, money7, money8, money9;
	Sprite money1_sprite, money2_sprite, money3_sprite, money4_sprite, money5_sprite,
		money6_sprite, money7_sprite, money8_sprite, money9_sprite;
	Time second ;
	Clock clock1;
	Time passed_time;

	struct level
	{
		bool done;
		int levelnumber;
		long long target;
		int achievedscore;
	};
	level levelsdata;
	ofstream outfile;
	ifstream infile;
	ifstream infile2;
	vector<level> leveldata_vector;

	int countlevel;
	
	Texture backgroundmaptexture;
	

	Texture level1icontexture;
	Texture level2icontexture;
	Texture level3icontexture;
	Texture level4icontexture;
	Texture level5icontexture;
	Texture level6icontexture;
	Texture level7icontexture;
	Texture level8icontexture;
	Texture level9icontexture;
	Texture hoverlevelicontexture;

	Font disneyfont;
	Text scoretext;
	stringstream converttostring;
	
	Texture storeicontexture;
	Sprite storeiconsprite;

	Texture backicontexture;
	Sprite backiconsprite;

	Texture storehovertexture;
	Sprite storehoversprite;

	Texture backhovertexture;
	Sprite backhoversprite;

	Texture levelhovertexture;
	Sprite levelhoversprite;

	Sprite backgroundmapsprite, level1iconsprite, level2iconsprite, level3iconsprite;
	Sprite level4iconsprite, level5iconsprite, level6iconsprite, level7iconsprite;
	Sprite level8iconsprite, level9iconsprite, hoverleveliconsprite;


public:

	map_levels();
	void map_window(RenderWindow& win);
	
};

