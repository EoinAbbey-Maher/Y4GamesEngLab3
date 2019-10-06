#ifndef PLAYER_H
#define PLAYER_H

#include "PlayerFSM.h"
#include "AnimatedSprite.h"

class Player
{
private:
	PlayerFSM m_state;
	AnimatedSprite m_animatedSprite;
	

public:
	Player(SDL_Renderer &t_renderer);
	Player(const AnimatedSprite& t_s, SDL_Renderer& t_renderer);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(); ///Add the Input here when finished with that class
	void update();	

	SDL_Renderer& m_renderer;
};

#endif // !PLAYER_H

