#pragma once
#include <vector>

#include "Observer.h"


class Subject
{
public:
	void addObserver(Observer*);
	void removeObserver(Observer*);

	int getNumObservers() const;

protected:
	void notify(const Entity&, Event);
private:
	std::vector<Observer*> m_observers;
};

