#pragma once
#include "Entity.h"
#include "Subject.h"
class Monster :
	public Entity
{
public:
	Monster(std::string, int, int);

	Subject subject;
	void takeDamage(int);
	int getXPValue() const;

private:
	int _hp;
};

