#include "c_Room.h"

c_Room::c_Room()
{
	this->roomTemperature = 0;
	this->split = new c_Split();
}

c_Room::c_Room(float temperature, c_Split& split)
{
	this->roomTemperature = temperature;
	this->split = &split;
}
