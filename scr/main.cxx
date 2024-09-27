// madsycode sdl engine v8

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "Core/Engine.h"
#include "Core/Engine.cxx"

int main(int argc, char *argv[])
{
	Engine::GetInstance()->Init();
	
	while(Engine::GetInstance()->IsRunning()){
	    Engine::GetInstance()->Events();
	    Engine::GetInstance()->Update();
	    Engine::GetInstance()->Render();
	}
	
	Engine::GetInstance()->Clean();
	return 0;
}

// 9:06