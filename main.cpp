#include "Controller.h"

#include <iostream>

int main() {
	Controller SampleHome;

	SampleHome.AddLight("LivingRoom");
	SampleHome.AddLight("Bedroom");
	SampleHome.AddLight("Bathroom");

	std::cout << "The living room light color is "
	<< SampleHome.GetColor("LivingRoom") << "." << std::endl;

	std::cout << "The bedroom light brightness is "
	<< SampleHome.GetBrightness("Bedroom") << "." << std::endl;

	SampleHome.SetColor("Yellow", "LivingRoom");

	std::cout << "The living room light color is "
	<< SampleHome.GetColor("LivingRoom") << "." << std::endl;

	SampleHome.SetBrightness(80, "Bedroom");

	std::cout << "The bedroom light brightness is "
	<< SampleHome.GetBrightness("Bedroom") << "." << std::endl;


	std::cout << "RemoveLight Test" << std::endl;
	SampleHome.RemoveLight("LivingRoom");
	SampleHome.RemoveLight("Bathroom");
	SampleHome.RemoveLight("Bedroom");

	std::cout << "Incorect Input Test" << std::endl;
	SampleHome.SetColor("Yellow", "LIVINGROOM");
	std::cout << "Pass" << std::endl;

	std::cout << "Remove Non Existing Object Test" << std::endl;
	SampleHome.RemoveLight("LIVINGROOM");
	std::cout << "Pass" << std::endl;

	return 0;
}