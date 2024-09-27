// Engine.h v6

#pragma once

#ifndef ENGINE_H
#define ENGINE_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#define SCREEN_WIDTH 960
#define SCREN_HEIGHT 640

class Engine{
    Engine(){}
    bool m_IsRunning;
    
    SDL_Window* m_Window;
    SDL_Renderer* m_Renderer;
    static Engine* s_Instance;
    
public:
    static Engine* GetInstance(){
        return s_Instance =
        (s_Instance != nullptr)?
        s_Instance : new Engine();
    }
    
    bool Init();
    void Clean();
    void Quit();
    
    void Update();
    void Render();
    void Events();
    
    inline bool IsRunning()
        {return m_IsRunning;}
    inline SDL_Renderer* GetRenderer()
        {return m_Renderer;}
};

#endif // ENGINE_H