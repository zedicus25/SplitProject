#include <iostream>
#include "c_Controller.h"
int main()
{
	c_Split split(false, 20);
	c_Room room(26, split);
	c_Controller controller;
	controller.turnOn(split);
	room.maintainTemperature();
	std::cout << "\n";
	controller.addTemperature(split);
	room.maintainTemperature();
	
}

