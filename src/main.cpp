#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "My SFML Game");

    // Create a circle
    sf::CircleShape circle(50.f); // radius = 50 pixels
    circle.setFillColor(sf::Color::Green); // set fill color
    circle.setPosition(375.f, 275.f); // center it roughly on the screen



    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();

        // draw your stuff
        window.draw(circle);

        window.display();
    }

    return 0;
}
