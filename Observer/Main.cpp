#include <iostream>

#include "GameScoreSubject.h"
#include "GameplayStats.h"
#include "Announcer.h"

int main()
{
	// Entities
	Entity onePoint, twoPoints;
	onePoint.name			= "Entity onePoint";
	onePoint.pointValue		= 1;
	twoPoints.name			= "Entity twoPoints";
	twoPoints.pointValue	= 2;

	// Subject to be observed
	GameScoreSubject gameScore;

	// First Observer
	GameplayStats gameStats;
	// Second Observer
	Announcer gameAnnouncer;

	// Add GameplayStats Observer
	gameScore.addObserver(&gameStats);
	// Add Announcer Observer
	gameScore.addObserver(&gameAnnouncer);
	
	// NOTIFY OBSERVERS OF EVENT - One Point Gained
	gameScore.notificationExample(onePoint, Event::POINTS_GAINED);

	// Remove gameAnnouncer Observer
	gameScore.removeObserver(&gameAnnouncer);

	// NOTIFY OBSERVERS OF EVENT - One Point Gained
	gameScore.notificationExample(twoPoints, Event::POINTS_GAINED);

	// Clear subject of Observers
	gameScore.removeAllObservers();

	// NOTIFY OBSERVERS OF EVENT (Spoiler: there are none) - Two Points Lost
	gameScore.notificationExample(twoPoints, Event::POINTS_LOST);

	std::cin.get();
	return 0;
}