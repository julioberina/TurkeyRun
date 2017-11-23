#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
using namespace sf;
#include "basket.h"

class Game
{
 private:
  RenderWindow window;
  Basket basket;
  Font font; // Amber font for Text objects;
  Text totalText; // Text object for totalPoints
  Text missedText; // Text object for missedPoints
  int totalPoints;
  int missedPoints;

  void drawGameObjectsTo(RenderWindow& window);
 public:
  Game();
  void play(); // game loop
};

#endif
