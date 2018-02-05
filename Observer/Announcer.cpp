#include "Announcer.h"

void Announcer::onNotify(const Entity& t_entity, Event t_event)
{
	std::cout << "Observer was notified!" << std::endl;
	std::cout << "Observed Event ID:\t" << (int)t_event << std::endl;
	std::cout << "Entity Name:\t\t" << t_entity.name << std::endl;
	switch (t_event)
	{
	case Event::POINTS_GAINED:
		std::cout << "POINTS_GAINED occured!" << std::endl;
		break;
	case Event::POINTS_LOST:
		std::cout << "POINTS_LOST occured!" << std::endl;
		break;
	default:
		// Not a recognized Event, do nothing.
		break;
	}
	std::cout << std::endl;
}
