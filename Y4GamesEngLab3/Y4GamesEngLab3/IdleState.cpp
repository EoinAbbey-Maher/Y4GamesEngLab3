#include "IdleState.h"
#include "JumpingState.h"
#include "ClimbingState.h"

void IdleState::handleInput()
{
}

void IdleState::update()
{
}

void IdleState::jumping(PlayerFSM* t_a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	t_a->setCurrent(new JumpingState());
	delete this;
}

void IdleState::climbing(PlayerFSM* t_a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	t_a->setCurrent(new ClimbingState());
	delete this;
}
