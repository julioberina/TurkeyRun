#ifndef BASKET_H
#define BASKET_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Basket
{
 private:
  Texture texture;
  Sprite sprite;
 public:
  Basket();
  void drawTo(RenderWindow& window);
  void followMouse(int mouseX);
};

#endif
