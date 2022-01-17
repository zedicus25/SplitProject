#pragma once
#include "c_Split.h"
class c_Controller
{
public:
	void turnOn(c_Split& split);
	void turnOff(c_Split& split);

	void addTemperature(c_Split& split, float tempearute);
	void minusTemperature(c_Split& split, float tempearute);
};

