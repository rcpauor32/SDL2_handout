#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"
#include "SDL/include/SDL.h"


// TODO 2: Init the library and check for possible error
// using SDL_GetError()

bool ModuleWindow::Init() {
	if(SDL_Init(SDL_INIT_EVERYTHING) != 0){
		LOG(SDL_GetError());
		return false;
	}

	window = SET_RESIZABLE(640, 480);

	if (!window){
		LOG(SDL_GetError());
		return false;
	}

	surface = SDL_GetWindowSurface(window);

	if (!surface){
		LOG(SDL_GetError());
		return false;
	}

	return true;
}

bool ModuleWindow::CleanUp() {
	
	SDL_Quit();
	return true;
}

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

