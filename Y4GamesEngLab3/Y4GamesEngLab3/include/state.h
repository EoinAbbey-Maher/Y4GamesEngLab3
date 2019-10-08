#ifndef STATE_H
#define STATE_H

#include "PlayerFSM.h"

class PlayerFSM;

class State
{
public:
	virtual void handleInput() {};
	virtual void update() {};
	virtual void idle(PlayerFSM* t_a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(PlayerFSM* t_a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(PlayerFSM* t_a)
	{
		DEBUG_MSG("State::Climbing");
	}
};

#endif // !STATE_H
