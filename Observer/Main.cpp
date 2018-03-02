#include <iostream>

#include "GameScoreSubject.h"
#include "GameplayStats.h"
#include "Announcer.h"

int main()
{
	// Monster objects (subclass of Entity)
	Monster beholder("Beholder", 4, 100);
	Monster mummy("Mummy", 2, 50);

	// Stats Observer
	GameplayStats gameStats;
	// Announcer Observer
	Announcer gameAnnouncer;

	// Add GameplayStats Observer to Monsters
	beholder.subject.addObserver(&gameStats);
	mummy.subject.addObserver(&gameStats);
	// Add Announcer Observer to Monsters
	beholder.subject.addObserver(&gameAnnouncer);
	mummy.subject.addObserver(&gameAnnouncer);

	// Show initial stats
	gameStats.printStats();
	
	// NOTIFY OBSERVERS OF EVENT - Beholder Damaged
	beholder.takeDamage(1);
	// NOTIFY OBSERVERS OF EVENT - Mummy Killed
	mummy.takeDamage(2);

	// Show difference in stats
	gameStats.printStats();

	// Remove gameAnnouncer Observer from mummy
	mummy.subject.removeObserver(&gameAnnouncer);

	// NOTIFY OBSERVERS OF EVENT - Beholder Damaged (and Killed)
	beholder.takeDamage(3);

	// Show difference in stats (there are none)
	gameStats.printStats();

	// Clear subject of Observers
	beholder.subject.removeAllObservers();

	// NOTIFY OBSERVERS OF EVENT (Spoiler: there are none) - Beholder Damaged (and Killed)
	beholder.takeDamage(3);

	std::cin.get();
	return 0;
}