#pragma once
#include <iostream>
#include "vegetable.h"
class Tomato :public vegetable {
public:
	std::string Type;
	Tomato();
	Tomato(float mass, int ripeness, std::string type, std::string color, float size);
	//virtual Tomato& operator -=(Tomato& d1);
	std::string GetType();
	friend bool operator==(Tomato& d1, Tomato& d2);
}; 