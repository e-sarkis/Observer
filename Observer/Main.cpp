#include <iostream>

#include "ConcreteSubject.h"
#include "ConcreteObserver.h"

int main()
{
	// Entities
	Entity entity1, entity2;
	entity1.name = "EntityA";
	entity2.name = "EntityB";
	// Events
	Event event1 = Event::EXAMPLE_ONE;
	Event event2 = Event::EXAMPLE_TWO;

	// Subject to be observed
	ConcreteSubject subject;

	// First Observer
	ConcreteObserver observer1;
	// Second Observer
	ConcreteObserver observer2;

	// Add first Observer
	subject.addObserver(&observer1);
	// Add second Observer
	subject.addObserver(&observer2);

	// NOTIFY OBSERVERS OF EVENT
	subject.notificationExample(entity1, event1);

	// Remove second Observer
	subject.removeObserver(&observer2);

	// NOTIFY OBSERVERS OF EVENT
	subject.notificationExample(entity2, event2);

	// Clear subject of Observers
	subject.removeAllObservers();

	// NOTIFY OBSERVERS OF EVENT (Spoiler: there are none)
	subject.notificationExample(entity2, event2);

	std::cin.get();
	return 0;
}