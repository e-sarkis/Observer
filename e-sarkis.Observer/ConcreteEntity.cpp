#include "ConcreteEntity.h"

void ConcreteEntity::concreteNotification(const Entity &t_entity, Event t_event)
{
	notify(*this, t_event);
}
