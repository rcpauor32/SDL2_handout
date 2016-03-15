#ifndef __GLOBALS_H__
#define __GLOBALS_H__

#include <windows.h>
#include <stdio.h>

#define LOG(txt) OutputDebugString(txt)

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#define SET_FULLSCREEN(h, w) SDL_CreateWindow("A Plain Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, h, w, SDL_WINDOW_FULLSCREEN);
#define SET_RESIZABLE(h, w) SDL_CreateWindow("A Plain Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, h, w, SDL_WINDOW_RESIZABLE);
#define SET_SHOWN(h, w) SDL_CreateWindow("A Plain Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, h, w, SDL_WINDOW_SHOWN);
#define SET_HIDDEN(h, w) SDL_CreateWindow("A Plain Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, h, w, SDL_WINDOW_HIDDEN);
#define SET_OPENGL(h, w) SDL_CreateWindow("A Plain Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, h, w, SDL_WINDOW_OPENGL);

enum update_status
{
	UPDATE_CONTINUE = 1,
	UPDATE_STOP,
	UPDATE_ERROR
};

// Configuration -----------
#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 768
#define FULLSCREEN 0

#endif // __GLOBALS_H__
