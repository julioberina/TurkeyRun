#ifndef GAME_POINTS_H
#define GAME_POINTS_H
#include <SFML/Graphics.hpp>
#include <string>
using namespace sf;

class GamePoints
{
 private:
  int totalPoints;
  int missedPoints;

  Text totalText;
  Text missedText;
  Font font;

  void setTextAttributes();
 public:
  GamePoints();
  void drawTo(RenderWindow& window);
  void setFont(const Font& font);
};

#endif
