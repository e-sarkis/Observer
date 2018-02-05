#include "GameplayStats.h"

void GameplayStats::onNotify(const Entity& t_entity, Event t_event)
{
	switch (t_event)
	{
	case Event::POINTS_GAINED:
		addPoints(t_entity.pointValue);
		break;
	case Event::POINTS_LOST:
		subtractPoints(t_entity.pointValue);
		break;
	default:
		// Not a recognized Event, do nothing.
		break;
	}
	std::cout << std::endl;
}

void GameplayStats::printPoints()
{
	std::cout << "Total Points: " << m_totalPoints << std::endl;
}

void GameplayStats::addPoints(int p_points)
{
	m_totalPoints += p_points;
}

void GameplayStats::subtractPoints(int p_points)
{
	m_totalPoints -= p_points;
}
