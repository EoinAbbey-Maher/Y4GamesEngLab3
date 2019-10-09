#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>
#include <vector>
using namespace std;

/// <summary>
/// Foundation Class for each command
/// </summary>
class Command
{
public:
	virtual ~Command() {};
	virtual void execute() = 0;

protected:
	Command() {};
};

// ----------------------- MACRO COMMANDS ------------------------- //

/// <summary>
/// Vector Class to hold and Execute all the commands input by the user
/// </summary>
class MacroCommand : public Command
{
public:
	MacroCommand(){ m_commands = new vector<Command* >(); };
	virtual ~MacroCommand();
	virtual void add( Command* );
	virtual void remove(Command*);
	virtual void execute();
	
private:
	int m_commandsEnd{};
	vector<Command*>* m_commands;
};

// -------------------------- COMMANDS ---------------------------- //
//-------------- All Commands available to the User --------------- //
class UpCommand : public Command
{
public:
	virtual void execute()
	{
	}
};

class DownCommand: public Command
{
public:
	virtual void execute()
	{
	}
};

class LeftCommand : public Command
{
public:
	virtual void execute()
	{
	}
};

class RightCommand : public Command
{
public:
	virtual void execute()
	{
	}
};
#endif // !COMMAND_H

