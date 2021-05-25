#include "vegetable.h"

vegetable& vegetable::operator+=(vegetable& d1)
{
	d1.Growth += 0.2;
	std::cout << "Рост увеличен" << std::endl;
	return d1;
}
float vegetable::GetMass() {
		return(this->Mass);
	}
	void vegetable::setMass(float m) {
		vegetable::Mass = m;
	}
	int vegetable::GetRipeness() {
		return(vegetable::Ripeness);
	}
	void vegetable::setRipeness(int m) {
		vegetable::Ripeness = m;
	}
	std::string vegetable::GetColor() {
		return(vegetable::Color);
	}
	void vegetable::setColor(std::string m) {
		vegetable::Color = m;
	}
	float vegetable::GetSize() {
		return(vegetable::Size);
	}
	void vegetable::setSize(float m) {
		vegetable::Size = m;
	}
	void vegetable::setGrowth(int m) {
		vegetable::Growth = m;
	}
	int vegetable::getGrowth() {
		return(vegetable::Growth);
	}

	
