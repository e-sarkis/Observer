#pragma once
#include "Entity.h"
#include "Event.h"

class Observer
{
public:
	virtual ~Observer();

	// Typical params: notification sender (object) and generic “data” param with details.
	virtual void onNotify(const Entity&, Event) = 0;
};

