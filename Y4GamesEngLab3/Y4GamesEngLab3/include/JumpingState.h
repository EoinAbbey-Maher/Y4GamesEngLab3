#ifndef JUMPING_H
#define JUMPING_H

#include "state.h"


class JumpingState : public State
{
public:
	JumpingState() {};
	~JumpingState() {};

	void handleInput();
	void update();

	void idle(PlayerFSM* t_a);
	void climbing(PlayerFSM* t_a);
};


#endif // !JUMPING_H
