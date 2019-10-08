#include "ClimbingState.h"
#include "JumpingState.h"
#include "IdleState.h"

#include <string>

void ClimbingState::handleInput()
{
}

void ClimbingState::update()
{
}

void ClimbingState::idle(PlayerFSM* t_a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	t_a->setCurrent(new IdleState());
	delete this;
}

void ClimbingState::jumping(PlayerFSM* t_a)
{
	std::cout << "Climbing -> Jumping " << std::endl;
	t_a->setCurrent(new JumpingState());
	delete this;
}
