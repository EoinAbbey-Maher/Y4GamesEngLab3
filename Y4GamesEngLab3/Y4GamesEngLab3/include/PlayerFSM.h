#ifndef PLAYERFSM_H
#define PLAYERFSM_H

#include <iostream>
#include "Debug.h"
#include "state.h"

class State;

class PlayerFSM
{
private:
	class State* m_current;

	class State* m_previous;

public:
	PlayerFSM();
	~PlayerFSM() {};
	void setCurrent(State* t_s);
	void setPrevious(State* t_s);

	State* getCurrent();
	State* getPrevious();

	State* Idle();
	State* Jumping();
	State* Climbing();
	State* Walking();
	State* Falling();
};


#endif // !PLAYER_FSM_H

