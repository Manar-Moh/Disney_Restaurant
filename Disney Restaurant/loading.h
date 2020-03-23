#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
#include"Menu.h"
#include"map_levels.h"
#include"store.h"
#include "SFML/Audio.hpp"
extern int win_active;
extern bool loading_back;
using namespace std;
using namespace sf;

class loading
{
	Texture loadingbackground,loading0,loading1,loading2,loading3,loading4;
	Sprite loading_background_sprite, loading0_sprite, loading1_sprite, loading2_sprite,
		loading3_sprite, loading4_sprite;
	Clock clock1;
	Time second;
	Time passedTime;
public:
	loading();
	void loading_display(RenderWindow& win);
};

