#pragma once
enum EventID
{
	EXAMPLE_ONE,
	EXAMPLE_TWO
};

class Event
{
public:
	Event();
	~Event();

	EventID id;
};