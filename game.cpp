#include "game.h"
#include <SFML/Graphics.hpp>

Game::Game() : window(VideoMode(800, 600), "Turkey Run")
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
      window.display();
    }
}
