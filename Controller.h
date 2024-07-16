#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include "Light.h"

#include <vector>

class Controller {
	private:
		std::vector<Light*> lights;

	public:
		Controller();
		~Controller();
		void AddLight(std::string name);
		bool RemoveLight(std::string name);
		std::string GetColor(std::string name);
		bool SetColor(std::string color, std::string name);
		int GetBrightness(std::string name);
		void SetBrightness(int brightness, std::string name);
};

#endif