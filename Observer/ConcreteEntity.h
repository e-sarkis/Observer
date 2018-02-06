#pragma once
#include "Subject.h"
class ConcreteEntity :
	public Subject, public Entity
{
public:
	void concreteNotification(const Entity&, Event);

};

