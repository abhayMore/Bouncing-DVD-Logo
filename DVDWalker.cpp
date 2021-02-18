#include "DVDWalker.h"
#include <iostream>


DVDWalker::DVDWalker()
{
	x = rand()%300;
	y = rand()%300;
	xspeed = 0.3f;
	yspeed = 0.3f;
	if(!texture.loadFromFile("dvd_logo.png"))
		std::cout<<"error loading image";
	
	sprite.setTexture(texture);
	SetColor();
	sprite.setPosition(x,y);
}

void DVDWalker::MoveSprite()
{
	x += xspeed;
	y += yspeed; 
}
void DVDWalker::CheckBoundary(sf::Vector2i WindowCoordinate)
{
	if(x + texture.getSize().x >= WindowCoordinate.x)
	{
		xspeed = -xspeed;
		SetColor();
	}
	if(x <= 0)
	{
		xspeed = -xspeed;
		SetColor();
	}
	if(y + texture.getSize().y >= WindowCoordinate.y)
	{
		yspeed = -yspeed;
		SetColor();
	}
	if(y <= 0)
	{
		yspeed = -yspeed;
		SetColor();
	}
}
void DVDWalker::SetColor()
{
	auto Random = rand()%10;
	sprite.setColor(sf::Color(colorArray[Random]));
}

void DVDWalker::Display()
{
	sprite.setPosition(x,y);
}

sf::Sprite& DVDWalker::Draw()
{
	return sprite;
}

