#include <SFML/Graphics.hpp>
#include <cmath>

void initArrow(sf::ConvexShape &arrow)
{
    arrow.setPosition({400, 300});

    arrow.setPointCount(7);
    arrow.setPoint(0, {-60, -30});
    arrow.setPoint(1, {0, -30});
    arrow.setPoint(2, {0, -60});
    arrow.setPoint(3, {47, 0});
    arrow.setPoint(4, {0, 60});
    arrow.setPoint(5, {0, 30});
    arrow.setPoint(6, {-60, 30});

    arrow.setFillColor(sf::Color::Yellow);
    arrow.setOutlineColor(sf::Color::Black);
    arrow.setOutlineThickness(3);
}

void redrawFrame(sf::RenderWindow &window, sf::ConvexShape &arrow)
{
    window.clear(sf::Color::White);
    window.draw(arrow);
    window.display();
}

int main()
{
    constexpr unsigned WINDOW_WIDTH = 800;
    constexpr unsigned WINDOW_HEIGHT = 600;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(
        sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}),
        "Arrow follows mouse", sf::Style::Default, settings);

    sf::ConvexShape arrow;

    initArrow(arrow);
    while (window.isOpen())
    {
        redrawFrame(window, arrow);
    }
}
