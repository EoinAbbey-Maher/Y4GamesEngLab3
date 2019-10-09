#ifndef PLAYER_H
#define PLAYER_H

#include "PlayerFSM.h"
#include "AnimatedSprite.h"
#include "InputHandler.h"

class Player
{
private:
	PlayerFSM m_state;
	AnimatedSprite m_animatedSprite;
	
	InputHandler inputHandler;

public:
	Player(SDL_Renderer &t_renderer);
	Player(const AnimatedSprite& t_s, SDL_Renderer& t_renderer);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(SDL_Event& t_event); ///Add the Input here when finished with that class
	void update();	
	void render();
	void setRenderer(SDL_Renderer& t_render);


	SDL_Renderer* m_renderer;
};

#endif // !PLAYER_H

