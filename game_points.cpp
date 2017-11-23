#include "game_points.h"

// private method implementations

void GamePoints::setTextAttributes()
{
  totalText.setString("Total: " + std::to_string(totalPoints));
  totalText.setFillColor(Color::Red);
  totalText.setPosition(600.f, 1.f);

  missedText.setString("Missed: " + std::to_string(missedPoints));
  missedText.setFillColor(Color::Red);
  missedText.setPosition(600.f, 39.f);  
}

// public method implementations

GamePoints::GamePoints() : totalText(),
		   missedText(),
		   font()
{
  totalPoints = 0;
  missedPoints = 0;
}

void GamePoints::drawTo(RenderWindow& window)
{
  window.draw(totalText);
  window.draw(missedText);
}

void GamePoints::setFont(const Font& font)
{
  totalText.setFont(font);
  missedText.setFont(font);
  setTextAttributes();
}
