#pragma once
#include "Observer.h"
class ConcreteObserver :
	public Observer
{
public:
	void onNotify(const Entity&, Event);
};

