#include "c_Controller.h"
#include <Windows.h>
void c_Controller::turnOn(c_Split& split)
{
	split.turnOn();
}

void c_Controller::turnOff(c_Split& split)
{
	split.turnOff();
}

void c_Controller::addTemperature(c_Split& split, float tempearute)
{
	split.setTemperatureSensor(tempearute);
	while (split.getRoom()->getTemperature() < split.getTemperatureSensor()) {
		Sleep(50);
		split.getRoom()->addTemperature();
	}
}

void c_Controller::minusTemperature(c_Split& split, float tempearute)
{
	split.setTemperatureSensor(tempearute);
	while (split.getRoom()->getTemperature() > split.getTemperatureSensor()) {
		Sleep(50);
		split.getRoom()->minusTemperature();
	}
}
