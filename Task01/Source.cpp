#include <SFML/Graphics.hpp>
#include"Cvijet.h"
int main()
{
    sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "SFML works!");
    window.setFramerateLimit(60);
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    Cvijet cvijet(&window);
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        cvijet.draw();
        window.display();
    }
}
