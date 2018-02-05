#pragma once

#include <iostream>

#include "Observer.h"

class GameplayStats :
	public Observer
{
public:
	void printPoints();
	virtual void onNotify(const Entity&, Event);
private:
	void addPoints(int);
	void subtractPoints(int);
	int m_totalPoints = 0;
};