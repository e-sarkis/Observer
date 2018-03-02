#include "GameplayStats.h"

void GameplayStats::onNotify(const Entity& t_entity, Event t_event)
{
	switch (t_event)
	{
	case Event::MONSTER_DIED:
		addMonstersKilled(1);
		addXP(t_entity.xpValue);
		break;
	default:
		// Not a recognized Event, do nothing.
		break;
	}
}

void GameplayStats::printStats()
{
	std::cout << "Monsters Killed: " << m_totalMonstersKilled << std::endl;
	std::cout << "XP Gained: " << m_totalXPGained << std::endl;
}

void GameplayStats::addMonstersKilled(int p_points)
{
	m_totalMonstersKilled += p_points;
}

void GameplayStats::addXP(int t_xp)
{
	m_totalXPGained += t_xp;
}
