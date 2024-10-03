// Animation.h

#ifndef ANIMATION_H
#define ANIMATION_H

#include <string>
#include "SDL2/SDL.h"

class Animation{
    int m_SpriteRow, m_SptiteFrame;
    int m_AnimSpeed, m_FrameCount;
    std::String m_TextureID;
    SDL_RendererFlip m_flip;
    
    public:
        Animation(){};
        
        void Update();
        void Draw(float x, float y, int spritWidth, int spriteHeight);
        void SetProps(std::string textureID, int spritRow, int frameCount, int animSpeed, SDL_RendererFlip flip = SDL_FLIP_NONE);
};

#endif // ANIMATION_H