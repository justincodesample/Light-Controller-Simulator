#include "Controller.h"

#include <algorithm>
#include <iostream>

Controller::Controller() {}

Controller::~Controller() {
	for (auto light : this->lights) {
		delete light;
	}
}

void Controller::AddLight(std::string name) {
	this->lights.emplace_back(new Light(name));
}

// take a string of name.
// return true if it has been deleted, false otherwise.
bool Controller::RemoveLight(std::string name) {
	std::vector<Light*>::iterator it;
	if (it == lights.end()) {
		return false;
	}

	for (it = lights.begin(); it != lights.end(); it++) {
		if ((*it)->GetName() == name) {
			delete *it;
			lights.erase(it);
			std::cout << name << " has been removed from the controller."
			<< std::endl;
			return true;
		}
	}
	return false;
}

// take a name of the light, for exmple, BedroomLight
// return the color of the light in string
// return None if it does not exist
std::string Controller::GetColor(std::string name) {
	std::vector<Light*>::iterator it;
	for (it = lights.begin(); it != lights.end(); it++) {
		if ((*it)->GetName() == name) {
			return (*it)->GetColor();
		}
	}
	return "None";
}

// set new color of the light to the specific room, for example bedroom.
// return false if the light doesn't exist, true otherwise.
bool Controller::SetColor(std::string color, std::string name) {
	for (auto it = lights.begin(); it != lights.end(); it++) {
		if ((*it)->GetName() == name) {
			(*it)->SetColor(color);
			std::cout << name << "'s color has been set to "
			<< color << "." << std::endl;
			return true;
		}
	}
	return false;
}

// return the brightness (integer value) of the selected light.
// if it doesn't exist, return -1
int Controller::GetBrightness(std::string name) {
	for (auto it = lights.begin(); it != lights.end(); it++) {
		if ((*it)->GetName() == name) {
			return (*it)->GetBrightness();
		}
	}

	return -1;
}

void Controller::SetBrightness(int brightness, std::string name) {
	for (auto it = lights.begin(); it != lights.end(); it++){
		if ((*it)->GetName() == name) {
			(*it)->SetBrightness(brightness);
			std::cout << name << "'s brightness has been set to "
			<< brightness << "." << std::endl;
		}
	}
}