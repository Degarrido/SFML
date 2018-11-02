#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
	sf::RectangleShape player(sf::Vector2f(120.f,50.f));
	sf::CircleShape ball(20.f);
	ball.setFillColor(sf::Color::Green);
	player.setFillColor(sf::Color::Blue);
	player.setSize(sf::Vector2f(30.f, 150.f));
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
		window.clear();
		window.draw(player);
		window.draw(ball);
		window.display();
	}

	return 0;
}