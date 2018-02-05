#include "Entity.h"

void Entity::notificationExample(const Entity &t_entity, Event t_event)
{
	subject.notify(t_entity, t_event);
}

