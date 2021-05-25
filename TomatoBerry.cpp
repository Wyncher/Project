#include <iostream>
#include"Tomato.h"
#include"Strawberry.h"
#include"TomatoBerry.h"
	float Mutation;
	TomatoBerry::TomatoBerry() {
		std::cout << "Ошибка. Овощь не создан";
	}
	TomatoBerry::TomatoBerry(float Mass, int Ripeness, std::string Color, float Mutation, float Size,float Sweetness) {
		TomatoBerry::Tomato::Mass = Mass;
		TomatoBerry::Tomato::Ripeness = Ripeness;
		TomatoBerry::Tomato::Color = Color;
		TomatoBerry::Mutation = Mutation;
		TomatoBerry::Tomato::Size = Size;
		TomatoBerry::Sweetness = Sweetness;
	};
	float TomatoBerry::getMutation() {
		return(TomatoBerry::Mutation);
	}
	void TomatoBerry::setMutation(float m) {
		TomatoBerry::Mutation = m;
	}
	TomatoBerry& operator+(TomatoBerry& d1)
	{
	d1.Mutation += 0.1;
	std::cout << "Вызвана мутация в овоще." << std::endl << "Текущий уровень мутации:" << d1.Mutation << std::endl;
	return d1;
	}