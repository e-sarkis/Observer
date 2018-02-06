#pragma once
#include <vector>

#include "Observer.h"

// Provides notifications to subscribed Observers
class Subject
{
public:
	~Subject();
	// Add a given pointer to an Observer to Observer collection
	void addObserver(Observer*);
	// Remove a given pointer to an Observer from Observer collection
	void removeObserver(Observer*);
	// Remove all pointers to Observers from Observer collection
	void removeAllObservers();
	// Return the total number of Observers observing this Subject
	int getNumObservers() const;
	// Notify all Observers in Observers Collection of given Event
	void notify(const Entity&, Event);
private:
	std::vector<Observer*> m_observers; // Collection of Observers to recieve notifications
};

