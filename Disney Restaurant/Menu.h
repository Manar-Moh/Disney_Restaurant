#pragma once
#include <SFML/Graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;
#include "SFML/Audio.hpp"

extern int win_active;

class Menu
{

	Sprite  background_sprite,sound_sprite,back_sprite,back_without_hover_sprite,menu_icon_sprite;
	Texture menu_background,sound_pic,back_hover,back_pic,menu_icon;

	Font menu_font;
	Text play_text, settings_text, exit_text,play_music_text,stop_music_text;

	bool settings_is_activated;
	bool play_sound_active;
	bool stop_sound_active;
	bool hover_on_back;
	bool menu_icon_active;

	SoundBuffer sound_click_buf;
	Sound sound_click;
public:

	Menu();
	void menu_items(RenderWindow& win, Music& music);
};

