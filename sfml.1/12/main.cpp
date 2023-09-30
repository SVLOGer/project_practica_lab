#include <SFML/Graphics.hpp>
#include <SFML/system.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({400, 180}), "title");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({100, 20});
    shape1.setPosition({10, 10});
    shape1.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({20, 120});
    shape2.setPosition({50, 30});
    shape2.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({100, 20});
    shape3.setPosition({10, 140});
    shape3.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({20, 150});
    shape4.setPosition({130, 10});
    shape4.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({20, 60});
    shape5.setRotation(-50);
    shape5.setPosition({135, 25});
    shape5.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({20, 60});
    shape6.setRotation(50);
    shape6.setPosition({215, 10});
    shape6.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({20, 150});
    shape7.setPosition({215, 10});
    shape7.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({20, 150});
    shape8.setRotation(20);
    shape8.setPosition({305, 10});
    shape8.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({20, 150});
    shape9.setRotation(-20);
    shape9.setPosition({305, 15});
    shape9.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({60, 20});
    shape10.setPosition({285, 80});
    shape10.setFillColor(sf::Color(66, 66, 59));
    window.draw(shape10);

    window.display();

    sf::sleep(sf::seconds(5));
}