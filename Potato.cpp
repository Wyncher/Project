#pragma once
#include "Potato.h"
#include <iostream>
	std::string Color_Flower;
	Potato::Potato() {
		std::cout << "Ошибка. Овощь не создан";
	}
	Potato::Potato(float mass, int ripeness, std::string color, float size) {
		Mass = mass; Ripeness = ripeness; Color = color; Size = size;
	}
	Potato& operator+=(Potato& d1, Potato& d2) {
		d1.Growth = d2.Growth;
		std::cout << "Скорость роста у обоих овощей теперь равно" << std::endl << "Текущая скорость роста" << d1.Growth << std::endl;
		return d1;
	}
	std::string Potato::getColor_Flower() {
		return (Potato::Color_Flower);
	}
	void Potato::setColor_Flower(std::string s) {
		Potato::Color_Flower = s;
	}
	bool Potato::Compare(const Potato& d1, const Potato& d2) {
		if (d1.Mass > d2.Mass) {
			return true;
		}
		else {
			return false;
		}
	}
