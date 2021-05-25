#include "Tomato.h"
Tomato::Tomato()
{
}
Tomato::Tomato(float mass, int ripeness, std::string type, std::string color, float size) {
		Mass = mass; Ripeness = ripeness; Type = type; Color = color; Size = size;
	}	
std::string Tomato::GetType() {
	return Tomato::Type;
}

	bool  operator==(Tomato& d1, Tomato& d2) {
		if (d1.Tomato::Mass > d2.Tomato::Mass) {
			return true;
		}
		else {
			return false;
		}

	};

	