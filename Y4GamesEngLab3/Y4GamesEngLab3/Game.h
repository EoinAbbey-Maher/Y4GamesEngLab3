#ifndef GAME_HPP
#define GAME_HPP
	
#include <SDL.h>
#include <stdio.h>
#include <iostream>
#include <SDL_image.h>
#include "Player.h"

class Game
{
public:
	Game();
	~Game();

	void init(const char* t_title, int t_xpos, int t_ypos, int t_width, int t_height, bool t_isFullScreen);

	void processEvents();

	void update();

	void render();
	void cleanup();

	bool m_isRunning{ false };
private:
	int m_count = 0;

	SDL_Window * m_window;
	SDL_Renderer * m_renderer;

	Player m_player;

};

#endif // !GAME_HPP

