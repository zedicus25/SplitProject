#pragma once
#include "c_Room.h"
class c_Split
{
private:
	bool isTurn;
	float temperatureSensor;
	c_Room* room;
public:
	c_Split();
	explicit c_Split(bool isTurn, float temperature, c_Room* room);
	c_Room* getRoom() {
		return this->room;
	}
	float getTemperatureSensor() {
		return this->temperatureSensor;
	}
	void setTemperatureSensor(float tempearute) {
		this->temperatureSensor = tempearute;
	}

	void turnOn();
	void turnOff();

	void addTemperature(float temperature);
	void minusTemperature(float temperature);
};

