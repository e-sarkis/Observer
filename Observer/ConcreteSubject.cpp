#include "ConcreteSubject.h"

void ConcreteSubject::notificationExample(const Entity& t_entity, Event t_event)
{
	notify(t_entity, t_event);
}
