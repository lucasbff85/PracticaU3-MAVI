#include <SFML/Window.hpp>
#include <SFML/graphics.hpp>
using namespace sf;

Texture texture_wsquare;
Texture texture_bsquare;

Sprite sprite_wsquare;
Sprite sprite_bsquare;

const int size = 100;

int main() {
	texture_wsquare.loadFromFile("../Assets/chessw.png");
	texture_bsquare.loadFromFile("../Assets/chessb.png");

	sprite_wsquare.setTexture(texture_wsquare);
	sprite_bsquare.setTexture(texture_bsquare);


	sf::RenderWindow App(sf::VideoMode(800, 800, 32), "Ajedrez");

	while (App.isOpen()) {
		App.clear();

		// Dibujar el tablero
		for (int row = 0; row < 8; row++) {
			for (int col = 0; col < 8; col++) {
				// Alternar entre blanco y negro
				if ((row + col) % 2 == 0) {
					sprite_wsquare.setPosition(col * size, row * size );
					App.draw(sprite_wsquare);  // Dibujar casilla blanca
				}
				else {
					sprite_bsquare.setPosition(col * size, row * size);
					App.draw(sprite_bsquare);  // Dibujar casilla negra
				}
			}
		}


		App.display();
	}
	return 0;
}