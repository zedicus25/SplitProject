#include <iostream>
#include "c_Controller.h"
int main()
{
	c_Controller controller;
	c_Split split;
	controller.addTemperature(split, 20);
	std::cout << split.getRoom()->getTemperature() << "\n";
	split.addTemperature(25);
	std::cout << split.getRoom()->getTemperature() << "\n";
	controller.minusTemperature(split, 15);
	std::cout << split.getRoom()->getTemperature() << "\n";
	split.minusTemperature(14);
	std::cout << split.getRoom()->getTemperature() << "\n";
}

