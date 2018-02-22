#include "Header.h"

Menu::Menu(float width, float heigth)
{
	if (!font.loadFromFile("DOWNCOME.ttf"))
		EXIT_FAILURE;

	text[0].setFont(font);
	text[0].setColor(sf::Color::Red);
	text[0].setString("Play");
	text[0].setPosition(sf::Vector2f(width / 2, heigth / (MAX_ITEMS + 1) * 1));

	text[1].setFont(font);
	text[1].setColor(sf::Color::White);
	text[1].setString("How to Play");
	text[1].setPosition(sf::Vector2f(width / 2, heigth / (MAX_ITEMS + 1) * 2));

	text[2].setFont(font);
	text[2].setColor(sf::Color::White);
	text[2].setString("High Scores");
	text[2].setPosition(sf::Vector2f(width / 2, heigth / (MAX_ITEMS + 1) * 3));

	text[3].setFont(font);
	text[3].setColor(sf::Color::White);
	text[3].setString("Abandon");
	text[3].setPosition(sf::Vector2f(width / 2, heigth / (MAX_ITEMS + 1) * 4));
	
	selection = 0;
}
Menu::~Menu()
{

}

void Menu::draw(sf::RenderWindow &window)
{
	for (int i = 0; i < MAX_ITEMS; i++)
	{
		window.draw(text[i]);
	}
}

void Menu::moveUp()
{
	if (selection - 1 >= 0)
	{
		text[selection].setColor(sf::Color::White);
		selection--;
		text[selection].setColor(sf::Color::Red);
	}
}
void Menu::moveDown()
{
	if (selection + 1 < MAX_ITEMS)
	{
		text[selection].setColor(sf::Color::White);
		selection++;
		text[selection].setColor(sf::Color::Red);
	}
}