#pragma once
class c_Room
{
private:
	float currentTemperature;
public:
	float getTemperature() {
		return currentTemperature;
	}
	void addTemperature() {
		this->currentTemperature += 1;
	}
	void minusTemperature() {
		this->currentTemperature -= 1;
	}
};

