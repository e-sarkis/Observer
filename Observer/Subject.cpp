#include "Subject.h"

void Subject::addObserver(Observer* t_observer)
{
	m_observers.push_back(t_observer);
}

void Subject::removeObserver(Observer* t_observer)
{
	if (m_observers.empty()) return;
	for (int i = 0; i < getNumObservers(); i++)
	{
		if (m_observers[i] == t_observer)
		{
			m_observers.erase(m_observers.begin() + i);
			return;
		}
	}
}

int Subject::getNumObservers() const
{
	return m_observers.size();
}

void Subject::notify(const Entity &t_entity, Event t_event)
{
	// Assumption: Observers do not modify list in onNotify methods
	for (int i = 0; i < Subject::getNumObservers(); i++)
	{
		m_observers[i]->onNotify(t_entity, t_event);
	}
}
