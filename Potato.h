#pragma once
#include <iostream>
#include "vegetable.h"
class Potato :public vegetable {
public:
	std::string Color_Flower;
	Potato();
	Potato(float mass, int ripeness, std::string color, float size);
	friend Potato& operator+=(Potato& d1, Potato& d2);
	std::string getColor_Flower();
	void setColor_Flower(std::string s);
	bool Compare(const Potato& d1, const Potato& d2);

};
Potato& operator+=(Potato& d1, Potato& d2);