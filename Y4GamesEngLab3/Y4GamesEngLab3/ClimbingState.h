#ifndef CLIMBING_H
#define CLIMBING_H

#include "state.h"

class ClimbingState : public State
{
public:
	ClimbingState() {};
	~ClimbingState() {};

	void handleInput();
	void update();

	void idle(PlayerFSM* t_a);
	void jumping(PlayerFSM* t_a);
};

#endif // !CLIMBING_H

