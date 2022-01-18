#include "c_Split.h"
c_Split::c_Split()
{
	this->isTurn = false;
	this->temperatureSensor = 0;
}

c_Split::c_Split(bool isTurn, float temperature)
{
	this->isTurn = isTurn;
	this->temperatureSensor = temperature;
}


