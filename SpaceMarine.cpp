#include "Header.h"

spaceMarine :: spaceMarine() :RectangleShape (sf::Vector2f(10,10))
{
	lives = 3; 
	score = 0;
}
spaceMarine::~spaceMarine()
{

}

void spaceMarine::setLives(int newLives)
{
	lives = newLives;
}
int spaceMarine::getLives()
{
	return lives;
}

void spaceMarine::setScore(int newScore)
{
	score = newScore;
}
int spaceMarine::getScore()
{
	return score;
}