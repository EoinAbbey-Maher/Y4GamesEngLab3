/// <summary>
/// simple game loop for SFML[2.5.1]
/// 
/// @author Peter Lowe
/// @date May 2019
/// </summary>

#include "Game.h"
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>

using namespace std;

int main(int argc, char** argv)
{

	Game* game = new Game();
	//Game game;
	//game.run();

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Quit();
	
	return 1; // success
}