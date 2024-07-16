#include "Light.h"

Light::Light(std::string name) {
	this->isOn = false;
	this->brightness = 0;
	this->color = "White";
	this->name = name;
}

Light::~Light() {
}

void Light::TurnOn() {
	this->isOn = true;
}

void Light::TurnOff() {
	this->isOn = false;
}

int Light::GetBrightness() {
	return this->brightness;
}

void Light::SetBrightness(int brightness) {
	this->brightness = brightness;
}

std::string Light::GetColor() {
	return this->color;
}

void Light::SetColor(std::string color) {
	this->color = color;
}

std::string Light::GetName() {
	return this->name;
}

void Light::SetName(std::string name) {
	this->name = name;
}