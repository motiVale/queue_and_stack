#pragma once
#include "Queue.h"
class Handler
{
private:
	bool is_free;
	Queue client;
	unsigned int loops;
	int avg_time;
public:
	Handler() : is_free{ 1 }, client{}, loops{ 1000 }, avg_time{} {};

};

