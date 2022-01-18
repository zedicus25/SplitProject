#pragma once
class c_Split
{
private:
	bool isTurn;
	float temperatureSensor;
public:
	c_Split();
	c_Split(bool isTurn, float temperature);
	float getTemperatureSensor() {
		return this->temperatureSensor;
	}

	void addTemperatureSensor() {
		this->temperatureSensor += 1;
	}
	void minusTemperatureSensor() {
		this->temperatureSensor -= 1;
	}
	void turnOn() {
		this->isTurn = true;
	}
	void turnOff() {
		this->isTurn = false;
	}
};