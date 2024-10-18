#include <SFML/Window.hpp>
#include <SFML/graphics.hpp>
using namespace sf;


Texture texture_plataforma;
Sprite sprite_plataforma;


float escalaPlataformaX, escalaPLataformaY, height_plataforma, width_plataforma;

int main() {


	texture_plataforma.loadFromFile("../Assets/plataforma.jpg");
	sprite_plataforma.setTexture(texture_plataforma);

	width_plataforma = (float)texture_plataforma.getSize().x;
	height_plataforma = (float)texture_plataforma.getSize().y;


	


	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Plataformas");

	while (App.isOpen()) {
		int inicioX = 30;
		int inicioY = 560;

		escalaPlataformaX = width_plataforma * 0.0006f;
		escalaPLataformaY = height_plataforma * 0.0008f;

		

		App.clear();


		for (int i = 0; i < 8; i++) {
			if (i < 7) {
				sprite_plataforma.setScale(escalaPlataformaX, escalaPLataformaY);
				sprite_plataforma.setPosition(inicioX, inicioY);
				App.draw(sprite_plataforma);
				inicioX += 75;
				escalaPLataformaY += 0.2;
				inicioY -= 50;
				
			}
			else {
				sprite_plataforma.setPosition(inicioX, inicioY+50);
				sprite_plataforma.setScale(escalaPlataformaX*10, escalaPLataformaY/10);
				App.draw(sprite_plataforma);
			}
		}




		App.display();
	}
	return 0;
}