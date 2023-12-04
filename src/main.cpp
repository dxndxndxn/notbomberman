// Things to fix.
// CMakeLists.txt, make the paths not depenedent on my directory.

#include <SFML/Graphics.hpp>

const int numberOfRows = 20;
const int numberOfColumns = 10;
const float sizeOfCellInPixelsX = 64.f;
const float sizeOfCellInPixelsY = 64.f;

int main()
{
    // VideoMode = width, height
    // width = rows
    // height = columns
    // sf::RenderWindow window(sf::VideoMode(numberOfRows * sizeOfCellInPixelsX, numberOfColumns * sizeOfCellInPixelsY), "notbomberman");
    sf::RenderWindow window(sf::VideoMode(1280, 640), "notbomberman");

    // While the window is open.
    while (window.isOpen())
    {
        // Poll events.
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close the window.
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        // Clear the window.
        window.clear();

        // Draw grid.
        // From 0 to the number of rows.
        for (int i = 0; i < numberOfRows; ++i)
        {
            // From 0 to number of columns.
            for (int j = 0; j < numberOfColumns; ++j)
            {
                // Constructs a rectangle shape which we pass a vector which holds 2 pararmeters X which is horizontal, and Y which is vertical.
                sf::RectangleShape cell(sf::Vector2f(sizeOfCellInPixelsX, sizeOfCellInPixelsY));

                // Set characteristics.
                // Set the position of our cell which has 2 parameters X and Y.
                cell.setPosition(i * sizeOfCellInPixelsX, j * sizeOfCellInPixelsY);
                cell.setOutlineColor(sf::Color::Black);
                cell.setOutlineThickness(1.f);

                window.draw(cell);
            }
        }

        window.display();
    }
}
