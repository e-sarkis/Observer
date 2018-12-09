#pragma once
#include "Subject.h"
class GameScoreSubject :
	public Subject
{
public:
	void scoreNotification(const Entity&, Event);
};