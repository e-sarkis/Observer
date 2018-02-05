#pragma once

#include <iostream>

#include "Observer.h"

class Announcer :
	public Observer
{
public:
	virtual void onNotify(const Entity&, Event);
};

