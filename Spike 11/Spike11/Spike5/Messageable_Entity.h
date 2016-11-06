#pragma once
#include "Message.h"
#include "MessageHandler.h"

class Messageable_Entity
{
public:
	Messageable_Entity();
	~Messageable_Entity();

	void CreateMessage(string aReceiver, string aMessage);
	void SendMessage();
	void ReceiveMessage(Message aMessage);
	
	virtual string getName();


protected:
	virtual void ProcessMessage();
	
	Message fMessage;

};