// Animation.cxx

#include "Animation.h"
#include "TextureManager.h"

void Animation::Update(){
    m_SpriteFrame = (SDL_GetTicks()/m_AnimSpeed) % m_FrameCount;
}

void Animation::Draw(float x, float y, int spritWidth, int spriteHeight){
    // 9:06
}

void Animation::SetProps(std::string textureID, int spritRow, int frameCount, int animSpeed, SDL_RendererFlip flip = SDL_FLIP_NONE){
    
}

