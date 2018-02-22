#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

#define MAX_ITEMS 4

class spaceMarine : public sf::RectangleShape
{
public:
	
	spaceMarine();
	~spaceMarine();

	void setLives(int newLives);
	int getLives();
	
	void setScore(int newScore);
	int getScore();
private:
	int score;
	int lives;
};

class spaceWorm: public sf::RectangleShape
{
public:
	spaceWorm();
	~spaceWorm();

	void setSpeed(float newSpeed);
	float getSpeed();

private:
	float speed;
};

class Menu
{
public:
	Menu(float width, float heigth);
	~Menu();

	void draw(sf::RenderWindow &window);
	void moveUp();
	void moveDown();
	int pressed() { return selection; }

private:
	int selection;
	sf::Font font;
	sf::Text text[MAX_ITEMS];

};

//class Rules
//{
//public:
//	Rules(float width, float height);
//	~Rules();
//
//	void drawRules(sf::RenderWindow &window);
//	void backToMenu();
//private:
//	sf::Font message;
//
//};