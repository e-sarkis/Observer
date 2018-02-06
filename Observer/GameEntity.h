#pragma once
#include "Entity.h"
#include "Subject.h"
class GameEntity :
	public Entity, public Subject
{
public:
	GameEntity();
	~GameEntity();
};

