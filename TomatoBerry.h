#pragma once

class TomatoBerry :public Tomato, public Strawberry {
public:
	float Mutation;
	TomatoBerry();
	TomatoBerry(float Mass, int Ripeness, std::string Color, float Mutation, float Size, float Sweetness);
	float getMutation();
	void setMutation(float m);
	friend TomatoBerry& operator+(TomatoBerry& d1);
}; TomatoBerry& operator+(TomatoBerry& d1);