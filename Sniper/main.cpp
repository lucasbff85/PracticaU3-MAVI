#include <SFML/Window.hpp>
#include <SFML/graphics.hpp>
using namespace sf;

Texture texture_rcircle;
Sprite sprite_rcircle1;
Sprite sprite_rcircle2;
Sprite sprite_rcircle3;
Sprite sprite_rcircle4;

int main() {
	texture_rcircle.loadFromFile("../Assets/rcircle.png");
	sprite_rcircle1.setTexture(texture_rcircle);
	sprite_rcircle2.setTexture(texture_rcircle);
	sprite_rcircle3.setTexture(texture_rcircle);
	sprite_rcircle4.setTexture(texture_rcircle);

	sprite_rcircle2.setPosition(730, 0);
	sprite_rcircle3.setPosition(0, 530);
	sprite_rcircle4.setPosition(730,530);

	sprite_rcircle1.setScale(0.5f, 0.5f);
	sprite_rcircle2.setScale(0.5f, 0.5f);
	sprite_rcircle3.setScale(0.5f, 0.5f);
	sprite_rcircle4.setScale(0.5f, 0.5f);

	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Sniper^4");

	while (App.isOpen()) {
		App.clear();
		App.draw(sprite_rcircle1);
		App.draw(sprite_rcircle2);
		App.draw(sprite_rcircle3);
		App.draw(sprite_rcircle4);
		App.display();
	}
	return 0;
}