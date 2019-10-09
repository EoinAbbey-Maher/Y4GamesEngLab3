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

State* PlayerFSM::Idle()
{
	m_current->idle(this);
	return m_current;
}

State* PlayerFSM::Jumping()
{
	m_current->jumping(this);
	return m_current;
}

State* PlayerFSM::Climbing()
{
	m_current->climbing(this);
	return m_current;
}

State* PlayerFSM::Walking()
{
	m_current->walking(this);
	return m_current;
}

State* PlayerFSM::Falling()
{
	m_current->falling(this);
	return m_current;
}
