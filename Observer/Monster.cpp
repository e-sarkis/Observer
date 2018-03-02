#include "Monster.h"

Monster::Monster(std::string t_name, int t_hp, int t_xpValue) : m_hp(t_hp)
{
	Entity::name = t_name;
	Entity::xpValue = t_xpValue;
}

void Monster::takeDamage(int t_damage)
{
	m_hp -= t_damage;
	if (m_hp <= 0)
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
