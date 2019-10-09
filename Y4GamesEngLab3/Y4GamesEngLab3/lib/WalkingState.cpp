#include "WalkingState.h"
#include "IdleState.h"


void WalkingState::handleInput()
{
}

void WalkingState::update()
{
}

void WalkingState::idle(PlayerFSM* t_a)
{
		std::cout << "Walking -> Idle" << std::endl;
		t_a->setCurrent(new IdleState());
		delete this;
}
