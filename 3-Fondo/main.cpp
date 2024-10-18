#include <SFML/Window.hpp>
#include <SFML/graphics.hpp>
using namespace sf;

Texture texture_fondo;
Sprite sprite_fondo;

float escalaX, escalaY, height_fondo, width_fondo;

int main() {
	texture_fondo.loadFromFile("../Assets/fondo.jpg");
	sprite_fondo.setTexture(texture_fondo);

	height_fondo = (float)texture_fondo.getSize().y;
	width_fondo = (float)texture_fondo.getSize().x;

	escalaX = 800 / width_fondo;
	escalaY = 600 / height_fondo;

	sprite_fondo.setScale(escalaX, escalaY);


	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Fondo");

	while (App.isOpen()) {
		App.clear();

		App.draw(sprite_fondo);


		App.display();
	}
	return 0;
}