#pragma once
#include <iostream>
class Strawberry {
public:
	float Sweetness;
	int Ripeness;
	float Size;
	float Mass;
	Strawberry();
	Strawberry(float Mass, float Ripeness, float Sweetness, float Size) ;
//	friend void operator--(Strawberry& e);
	float GetMass();
	void SetMass(float m);
	int GetRipeness();
	void SetRipeness(int m);
	float GetSize();
	void SetSize(float m);
	void SetSweetness(int m);
	int GetSweetness();

};