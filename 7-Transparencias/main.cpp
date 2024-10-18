#include <SFML/Window.hpp>
#include <SFML/graphics.hpp>
using namespace sf;

Texture texture_rcircle;
Sprite sprite_rcircle1;
Sprite sprite_rcircle2;
Sprite sprite_rcircle3;
Sprite sprite_rcircle4;
Texture texture_bcircle;
Sprite sprite_bcircle;

float escalaX, escalaY, height_rcircle, width_rcircle, height_bcircle, width_bcircle;

int main() {
	texture_rcircle.loadFromFile("../Assets/rcircle.png");
	sprite_rcircle1.setTexture(texture_rcircle);
	sprite_rcircle2.setTexture(texture_rcircle);
	sprite_rcircle3.setTexture(texture_rcircle);
	sprite_rcircle4.setTexture(texture_rcircle);

	texture_bcircle.loadFromFile("../Assets/bcircle.png");
	sprite_bcircle.setTexture(texture_bcircle);

	sprite_rcircle2.setPosition(730, 0);
	sprite_rcircle3.setPosition(0, 530);
	sprite_rcircle4.setPosition(730, 530);

	//achico un poco los circulos para que quede mejor
	sprite_rcircle1.setScale(0.5f, 0.5f);
	sprite_rcircle2.setScale(0.5f, 0.5f);
	sprite_rcircle3.setScale(0.5f, 0.5f);
	sprite_rcircle4.setScale(0.5f, 0.5f);

	height_bcircle = (float)texture_bcircle.getSize().y;
	height_rcircle = (float)texture_rcircle.getSize().y;
	width_bcircle = (float)texture_bcircle.getSize().x;
	width_rcircle = (float)texture_rcircle.getSize().x;
	escalaY = height_rcircle / height_bcircle;
	escalaX = width_rcircle / width_bcircle;

	// Establecer el origen del sprite en su centro
	sprite_bcircle.setOrigin(sprite_bcircle.getGlobalBounds().width / 2,
		sprite_bcircle.getGlobalBounds().height / 2);

	//aplico la escala, y recordar que tambien multiplico por 0.5f para que quede mejor
	sprite_bcircle.setScale(escalaX*0.5f, escalaY*0.5f);

	
	sprite_bcircle.setPosition(400, 300);


	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Transparencias");

	while (App.isOpen()) {
		App.clear();

		App.draw(sprite_rcircle1);
		App.draw(sprite_rcircle2);
		App.draw(sprite_rcircle3);
		App.draw(sprite_rcircle4);
		App.draw(sprite_bcircle);

		App.display();
	}
	return 0;
}