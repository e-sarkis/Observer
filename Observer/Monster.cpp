#include "Monster.h"

Monster::Monster(std::string t_name, int t_hp, int t_xpValue) : m_hp(t_hp), m_xpValue(t_xpValue)
{
	Entity::name = t_name;
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
	return m_xpValue;
}
