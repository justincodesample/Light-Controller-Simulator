#ifndef LIGHT_H_
#define LIGHT_H_

#include <string>

class Light {
	private:
		bool isOn;
		int brightness;
		std::string color;
		std::string name;

	public:
		Light(std::string name);
		~Light();
		void TurnOn();
		void TurnOff();
		int GetBrightness();
		void SetBrightness(int brightness);
		std::string GetColor();
		void SetColor(std::string color);
		std::string GetName();
		void SetName(std::string name);
};

#endif