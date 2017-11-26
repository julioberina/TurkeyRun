#include "game.h"
#include <SFML/Graphics.hpp>
using namespace sf;

// private method implementations

void Game::drawGameObjectsTo(RenderWindow& window)
{
  basket.drawTo(window);
  points.drawTo(window);
}

void Game::dropRandomItem()
{
  std::cout << distribution(generator) << std::endl;
}

// public method implementations

Game::Game() : window(VideoMode(800, 600), "Turkey Run"),
	       basket(),
	       font(),
	       points(),
	       rd(),
	       distribution(1, 3),
	       generator(rd())
{
  font.loadFromFile("assets/fonts/amble.ttf"); // Font for whole game
  points.setFont(font);
}

void Game::play()
{
  while (window.isOpen())
    {
      Event event;

      while (window.pollEvent(event))
	{
	  if (event.type == Event::Closed)
	    window.close();
	  else if (event.type == Event::MouseMoved)
	    basket.followMouse(event.mouseMove.x);
	}

      // Begin special game events

      dropRandomItem();
      
      // End special game events

      window.clear();
      drawGameObjectsTo(window);
      window.display();
    }
}
