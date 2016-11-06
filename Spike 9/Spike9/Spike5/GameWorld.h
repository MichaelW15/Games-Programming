#pragma once
#include "Graph.h"
#include <iostream>
#include <string>
#include "Location.h"
#include "Entity.h"

class GameWorld
{
public:
	GameWorld();
	~GameWorld();

	void AddLocation(Location* aLocation, list <pair <int, string>> aPaths);
	void AddItemToLocation(string aLocationName, Entity* aGameEntity);


	void PrintWorld();
	void ShowValidMoves(int aPlayerLocation);
	void ShowLocation(int aPlayerLocation);
	void ShowVisibleItems(int aPlayerLocation);
	int ValidateMove(int aPlayerLocation, string aMove);
	Location* getLocation(int aPlayerLocation);

private:
	Graph fWorldMap;
	vector<Location*> fLocations;
	
};

