#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::init(const char* t_title, int t_xpos, int t_ypos, int t_width, int t_height, bool t_isFullScreen)
{

	int flags = 0;
	if (t_isFullScreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		std::cout << "SDL Initialised " << std::endl;

		m_window = SDL_CreateWindow(t_title, t_xpos, t_ypos, t_width, t_height, flags);

		if (m_window)
		{
			std::cout << "window created" << std::endl;
		}

		m_renderer = SDL_CreateRenderer(m_window, -1, 0);
		if (m_renderer)
		{
			SDL_SetRenderDrawColor(m_renderer, 255, 255, 255, 255);
			m_isRunning = true;
		}
		else
		{
			m_isRunning = false;
		}
	}
}

void Game::processEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);

	switch (event.type)
	{
	case SDL_QUIT:
		m_isRunning = false;
		break;
	default:
		break;
	}
}

void Game::update()
{
	m_count++;
	std::cout << m_count << std::endl;
}

void Game::render()
{
	SDL_RenderClear(m_renderer);
	SDL_RenderPresent(m_renderer);


}

void Game::cleanup()
{
	SDL_DestroyWindow(m_window);
	SDL_DestroyRenderer(m_renderer);
	SDL_Quit();
	std::cout << "Game Cleaned" << std::endl;
}
