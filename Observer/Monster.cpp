#include "Monster.h"

Monster::Monster(std::string t_name, int t_hp, int t_xpValue) : _hp(t_hp)
{
	Entity::name = t_name;
	Entity::xpValue = t_xpValue;
}

void Monster::takeDamage(int t_damage)
{
	_hp -= t_damage;
	if (_hp <= 0)
	{
		subject.notify(*this, Event::MONSTER_DIED);
	} else
	{
		subject.notify(*this, Event::MONSTER_DAMAGED);
	}
}

int Monster::getXPValue() const
{
	return xpValue;
}
