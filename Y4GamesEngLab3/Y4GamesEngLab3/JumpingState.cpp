#include "JumpingState.h"
#include "IdleState.h"
#include "ClimbingState.h"

void JumpingState::handleInput()
{
}

void JumpingState::update()
{
}

void JumpingState::idle(PlayerFSM* t_a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	t_a->setCurrent(new IdleState());
	delete this;
}

void JumpingState::climbing(PlayerFSM* t_a)
{
	std::cout << "Jumping -> Climbing" << std::endl;	
	t_a->setCurrent(new ClimbingState());
	delete this;
}
