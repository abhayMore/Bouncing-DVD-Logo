#ifndef DVDWALKER_H
#define DVDWALKER_H

#include "SFML/Graphics.hpp"

class DVDWalker
{
	private:
		float x;
		float y;
		float xspeed, yspeed;
		sf::Color colorArray[10]= {
			sf::Color(0,255,255,200),
			sf::Color(0,0,255,200),
			sf::Color(0,255,0,200),
			sf::Color(255,0,0,200), 	
			sf::Color(255.255,0,200),
			sf::Color(255,0,255,200),
			sf::Color(209, 17, 65, 200),
			sf::Color(243, 119, 53, 200),
			sf::Color(255, 119, 170, 200),
			sf::Color(132, 59, 98, 200)
			};
		sf::Texture texture;
		sf::Sprite sprite;
	public:
		DVDWalker();
		void MoveSprite();
		void CheckBoundary(sf::Vector2i);
		void SetColor();
		void  Display();
		sf::Sprite& Draw();
};


#endif // DVDWALKER_H
