#include "game.h"
#include <SFML/Graphics.hpp>
using namespace sf;

// private method implementations

void Game::drawGameObjectsTo(RenderWindow& window)
{
  basket.drawTo(window);
}

// public method implementations

Game::Game() : window(VideoMode(800, 600), "Turkey Run"),
	       basket()
{
  
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
	}

      window.clear();
      drawGameObjectsTo(window);
      window.display();
    }
}
