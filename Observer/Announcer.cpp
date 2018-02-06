#include "Announcer.h"

void Announcer::onNotify(const Entity& t_entity, Event t_event)
{
	std::cout << "Observer was notified!" << std::endl;
	std::cout << "Observed Event ID:\t" << (int)t_event << std::endl;
	std::cout << "Entity Name:\t\t" << t_entity.name << std::endl;
	switch (t_event)
	{
	case Event::MONSTER_DAMAGED:
		std::cout << t_entity.name << " was damaged!" << std::endl;
		break;
	case Event::MONSTER_DIED:
		std::cout << t_entity.name << " was killed!" << std::endl;
		break;
	default:
		// Not a recognized Event, do nothing.
		break;
	}
	std::cout << std::endl;
}
