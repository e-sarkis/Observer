#include "Announcer.h"

void Announcer::onNotify(const Entity& t_entity, Event t_event)
{
	std::cout << "Entity \"" << t_entity.name << "\" experienced Event with ID: " << (int)t_event << std::endl;

	switch (t_event)
	{
	case Event::MONSTER_DAMAGED:
		std::cout << "Description:\t" << t_entity.name << " was damaged!" << std::endl;
		break;
	case Event::MONSTER_DIED:
		std::cout << "Description:\t" << t_entity.name << " was defeated!" << std::endl;
		break;
	default:
		// Not a recognized Event, do nothing.
		break;
	}
	std::cout << std::endl;
}
