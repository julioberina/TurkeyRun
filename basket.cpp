#include "basket.h"

Basket::Basket() : texture(), sprite()
{
  texture.loadFromFile("assets/img/basket.png");
  sprite.setTexture(texture);
  sprite.setPosition(20.f, 525.f);
}

void Basket::drawTo(RenderWindow& window)
{
  window.draw(sprite);
}

void Basket::followMouse(int mouseX)
{
  if (mouseX >= 10 && mouseX <= (800-115))
    sprite.setPosition(float(mouseX), 525.f);
}
