#include "Header.h"

int main()
{
	

	sf::RenderWindow window(sf::VideoMode(800, 800), "Not Halo");

	Menu menu(window.getSize().x, window.getSize().y);
	//Rules rule(window.getSize().x, window.getSize().y);

	sf::Texture backGround;
	if (!backGround.loadFromFile("PA9ish.jpg"))
		return EXIT_FAILURE;
	sf::Sprite sprite(backGround);
	sprite.setScale(1, 1.5);

	spaceMarine Jenkins;
	//spaceWorm T1;
	Jenkins.setFillColor(sf::Color::Green);
	//T1.setFillColor(sf::Color::Magenta);

	sf::Music music;
	if (!music.openFromFile("PA9Jam.wav"))
		return EXIT_FAILURE;
	music.play();

	while (window.isOpen())
	{
		//Main Menu

		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::KeyReleased:
				switch (event.key.code)
				{
				case sf::Keyboard::Up:
					menu.moveUp();
					break;

				case sf::Keyboard::Down:
					menu.moveDown();
					break;
					
				case sf::Keyboard::Return:
					switch (menu.pressed())
					{
					case 0:
						std::cout << "Your now Playing" << std::endl;
						break;
					case 1:

						/*std::cout << "Rule 1 : Avoid the worms!"<< std::endl;
						std::cout << "Rule 2 : Avoid the worms!" << std::endl;
						std::cout << "Rule 3 : Move with" << std::endl << "[up] or [w] to go up" << std::endl
							<< "[<-] or [a] for left" << std::endl << "[->] or [d] for right" << std::endl << "[down] or [s] for down" << std::endl;
						std::cout << "Hint 1: Hold left [shift] for double speed" << std::endl;
						std::cout << "Hint 2: Hold [shift] an arrow key and corrisponding [w],[a],[s],[d] key for even greater speed" << std::endl;
						std::cout << "i.e [shift] + [w] + [up] gives greater speed" << std::endl; */
						break;
					case 2:
						std::cout << "Highscores" << std::endl;
						break;
					case 3:
						window.close();
						break;
					}
					break;
				}
				break;
			case sf::Event::Closed:
			window.close();
			}
		}

		window.clear();

		
		menu.draw(window);
		//window.draw(sprite);
		//window.draw(Jenkins);
		//window.draw(T1);
		window.display();
	}

	return 0;
}