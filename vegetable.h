#pragma once
#include<iostream>
#include<string>

class vegetable {//¿¡—“–¿ “Õ€…
public:
	int Ripeness;
	float Mass;
	int Growth;
	float Size;
	std::string Color;
	virtual vegetable& operator +=(vegetable& d1);
	virtual float GetMass();
	virtual void setMass(float m);
	virtual int GetRipeness();
	virtual void setRipeness(int m);
	virtual std::string GetColor();
	virtual void setColor(std::string m);
	virtual float GetSize();
	virtual void setSize(float m);
	virtual void setGrowth(int m);
	virtual int getGrowth();
};