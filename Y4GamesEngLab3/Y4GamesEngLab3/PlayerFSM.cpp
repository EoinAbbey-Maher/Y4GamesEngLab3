#include "PlayerFSM.h"
#include "IdleState.h"

PlayerFSM::PlayerFSM()
{
	m_current = new IdleState();
}

void PlayerFSM::setCurrent(State* t_s)
{
	m_current = t_s;
}

void PlayerFSM::setPrevious(State* t_s)
{
	m_previous = t_s;
}

State* PlayerFSM::getCurrent()
{
	return m_current;
}

State* PlayerFSM::getPrevious()
{
	return m_previous;
}

void PlayerFSM::Idle()
{
	m_current->idle(this);
}

void PlayerFSM::Jumping()
{
	m_current->jumping(this);
}

void PlayerFSM::Climbing()
{
	m_current->climbing(this);
}
