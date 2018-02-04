#include "ConcreteObserver.h"
#include <iostream>
void onNotify(const Entity& t_entity, Event t_event)
{
	std::cout << "Observed Event with ID" << t_event.id << std::endl;
	std::cout << "Entity Name: " << t_entity.name << std::endl;
}
