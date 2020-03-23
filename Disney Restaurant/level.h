#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
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

extern int score;
extern int win_active;
extern int current_level;
extern int current_score_level;
extern bool loading_back;
class level
{
	Texture beforelevelbackgroundtexture;
	Sprite beforelevelbackgroundsprite;

	Texture beforelevel_play_texture;
	Sprite beforelevel_play_sprite;

	Texture beforelevel_playhover_texture;
	Sprite beforelevel_playhover_sprite;

	Texture beforelevel_back_texture;
	Sprite beforelevel_back_sprite;

	Texture beforelevel_backhover_texture;
	Sprite beforelevel_backhover_sprite;

	Text level_goal_text;
	Text level_number_text;

	//////////////////////////////////////////////////////////////////

	Texture levelbackgroundtexture;
	Sprite levelbackgroundsprite;

	Text level_score_text;
	int level_score=0;
	Font disneyfont;
	stringstream converttostring;

	Texture money1, money2, money3, money4, money5, money6, money7, money8, money9;
	Sprite money1_sprite, money2_sprite, money3_sprite, money4_sprite, money5_sprite,
		money6_sprite, money7_sprite, money8_sprite, money9_sprite;
	Time second;
	Clock clock1;
	Time passed_time_money;

	/////////////////////////////////

	
	//appel
	Texture component14_1texture;
	Sprite component14_1sprite;
	//cupcake
	Texture component13_1texture;
	Sprite component13_1sprite;
	// Tometo
	Texture component9_1texture;
	Sprite component9_1sprite;
	// CHEESE
	Texture component1_1texture;
	Sprite component1_1sprite;
	//Eclier
	Texture component15texture;
	Sprite component15sprite;
	//felfel
	Texture component9texture;
	Sprite component9sprite;
	//donatise1
	Texture component13texture;
	Sprite component13sprite;
	//hotdog
	Texture component11texture;
	Sprite component11sprite;
	//lan4on
	Texture component11_1texture;
	Sprite component11_1sprite;
	// salad0
	Texture component3_1texture;
	Sprite component3_1sprite;
	// pancake
	Texture component12_1texture;
	Sprite component12_1sprite;
	//gato
	Texture component12texture;
	Sprite component12sprite;
	// sweasroll
	Texture component15_1texture;
	Sprite component15_1sprite;
	//SOUAP
	Texture component14texture;
	Sprite component14sprite;
	// Dish2
	Texture component10_1texture;
	Sprite component10_1sprite;
	// Dish1
	Texture component10texture;
	Sprite component10sprite;
	//5s
	Texture component3texture;
	Sprite component3sprite;
	//5yar
	Texture component2texture;
	Sprite component2sprite;
	//zetoon
	Texture component2_1texture;
	Sprite component2_1sprite;
	//burger
	Texture component1texture;
	Sprite component1sprite;
	//fra5
	Texture component4texture;
	Sprite component4sprite;
	//meat
	Texture component4_1texture;
	Sprite component4_1sprite;
	//pizza
	Texture component6texture;
	Sprite component6sprite;
	Sprite component6_1sprite;
	//icecream
	Texture component7texture;
	Sprite component7sprite;
	Sprite component7_1sprite;
	//juice
	Texture component8texture;
	Sprite component8sprite;
	Sprite component8_1sprite;
	//bread
	Texture component5texture;
	Sprite component5sprite;
	Texture component5_1texture;
	Sprite component5_1sprite;
	/////////////////////////

	struct struct_store
	{
		int id ;
		int price ;
		string namesprite ;
		bool can_buy ;
	};

	struct_store struct1;
	ifstream infile;
	ofstream outfile;
	vector<struct_store>vector_food;

	SoundBuffer sound_click_buf;
	Sound sound_click;

	///////////////person&food/////////////////
	
	int people_in_order = 0;

	Clock clock3, clock4, clock5;
	
	Time elapsed1, elapsed2, elapsed3;
	Clock clock2;
	Time passedTimeperson;

	struct person_order
	{
		bool order_done = false;
		int id_of_person = 0;
	};
	person_order people_order_array[3];
	person_order person_order_struct;


	bool time_done1 = false;
	bool time_done2 = false;
	bool time_done3 = false;

	ofstream outfile2;
	ifstream infile2;
	struct Store_Elements
	{
		int id = 27;
		int price = 10;
		bool can_buy = false;
		string spritename = "Pizza";
	};

	int z;

	queue <int>character_q;
	vector<Store_Elements> existfoodvector;
	stack<int> burgerstack;
	stack<int> chickenstack;
	stack<int> meatstack;

	Store_Elements storeelement, burger, cheese, olives, lettuce, salad, meat, chicken, juice, icecream, pizza, cu;

	Store_Elements randomelement1, randomelement2, randomelement3, randomelement4;
	Store_Elements randomelement5, randomelement6, randomelement7, randomelement8;
	Store_Elements randomelement9, randomelement10, randomelement11, randomelement12;

	int burgercount = 10;
	int chickencount = 10;
	int meatcount = 10;
	vector<Store_Elements>sandwitch_elements;
	vector<Store_Elements>elements_not_sandwitch;
	vector<Store_Elements>sandwitch_meat_elements;
	

	/////////person///////////////////


	Texture ptexture0;
	Sprite playimage0;
	int id_sprit0 = 0;
	bool draw_before0 = false;

	Texture ptexture1;
	Sprite playimage1;
	int id_sprit1 = 1;
	bool draw_before1 = false;


	Texture ptexture2;
	Sprite playimage2;
	int id_sprit2 = 2;
	bool draw_before2 = false;

	Texture ptexture3;
	Sprite playimage3;
	int id_sprit3 = 3;
	bool draw_before3 = false;


