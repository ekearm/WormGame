#include "Header.h"
spaceWorm::spaceWorm() : RectangleShape(sf::Vector2f(20, 50))
{
	speed = .005;
}
spaceWorm::~spaceWorm()
{

}

void spaceWorm::setSpeed(float newSpeed)
{
	speed = newSpeed;
}
float spaceWorm::getSpeed()
{
	return speed;
}