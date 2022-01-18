#pragma once
#include "c_Room.h"
class c_Controller
{
public:
	void addTemperature(c_Split& split) {
		split.addTemperatureSensor();
	}
	void minusTemperature(c_Split& split) {
		split.minusTemperatureSensor();
	}
	void turnOn(c_Split& split) {
		split.turnOn();
	}
	void turnOff(c_Split& split) {
		split.turnOff();
	}
};