	Texture ptexture4;
	Sprite playimage4;
	int id_sprit4 = 4;
	bool draw_before4 = false;


	Texture ptexture5;
	Sprite playimage5;
	int id_sprit5 = 5;
	bool draw_before5 = false;

	Texture ptexture6;
	Sprite playimage6;
	int id_sprit6 = 6;
	bool draw_before6 = false;


	Texture ptexture7;
	Sprite playimage7;
	int id_sprit7 = 7;
	bool draw_before7 = false;


	Texture ptexture8;
	Sprite playimage8;
	int id_sprit8 = 8;
	bool draw_before8 = false;


	Texture ptexture9;
	Sprite playimage9;
	int id_sprit9 = 9;
	bool draw_before9 = false;

	Texture ptexture10;
	Sprite playimage10;
	int id_sprit10 = 10;
	bool draw_before10 = false;



	Texture ptexture11;
	Sprite playimage11;
	int id_sprit11 = 11;
	bool draw_before11 = false;

	///////////////////
	Texture menuordertexture;
	Sprite menuordersprite;
	Texture menuorder1texture;
	Sprite menuorder1sprite;
	Texture menuorder2texture;
	Sprite menuorder2sprite;
	////////////////////////
	

	//////////////////////////////time game////////////////////////////////

	Clock clock6;
   Time passed_time_game;

   Texture timegametexture0;
   Sprite timegamesprite0;

   Texture timegametexture1;
   Sprite timegamesprite1;

   Texture timegametexture2;
   Sprite timegamesprite2;

   Texture timegametexture3;
   Sprite timegamesprite3;

   Texture timegametexture4;
   Sprite timegamesprite4;

   Texture timegametexture5;
   Sprite timegamesprite5;

   Texture timegametexture6;
   Sprite timegamesprite6;

   Texture timegametexture7;
   Sprite timegamesprite7;

   Texture timegametexture8;
   Sprite timegamesprite8;

   Texture timegametexture9;
   Sprite timegamesprite9;

   Texture timegametexture10;
   Sprite timegamesprite10;

   Texture timegametexture11;
   Sprite timegamesprite11;


   Texture timegametexture12;
   Sprite timegamesprite12;

   Texture timegametexture13;
   Sprite timegamesprite13;

   Texture timegametexture14;
   Sprite timegamesprite14;

   Texture timegametexture15;
   Sprite timegamesprite15;

   Texture timegametexture16;
   Sprite timegamesprite16;

   Texture timegametexture17;
   Sprite timegamesprite17;

   Texture timegametexture18;
   Sprite timegamesprite18;

   bool game_time_done = false;

   Sprite levelupbackgroundsprite, level_up_sprite, level_uphover_sprite;
   Texture levelupbackgroundtexture, level_up_texture, level_uphover_texture;
   Text level_upgoal_text;

   struct price_order
   {
	   Store_Elements storeelement;
	   bool order_food_done = false;
   };

   //////each array for order_price
   price_order price_order_struct;
   price_order price_order1[4];
   price_order price_order2[4];
   price_order price_order3[4];

   Sprite levellosebackgroundsprite, level_lose_sprite, level_losehover_sprite;
   Texture levellosebackgroundtexture, level_lose_texture, level_losehover_texture;
  
   ifstream infile3;
   ofstream outfile3;
   vector<struct_store>update_file_after_game;

   struct level_struct
   {
	   bool done;
	   int levelnumber;
	   long long target;
	   int achievedscore;
   };
   level_struct levelsdata;

   ifstream infile4;
   ofstream outfile4;
   vector<level_struct>update_file2_after_game;

   bool wronge_order = false; //basket
   bool burger_draw = false, bread0_draw = false, cheese_draw = false, bread2_draw = false, cu_draw = false, zaton_draw = false, tomatom_draw = false, lettuce_draw = false, felfel_draw = false;
   bool fra5_draw = false,salmon_draw=false,meat_draw=false;
   Texture basket_texture;
   Sprite basket_sprite;

   int current_order = 1;

   Texture  fra5_texture;
   Sprite fra5_sprite;

   Texture  meat_texture;
   Sprite meat_sprite;

 

   ////////////////////////////


   int money_level;
   Sprite component3spritepop;
   Sprite component3spritepop2;
   bool lettuce2 = false;

   Sprite component2spritepop;
   Sprite component2_1spritepop;
   Sprite component2spritepop2;
   Sprite component2_1spritepop2;
   

   Sprite component1spritepop;
   Sprite component1_1spritepop;
   Sprite component5spritepop;
   Sprite component5_1spritepop;
   Sprite component9spritepop;
   Sprite component9_1spritepop;

   Texture salmon_texture;
   Sprite  salmon_sprite;
   stack<int>stack_id;
   int next_level_score;
   int level_score_before_add=0;

   ///////////////////////////////////
   Texture  true_order;
   Sprite true_order1_first;
   Sprite true_order1_second;
   Sprite true_order2_first;
   Sprite true_order2_second;
   Sprite true_order3_first;
   Sprite true_order3_second;

public:
	level();
	void before_level(RenderWindow& win);
	void level_game(RenderWindow &win);
	void leftOrderTime(RenderWindow& window);
	void middleOrderTime(RenderWindow& window);
	void rightOrderTime(RenderWindow& window);
	void leftorderposition(RenderWindow& window, int food1ID, int food2ID, int food3ID, int food4ID);
	void middleorderposition(RenderWindow& window, int food1ID, int food2ID, int food3ID, int food4ID);
	void rightorderposition(RenderWindow& window, int food1ID, int food2ID, int food3ID, int food4ID);
	void time_game(RenderWindow& win);
	void level_up(RenderWindow& win);

};

