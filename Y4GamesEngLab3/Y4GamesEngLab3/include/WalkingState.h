#ifndef WALKING_H
#define WALKING_H

#include "state.h"

class WalkingState : public State
{
public:
	WalkingState() {};
	~WalkingState() {};

	void handleInput();
	void update();

	void idle(PlayerFSM* t_a);
};

#endif // !CLIMBING_H


