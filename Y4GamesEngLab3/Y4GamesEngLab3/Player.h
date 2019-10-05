#ifndef PLAYER_H
#define PLAYER_H

#include "PlayerFSM.h"
#include "AnimatedSprite.h"

class Player
{
private:
	PlayerFSM m_state;
	AnimatedSprite m_animatedSprite;
	Player();

public:
	Player(const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(); ///Add the Input here when finished with that class
	void update();	

};

#endif // !PLAYER_H

