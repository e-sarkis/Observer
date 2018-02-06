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
	// Notification for recieving Monster objects
	virtual void onNotify(const Monster&, Event);
private:
	void addMonstersKilled(int);
	void addXP(int);
	int m_totalMonstersKilled = 0;
	int m_totalXPGained = 0;
};