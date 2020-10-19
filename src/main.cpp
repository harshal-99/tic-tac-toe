//#include <iostream>
#include <array>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


int main() {
	sf::RenderWindow window(sf::VideoMode(480, 480), "Tic Tac Toe");

	while (window.isOpen()) {

		sf::Event event{};
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			std::array<sf::RectangleShape, 4> rect;
			std::array<char, 9> board {'-','-','-','-','-','-','-','-','-'};

			rect[0].setPosition(160.F, 0.F);
			rect[0].setFillColor(sf::Color::Black);
			rect[0].setSize(sf::Vector2f(2.F,480.F));

			rect[1].setPosition(320.F, 0.F);
			rect[1].setFillColor(sf::Color::Black);
			rect[1].setSize(sf::Vector2f(2.F, 480.F));

			rect[2].setPosition(0.F, 160.F);
			rect[2].setFillColor(sf::Color::Black);
			rect[2].setSize(sf::Vector2f(480.F, 2.F));

			rect[3].setPosition(0.F, 320.F);
			rect[3].setFillColor(sf::Color::Black);
			rect[3].setSize(sf::Vector2f(480.F, 2.F));

			window.clear(sf::Color::White);

			for(const sf::RectangleShape& r : rect) {
				window.draw(r);
			}

			window.display();
		}
	}
	return 0;
}
