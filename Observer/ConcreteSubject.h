#pragma once
#include "Subject.h"
class ConcreteSubject :
	public Subject
{
public:
	void notificationExample(const Entity&, Event);
};
