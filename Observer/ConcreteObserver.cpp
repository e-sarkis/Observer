#include "ConcreteObserver.h"
#include <iostream>
void ConcreteObserver::onNotify(const Entity& t_entity, Event t_event)
{
	std::cout << "Observer was notified!" << std::endl;
	std::cout << "Observed Event ID:\t" << (int)t_event << std::endl;
	std::cout << "Entity Name:\t\t" << t_entity.name << std::endl;
	switch (t_event)
	{
	case Event::EXAMPLE_ONE : 
		std::cout << "EXAMPLE_ONE occured!" << std::endl;
		break;
	case Event::EXAMPLE_TWO:
		std::cout << "EXAMPLE_TWO occured!" << std::endl;
		break;
	default:
		// Not a recognized Event, do nothing.
		break;
	}
	std::cout << std::endl;
}
