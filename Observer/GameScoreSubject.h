#pragma once
#include "Subject.h"
class GameScoreSubject :
	public Subject
{
public:
	void notificationExample(const Entity&, Event);
};

