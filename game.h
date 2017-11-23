#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
using namespace sf;
#include "basket.h"
#include "game_points.h"

class Game
{
 private:
  RenderWindow window;
  Basket basket;
  Font font; // Amble ttf font
  GamePoints points;

  void drawGameObjectsTo(RenderWindow& window);
 public:
  Game();
  void play(); // game loop
};

#endif
