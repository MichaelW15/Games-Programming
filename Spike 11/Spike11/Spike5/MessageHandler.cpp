#include "MessageHandler.h"
#include "Messageable_Entity.h"
#include <string>

MessageHandler gMessageHandler;

MessageHandler::MessageHandler()
{
	fMessageableEntities = list<Messageable_Entity*>();
}


MessageHandler::~MessageHandler()
{
}

void MessageHandler::SendMessage(Message aMessage)
{
	for each (Messageable_Entity* m in fMessageableEntities)
	{
		if (aMessage.GetReceiver().compare(m->getName()) == 0)
			m->ReceiveMessage(aMessage);
	}
}

void MessageHandler::RegisterMessageableEntity(Messageable_Entity * aMessageableEntity)
{
	fMessageableEntities.push_back(aMessageableEntity);
}
