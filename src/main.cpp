#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <iostream>

int main() {
  sf::RenderWindow window(sf::VideoMode(800, 600), "My SFML Game");

  // Create a circle
  sf::CircleShape circle(50.f);          // radius = 50 pixels
  circle.setFillColor(sf::Color::White); // set fill color
  circle.setPosition(375.f, 275.f);      // center it roughly on the screen
  circle.setScale(2, 2);

  // Import a texture
  sf::Texture profilePic;
  if (!profilePic.loadFromFile("assets/images/display-pic.png")) {
    std::cout << "Failed to load texture! \n";
  }

  // set a texture of the circle
  circle.setTexture(&profilePic, true);

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
