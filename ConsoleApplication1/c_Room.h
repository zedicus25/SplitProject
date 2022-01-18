#pragma once
#include "c_Split.h"
#include <iostream>
class c_Room
{
private:
	float roomTemperature;
	c_Split* split;
	void addTemperature() {
		this->roomTemperature += 1;
	}
	void minusTemperature() {
		this->roomTemperature -= 1;
	}
public:
	explicit c_Room();
	c_Room(float temperature, c_Split& split);
	void maintainTemperature() {
		if (split->getTemperatureSensor() < roomTemperature) {
			do {
				this->minusTemperature();
				std::cout << this->roomTemperature << "\n";
			} while (split->getTemperatureSensor() != roomTemperature);
			
		}
		else if(split->getTemperatureSensor() > roomTemperature) {
			do {
				this->addTemperature();
				std::cout << this->roomTemperature << "\n";
			} while (split->getTemperatureSensor() != roomTemperature);
		}
	}
};

