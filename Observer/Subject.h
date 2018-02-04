#pragma once
#include <vector>

#include "Observer.h"


class Subject
{
public:
	void addObserver(Observer*);
	void removeObserver(Observer*);

	int getNumObservers() const;
private:
	std::vector<Observer*> m_observers;
};

