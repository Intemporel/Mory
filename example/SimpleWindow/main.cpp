#include <SFML/Graphics.hpp>
#include "Mory/UserInterface.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode({1200, 800}), "SimpleWindow");
    window.setFramerateLimit(60);

    Mory::UserInterface::Print();

    while (window.isOpen())
    {
        while (const std::optional<sf::Event> event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.display();
    }
}