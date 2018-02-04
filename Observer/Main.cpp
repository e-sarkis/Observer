#include <iostream>

#include "ConcreteSubject.h"
#include "ConcreteObserver.h"
int main()
{
	// Entities and Events
	Entity entity1, entity2;
	entity1.name = "EntityA";
	entity2.name = "EntityB";
	Event event1, event2;
	event1.id = EventID::EXAMPLE_ONE;
	event2.id = EventID::EXAMPLE_TWO;

	// Subject to be observed
	ConcreteSubject subject;

	// First Observer
	ConcreteObserver observer1;
	// Add first Observer
	subject.addObserver(&observer1);
	// Second Observer
	ConcreteObserver observer2;
	// Add second Observer
	subject.addObserver(&observer2);

	// Test notification for both
	subject.notificationExample(entity1, event1);
	// Remove second Observer
	subject.removeObserver(&observer2);
	// Test notification for remaining Observer
	subject.notificationExample(entity2, event2);
	// Clear subject of Observers
	subject.removeAllObservers();
	// Test notification of remaining Observers (Spoiler: there are none)
	subject.notificationExample(entity2, event2);

	std::cin.get();
	return 0;
}