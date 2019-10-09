#include "FallingState.h"
#include "IdleState.h"

void FallingState::handleInput()
{
}

void FallingState::update()
{
}

void FallingState::idle(PlayerFSM* t_a)
{
	std::cout << "Falling -> Idle" << std::endl;
	t_a->setCurrent(new IdleState());
	delete this;
}
