#include "loading.h"
loading::loading()
{
	loadingbackground.loadFromFile("background.jpg");
	loading_background_sprite.setTexture(loadingbackground);

	loading0.loadFromFile("loading0.png");
	loading0_sprite.setTexture(loading0);
	loading0_sprite.setPosition(278, 600);
	loading0_sprite.setScale(1.83, 1.83);

	loading1.loadFromFile("loading1.png");
	loading1_sprite.setTexture(loading1);
	loading1_sprite.setPosition(278, 600);
	loading1_sprite.setScale(1.83, 1.83);

	loading2.loadFromFile("loading2.png");
	loading2_sprite.setTexture(loading2);
	loading2_sprite.setPosition(278, 600);
	loading2_sprite.setScale(1.83, 1.83);

	loading3.loadFromFile("loading3.png");
	loading3_sprite.setTexture(loading3);
	loading3_sprite.setPosition(278, 600);
	loading3_sprite.setScale(1.83, 1.83);

	loading4.loadFromFile("loading4.png");
	loading4_sprite.setTexture(loading4);
	loading4_sprite.setPosition(278, 600);
	loading4_sprite.setScale(1.83, 1.83);
	 second = seconds(0.01f);
	 
	
}
void loading::loading_display(RenderWindow& win)
{
	
	passedTime += clock1.getElapsedTime();
	if (passedTime <= sf::seconds(1000)) 
	{
		win.draw(loading_background_sprite);
		win.draw(loading0_sprite);
	}	
	else if (passedTime <= sf::seconds(2000))
	{
		win.draw(loading_background_sprite);
		win.draw(loading1_sprite);
	}
	else if (passedTime <= sf::seconds(3000))
	{
		win.draw(loading_background_sprite);
		win.draw(loading2_sprite);
	}	
	else if (passedTime <= sf::seconds(4000)) 
	{
		win.draw(loading_background_sprite);
		win.draw(loading3_sprite);
	}
	else if (passedTime <= sf::seconds(5000)) 
	{
		win.draw(loading_background_sprite);
		win.draw(loading4_sprite);
	}
	else
	{
		passedTime = clock1.restart();

		if (loading_back == false) 
		{
			win_active = 4;
		}	
		else 
		{
			win_active = 1;
		}
			
	}
	
} 