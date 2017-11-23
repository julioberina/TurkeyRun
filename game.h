#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Game
{
 private:
  RenderWindow window;
 public:
  Game();
  void play(); // game loop
};

#endif
