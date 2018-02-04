#pragma once
#include "Entity.h"
#include "Event.h"

// Subscribes to Subjects in order to recieve Events via notification functions
class Observer
{
public:
	// Typical params: notification sender (object) and generic “data” param with details.
	virtual void onNotify(const Entity&, Event) = 0;
};

