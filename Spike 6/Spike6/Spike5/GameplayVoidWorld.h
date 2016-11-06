#pragma once
#include "State.h"
#include "Player.h"
class GameplayVoidWorld :
	public State
{
public:
	GameplayVoidWorld();

	virtual States runState();

	States getNextState();
	void initialiseWorld();

private:
	Player fPlayer;
};

