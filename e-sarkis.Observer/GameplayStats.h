#pragma once

#include <iostream>

#include "Observer.h"
#include "Monster.h"

class GameplayStats :
	public Observer
{
public:
	void printStats();
	// Notification for recieving Entity objects
	virtual void onNotify(const Entity&, Event);
private:
	void addMonstersDefeated(int);
	void addXP(int);
	int _totalMonstersDefeated = 0;
	int _totalXPGained = 0;
};