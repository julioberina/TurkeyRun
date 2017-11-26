#ifndef GAME_H
#define GAME_H
#include <random>
#include <iostream>
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
  std::random_device rd;
  std::uniform_int_distribution<int> distribution;
  std::knuth_b generator;

  void drawGameObjectsTo(RenderWindow& window);
  void dropRandomItem();
 public:
  Game();
  void play(); // game loop
};

#endif
