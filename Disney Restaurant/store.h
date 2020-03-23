#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include<iostream>
using namespace std;
using namespace sf;

extern int score;
extern int win_active;

class store
{
	stringstream converttostring;
	Texture ptexture;
	Sprite playimage;

	Text scoretext;
	Font disneyfont;
	

	bool buy_window_open;

	Font disneyfont1;
	Texture withouthover1;

	//appel
	Sprite WithoutHover1;
	Texture appel;
	Sprite Apple;
	Text apple_text;
	Text price1;

	// BREAD2
	Sprite WithoutHover2;
	Texture bread;
	Sprite Bread2;
	Text Bread_text;
	Text price2;

	//BREAD1
	Sprite WithoutHover3;
	Texture bread1;
	Sprite Bread1;
	Text Bread1_text;
	Text price3;

	//cupcake
	Sprite WithoutHover4;
	Texture cup;
	Sprite Cupcake;
	Text CUPCAKE;
	Text price4;

	// Tometo
	Sprite WithoutHover5;
	Texture tometo;
	Sprite Tometo;
	Text TOMATO;
	Text price5;

	// CHEESE
	Sprite WithoutHover6;
	Texture cheese;
	Sprite Cheese;
	Text CHEESE1;
	Text price6;

	//Eclier
	Sprite WithoutHover7;
	Texture eclier;
	Sprite Eclier;
	Text ECLIER;
	Text price7;

	//felfel
	Sprite WithoutHover8;
	Texture felfel;
	Sprite Pepper;
	Text FELFEL0;
	Text price8;

	//donatise1
	Sprite WithoutHover9;
	Texture donatse;
	Sprite Dount;
	Text Donatise;
	Text price9;

	//hotdog
	Sprite WithoutHoverA;
	Texture hotdog;
	Sprite  Hotdog;
	Text HOTDOG1;
	Text priceA;

	//lan4on
	Sprite WithoutHoverB;
	Texture salmon;
	Sprite Salmon;
	Text SALAMON;
	Text priceB;

	// salad0
	Sprite WithoutHoverC;
	Texture salad0;
	Sprite Salad;
	Text SALAD;
	Text priceC;

	// pancake
	Sprite WithoutHoverD;
	Texture pancake;
	Sprite Pancake;
	Text BANCAKE;
	Text priceD;

	//gato
	Sprite WithoutHoverE;
	Texture gatto;
	Sprite Cake;
	Text GATO;
	Text priceE;

	// sweasroll
	Sprite WithoutHoverF;
	Texture sweasroll;
	Sprite Swissroll;
	Text SWEASROLL0;
	Text priceF;

	//SOUAP
	Sprite WithoutHoverG;
	Texture saoup;
	Sprite Soup;
	Text SOUP;
	Text priceG;

	// Dish
	Sprite WithoutHoverJ;
	Texture dish;
	Sprite Dish2;
	Text DISH1;
	Text priceH;

	// Dish0
	Sprite WithoutHoverH;
	Texture dish0;
	Sprite Dish1;
	Text DISH2;
	Text priceI;

	/////////////////////////

	Texture back;
	Sprite BACK;
	Texture back2;
	Sprite BACK_hover;

	Texture buy_window_texture;
	Sprite buy_window_sprite;

	Text BUY;
	Text CANCEL;
	
	Texture money_back;
	Sprite money_back_sprite;
	

	Texture money1, money2, money3, money4, money5, money6, money7, money8, money9;
	Sprite money1_sprite, money2_sprite, money3_sprite, money4_sprite, money5_sprite,
		money6_sprite, money7_sprite, money8_sprite, money9_sprite;
	Time second;
	Clock clock1;
	Time passed_time;

	struct struct_store
	{
		int id=0;
		int price=10;
		string namesprite="Apple";
		bool can_buy = true;
	};

	struct_store s;
	ifstream infile;
	ifstream infile2;
	ofstream outfile;
	ofstream outfile2;
	struct_store arr[25];


	Texture true_icon;
	Sprite true_sprite1, true_sprite2, true_sprite3, true_sprite4, true_sprite5
		, true_sprite6, true_sprite7, true_sprite8, true_sprite9, true_sprite10
		, true_sprite11, true_sprite12, true_sprite13, true_sprite14, true_sprite15, true_sprite16
		, true_sprite17, true_sprite18;

	SoundBuffer sound_click_buf;
	Sound sound_click;

	SoundBuffer sound_click2_buf;
	Sound sound_click2;

	SoundBuffer sound_click3_buf;
	Sound sound_click3;

	int active_id=-1;

public:
	store();
	void store_items(RenderWindow& win);
};

