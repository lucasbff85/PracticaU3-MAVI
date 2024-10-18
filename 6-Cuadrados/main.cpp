#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;

Texture texture_red;
Texture texture_yellow;
Texture texture_blue;
Texture texture_black;
Texture texture_fondo;


Sprite sprite_red;
Sprite sprite_yellow;
Sprite sprite_blue;
Sprite sprite_black;
Sprite sprite_fondo;


float height_blue, height_red, height_yellow, width_blue,
width_red, width_yellow, escalaX, escalaY, height_fondo, width_fondo, 
escalaXFondo, escalaYFondo;


int main() {

    //Preparamos el fondo blanco.

    texture_fondo.loadFromFile("../Assets/chessw.png");
    sprite_fondo.setTexture(texture_fondo);

    height_fondo = (float)texture_fondo.getSize().y;
    width_fondo = (float)texture_fondo.getSize().x;

    escalaXFondo = 800 / width_fondo;
    escalaYFondo = 600 / height_fondo;

    sprite_fondo.setScale(escalaXFondo, escalaYFondo);


    //Cargamos las texturas.

    texture_red.loadFromFile("../Assets/cuad_red.png");
    texture_yellow.loadFromFile("../Assets/cuad_yellow.png");
    texture_blue.loadFromFile("../Assets/cuad_blue.png");
    texture_black.loadFromFile("../Assets/chessb.png");

    sprite_red.setTexture(texture_red);
    sprite_yellow.setTexture(texture_yellow);
    sprite_blue.setTexture(texture_blue);
    sprite_black.setTexture(texture_black);

    //Usamos el tamaño del cuadrado rojo como patrón, adaptamos el amarillo.

    height_red = (float)texture_red.getSize().y*0.5;
    height_yellow = (float)texture_yellow.getSize().y;
    width_red = (float)texture_red.getSize().x*0.5;
    width_yellow = (float)texture_yellow.getSize().x;
    escalaY = height_red / height_yellow;
    escalaX = width_red / width_yellow;
    sprite_yellow.setScale(escalaX, escalaY);

    //Ahora adaptamos el tamaño de los más pequeños (azul y negro tienen el mismo tamaño).

    height_blue = (float)texture_blue.getSize().y;
    width_blue = (float)texture_blue.getSize().x;
    escalaY = height_red / height_blue;
    escalaX = width_red / width_blue;

    sprite_blue.setScale(escalaX, escalaY);
    sprite_black.setScale(escalaX, escalaY);



    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Cuadrados");


    while (App.isOpen()) {


        App.clear();


        sprite_red.setPosition(250, 200);
        sprite_yellow.setPosition(250 + width_red, 200);
        sprite_blue.setPosition(250, 200 + height_red);
        sprite_black.setPosition(250 + width_red, 200 + height_red);

        App.draw(sprite_fondo);

        App.draw(sprite_red);
        App.draw(sprite_yellow);
        App.draw(sprite_blue);
        App.draw(sprite_black);




        App.display();
    }

    return 0;
}
