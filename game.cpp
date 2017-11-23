#include "game.h"
#include <SFML/Graphics.hpp>
using namespace sf;

// private method implementations

void Game::drawGameObjectsTo(RenderWindow& window)
{
  basket.drawTo(window);
  window.draw(totalText);
  window.draw(missedText);
}

// public method implementations

Game::Game() : window(VideoMode(800, 600), "Turkey Run"),
	       basket(),
	       totalText(),
	       missedText(),
	       font()
{
  font.loadFromFile("assets/fonts/amble.ttf");
  totalPoints = 0;
  missedPoints = 0;

  totalText.setFont(font);
  totalText.setString("Total: " + std::to_string(totalPoints));
  totalText.setFillColor(Color::Red);
  totalText.setPosition(600.f, 1.f);

  missedText.setFont(font);
  missedText.setString("Missed: " + std::to_string(missedPoints));
  missedText.setFillColor(Color::Red);
  missedText.setPosition(600.f, 31.f);
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
