
#ifndef FALLING_H
#define FALLING_H

#include "state.h"

class FallingState : public State
{
public:
	FallingState() {};
	~FallingState() {};

	void handleInput();
	void update();

	void idle(PlayerFSM* t_a);
};

#endif // !CLIMBING_H
