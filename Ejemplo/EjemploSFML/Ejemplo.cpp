#include <SFML/Graphics.hpp>
#define LIMITEABAJO 600
#define LIMITEARRIBA 1

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	sf::RectangleShape player(sf::Vector2f(120.f,50.f));
	sf::RectangleShape player2(sf::Vector2f(120.f, 50.f));
	sf::CircleShape ball(20.f);
	ball.setFillColor(sf::Color::Green);
	player.setFillColor(sf::Color::Blue);
	player.setSize(sf::Vector2f(30.f, 150.f));
	player2.setSize(sf::Vector2f(30.f, 150.f));
	player2.setFillColor(sf::Color::Red);
	player2.setPosition(770, 550);
	ball.setPosition(250, 250);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) 
		{
			player.move(0.f, -0.2);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			player.move(0.f, 0.2);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			player2.move(0.f, -0.2);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			player2.move(0.f, 0.2);
		}
		
		window.clear();
		window.draw(player);
		window.draw(player2);
		window.draw(ball);
		window.display();
	}

	return 0;
}