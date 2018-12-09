#include "Subject.h"

Subject::~Subject()
{
	_observers.clear();
	_observers.shrink_to_fit();
}

void Subject::addObserver(Observer* t_observer)
{
	_observers.push_back(t_observer);
}

void Subject::removeObserver(Observer* t_observer)
{
	if (_observers.empty()) return;
	for (int i = 0; i < Subject::getNumObservers(); i++)
	{
		if (_observers[i] == t_observer)
		{
			_observers.erase(_observers.begin() + i);
			_observers.shrink_to_fit();
			return;
		}
	}
}

void Subject::removeAllObservers()
{
	_observers.clear();
	_observers.shrink_to_fit();
}

int Subject::getNumObservers() const
{
	return _observers.size();
}

void Subject::notify(const Entity &t_entity, Event t_event)
{
	// Assumption: Observers do not modify m_observers in onNotify methods
	for (int i = 0; i < Subject::getNumObservers(); i++)
	{
		_observers[i]->onNotify(t_entity, t_event);
	}
}
