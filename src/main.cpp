#include <iostream>
#include <array>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>


int main() {
	sf::RenderWindow window(sf::VideoMode(580, 580), "Tic Tac Toe");

	while (window.isOpen()) {

		sf::Event event{};
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			std::array<sf::RectangleShape, 4> rect;
			sf::RectangleShape outer;
			std::array<int, 9> board{0};
			sf::CircleShape circle;
			sf::RectangleShape x_left,x_right;

			circle.setPosition(outer.getPosition().x + 35, outer.getPosition().y + 35);
			circle.setRadius(50.F);
			circle.setOutlineThickness(2);
			circle.setOutlineColor(sf::Color::Black);
			circle.setPointCount(400);

			outer.setPosition(3.F,3.F);
			outer.setSize(sf::Vector2f(480.F, 480.F ));
			outer.setOutlineThickness(2);
			outer.setOutlineColor(sf::Color::Black);

			rect[0].setPosition(163.F, 3.F);
			rect[0].setFillColor(sf::Color::Black);
			rect[0].setSize(sf::Vector2f(2.F,480.F));

			rect[1].setPosition(323.F, 3.F);
			rect[1].setFillColor(sf::Color::Black);
			rect[1].setSize(sf::Vector2f(2.F, 480.F));

			rect[2].setPosition(3.F, 163.F);
			rect[2].setFillColor(sf::Color::Black);
			rect[2].setSize(sf::Vector2f(480.F, 2.F));

			rect[3].setPosition(3.F, 323.F);
			rect[3].setFillColor(sf::Color::Black);
			rect[3].setSize(sf::Vector2f(480.F, 2.F));

			x_left.setPosition(sf::Vector2f(185.F,35.F));
			x_left.setFillColor(sf::Color::Black);
			x_left.setSize(sf::Vector2f(135.F,3.F));
			x_left.rotate(45.F);

			x_right.setPosition(275.F,35.F);
			x_right.setFillColor(sf::Color::Black);
			x_right.setSize(sf::Vector2f(135.F, 3.F));
			x_right.rotate(135.F);

			window.clear(sf::Color::White);

			window.draw(outer);
			window.draw(circle);
			for(const sf::RectangleShape& r : rect) {
				window.draw(r);
			}
			window.draw(x_left);
			window.draw(x_right);

			window.display();
		}
	}
	return 0;
}
