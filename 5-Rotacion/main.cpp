#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_plataforma;
Sprite sprite_plataforma;

int main() {
    texture_plataforma.loadFromFile("../Assets/chessw.png");
    sprite_plataforma.setTexture(texture_plataforma);

    // Establecer el origen del sprite en su centro
    sprite_plataforma.setOrigin(sprite_plataforma.getGlobalBounds().width / 2,
        sprite_plataforma.getGlobalBounds().height / 2);


    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Rotación");

    // Establece la posición inicial
    sprite_plataforma.setPosition(400, 300);

    while (App.isOpen()) {
        

        App.clear();

        // Rota el sprite en cada frame
        sprite_plataforma.rotate(0.01); 

        
        App.draw(sprite_plataforma);

        
        App.display();
    }

    return 0;
}
