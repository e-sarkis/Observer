#include "GameplayStats.h"

void GameplayStats::onNotify(const Entity& t_entity, Event t_event)
{
	switch (t_event)
	{
	case Event::MONSTER_DIED:
		addMonstersDefeated(1);
		addXP(t_entity.xpValue);
		break;
	default:
		// Not a recognized Event, do nothing.
		break;
	}
}

void GameplayStats::printStats()
{
	std::cout << "Stats:" << std::endl;
	std::cout << "\tTotal Monsters Vanquished:\t" << _totalMonstersDefeated << std::endl;
	std::cout << "\tTotal XP:\t\t\t" << _totalXPGained << std::endl;
	std::cout << std::endl;
}

void GameplayStats::addMonstersDefeated(int p_points)
{
	_totalMonstersDefeated += p_points;
}

void GameplayStats::addXP(int t_xp)
{
	_totalXPGained += t_xp;
}
