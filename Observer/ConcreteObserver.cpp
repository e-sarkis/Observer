#include "ConcreteObserver.h"
#include <iostream>
void ConcreteObserver::onNotify(const Entity& t_entity, Event t_event)
{
	std::cout << "Observer was notified!" << std::endl;
	std::cout << "Observed Event ID:\t" << (int)t_event.id << std::endl;
	std::cout << "Entity Name:\t\t" << t_entity.name << std::endl;
	std::cout << std::endl;
}
