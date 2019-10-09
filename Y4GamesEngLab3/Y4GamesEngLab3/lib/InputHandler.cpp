#include "InputHandler.h"
#include "state.h"


void InputHandler::handleInput(SDL_Event &t_event, PlayerFSM& t_state, int& t_y)
{
	SDL_Event  event = t_event;

	switch (event.key.keysym.sym)
	{
		case SDLK_UP:
			t_state.setPrevious(t_state.getCurrent());
			t_state.setCurrent(t_state.Jumping());
			t_y = 0;
			break;	
		case SDLK_DOWN:
			t_state.setPrevious(t_state.getCurrent());
			t_state.setCurrent(t_state.Idle());
			t_y = 1;
			break;
		case SDLK_LEFT:
			t_state.setPrevious(t_state.getCurrent());
			t_state.setCurrent(t_state.Climbing());
			t_y = 2;
			break;
		case SDLK_RIGHT:
			t_state.setPrevious(t_state.getCurrent());
			t_state.setCurrent(t_state.Climbing());
			t_y = 2;
			break;
		default:
			break;
	}
}
