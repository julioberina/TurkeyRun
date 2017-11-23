#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
using namespace sf;
#include "basket.h"

class Game
{
 private:
  RenderWindow window;
  Basket basket;

  void drawGameObjectsTo(RenderWindow& window);
 public:
  Game();
  void play(); // game loop
};

#endif
