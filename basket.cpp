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
