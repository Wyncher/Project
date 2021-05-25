inline int Fermer_counter = 0;
#include"Fermer.h"

	void PushVegetable() {};
	void PlantVegetable() {};
	void ScoreVegetable() {};
	Fermer::Fermer() {};
	Fermer::Fermer(std::string Name, float Weight, int Height){
		this->Name = Name;
	this->Weight= Weight;
	this->Height = Height;
		}
	Fermer::~Fermer() {
	};
	int Fermer::getHeight() {
		return (Fermer::Height);
	}
	void Fermer::setHeight(int s) {
		Fermer::Height = s;
	}
	float Fermer::getWeight() {
		return (Fermer::Weight);
	}
	void Fermer::setWeight(float s) {
		Fermer::Weight = s;
	}
	std::string Fermer::getName() {
		return (Fermer::Name);
	}
	void Fermer::setName(std::string s) {
		Fermer::Name = s;
	}
