#pragma once
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include"variable.h"

class Fermer {
public:
	int Height;
	float Weight;
	std::string Name;
	Fermer();
	Fermer(std::string Name, float Weight, int Height);
	~Fermer();
	friend Fermer& operator >>(std::ostream& out,Fermer& d1);
	int getHeight();
	void setHeight(int s);
	float getWeight();
	void setWeight(float s);
	std::string getName();
	void setName(std::string s);
};
