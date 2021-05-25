#include "Strawberry.h"

	Strawberry::Strawberry() {
		std::cout << "ќшибка. ќвощь не создан";
	}
	Strawberry::Strawberry(float Mass, float Ripeness, float Sweetness, float Size) {
		Strawberry::Mass = Mass;
		Strawberry::Ripeness = Ripeness;
		Strawberry::Sweetness = Sweetness;
		Strawberry::Size = Size;
	};
	int Strawberry::GetRipeness() {
		return(Strawberry::Ripeness);
	}
	void Strawberry::SetRipeness(int m) {
		Strawberry::Ripeness = m;
	}
	float Strawberry::GetSize() {
		return(Strawberry::Size);
	}
	float Strawberry::GetMass() {
		return(Strawberry::Mass);
	}
	void Strawberry::SetSize(float m) {
		Strawberry::Size = m;
	}
	void Strawberry::SetSweetness(int m) {
		Strawberry::Sweetness = m;
	}
	int Strawberry::GetSweetness() {
		return(Strawberry::Sweetness);
	}

	//void operator--(Strawberry& e){
	//}
