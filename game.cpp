#include "game.h"
#include <SFML/Graphics.hpp>
using namespace sf;

// private method implementations

void Game::drawGameObjectsTo(RenderWindow& window)
{
  basket.drawTo(window);
  points.drawTo(window);
}

// public method implementations

Game::Game() : window(VideoMode(800, 600), "Turkey Run"),
	       basket(),
	       font(),
	       points()
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

      window.clear();
      drawGameObjectsTo(window);
      window.display();
    }
}
