#include "c_Split.h"
#include <Windows.h>
c_Split::c_Split()
{
	this->isTurn = false;
	this->temperatureSensor = 0;
	this->room = new c_Room();
}

c_Split::c_Split(bool isTurn, float temperature, c_Room* room)
{
	this->isTurn = isTurn;
	this->temperatureSensor = temperature;
	this->room = room;
}

void c_Split::turnOn()
{
	this->isTurn = true;
}

void c_Split::turnOff()
{
	this->isTurn = false;
}

void c_Split::addTemperature(float temperature)
{
	while (this->room->getTemperature() < temperature)
	{
		Sleep(50);
		this->getRoom()->addTemperature();
	}
	
}

void c_Split::minusTemperature(float temperature)
{
	while (this->room->getTemperature() > temperature)
	{
		Sleep(50);
		this->getRoom()->minusTemperature();
	}
}
