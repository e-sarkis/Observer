#include "Subject.h"

Subject::~Subject()
{
	m_observers.clear();
	m_observers.shrink_to_fit();
}

void Subject::addObserver(Observer* t_observer)
{
	m_observers.push_back(t_observer);
}

void Subject::removeObserver(Observer* t_observer)
{
	if (m_observers.empty()) return;
	for (int i = 0; i < Subject::getNumObservers(); i++)
	{
		if (m_observers[i] == t_observer)
		{
			m_observers.erase(m_observers.begin() + i);
			m_observers.shrink_to_fit();
			return;
		}
	}
}

void Subject::removeAllObservers()
{
	m_observers.clear();
	m_observers.shrink_to_fit();
}

int Subject::getNumObservers() const
{
	return m_observers.size();
}

void Subject::notify(const Entity &t_entity, Event t_event)
{
	// Assumption: Observers do not modify m_observers in onNotify methods
	for (int i = 0; i < Subject::getNumObservers(); i++)
	{
		m_observers[i]->onNotify(t_entity, t_event);
	}
}
