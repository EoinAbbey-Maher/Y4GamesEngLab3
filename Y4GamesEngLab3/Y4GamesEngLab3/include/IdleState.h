#ifndef IDLESTATE_H
#define IDLESTATE_H

#include "state.h"

class IdleState : public State
{
public: 
	IdleState() {};
	~IdleState() {};

	void handleInput();
	void update();

	void jumping(PlayerFSM* t_a);
	void climbing(PlayerFSM* t_a);
};

#endif // !IDLESTATE_H

