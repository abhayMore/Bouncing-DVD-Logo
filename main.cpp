#include "SFML/Graphics.hpp"

#include <iostream>
#include <math.h>
#include <ctime>
#include "DVDWalker.h"

int main()
{	
	srand(time(0));	
	sf::RenderWindow window(sf::VideoMode(800,600), "DVD");
	//window.setFramerateLimit(60);
	
	DVDWalker DvD;

	while(window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window.close();
		}
		DvD.MoveSprite();
		DvD.CheckBoundary(sf::Vector2i(window.getSize().x,window.getSize().y));
		DvD.Display();

		window.clear();
		
		window.draw(DvD.Draw());

		window.display();
	}
	return 0;
}
