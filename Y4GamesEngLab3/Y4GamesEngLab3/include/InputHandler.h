#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "Command.h"
#include "SDL.h"
#include "SDL_image.h"
#include "PlayerFSM.h"

class InputHandler
{
public:
	///Function to handle each button Press
	void handleInput(SDL_Event& t_event, PlayerFSM& t_state, int& t_y);

	/// <summary>
	/// List of Commands
	/// </summary>
	Command* buttonUP = new UpCommand();
	Command* buttonDown = new DownCommand();
	Command* buttonLeft	 = new LeftCommand();
	Command* buttonRight = new RightCommand();
private:

	/// <summary>
	/// Vector holding all Commands
	/// </summary>
	MacroCommand* m_commandSequence = new MacroCommand();

};

#endif // !INPUTHANDLER_H
