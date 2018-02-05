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

	// Stats Observer
	GameplayStats gameStats;
	// Announcer Observer
	Announcer gameAnnouncer;

	// Add GameplayStats Observer
	gameScore.addObserver(&gameStats);
	// Add Announcer Observer
	gameScore.addObserver(&gameAnnouncer);
	
	// NOTIFY OBSERVERS OF EVENT - One Point Gained
	gameScore.scoreNotification(onePoint, Event::POINTS_GAINED);

	// Show difference in stats
	gameStats.printPoints();

	// Remove gameAnnouncer Observer
	gameScore.removeObserver(&gameAnnouncer);

	// NOTIFY OBSERVERS OF EVENT - One Point Gained
	gameScore.scoreNotification(twoPoints, Event::POINTS_GAINED);

	// Show difference in stats
	gameStats.printPoints();


	// Clear subject of Observers
	gameScore.removeAllObservers();

	// NOTIFY OBSERVERS OF EVENT (Spoiler: there are none) - Two Points Lost
	gameScore.scoreNotification(twoPoints, Event::POINTS_LOST);

	std::cin.get();
	return 0;
}