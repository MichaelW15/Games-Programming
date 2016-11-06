#pragma once
#include <string>

using namespace std;

class Entity {

public:
	Entity();
	virtual void display();

	virtual bool add(Entity* aEntity);
	virtual void remove();

	virtual string getName();




	
protected:
	string fDescription;
	string fName;
	
};