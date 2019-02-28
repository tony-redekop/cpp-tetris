#include "game_object.hpp"

namespace cpp_tetris {

GameObject::GameObject(Texture2D& sprite) 
  : position_{0, 0}, size_{100, 100}, velocity_{0.0f}, color_{1.0f},
    rotation_{0.0f}, sprite_{sprite}, isPlaced_{false}, isDestroyed_{false} { } 
    
GameObject::GameObject(glm::vec2 pos, glm::vec2 size, Texture2D& sprite,
                       glm::vec3 color, glm::vec2 velocity)
  : position_{pos}, size_{size}, color_{color}, rotation_{0.0f}, 
    sprite_{sprite}, isPlaced_{false}, isDestroyed_{false} { } 

void GameObject::move() {
  ++position_.y;  
}

void GameObject::draw(SpriteRenderer& renderer) {
  renderer.drawSprite(this->sprite_, this->position_, this->size_,
    this->rotation_, this->color_);
}

}  // namespace cpp_tetris
