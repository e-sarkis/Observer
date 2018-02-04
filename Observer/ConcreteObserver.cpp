#include "ConcreteObserver.h"
#include <iostream>
void onNotify(const Entity& t_entity, Event t_event)
{
	std::cout << t_event.id << std::endl;
}
