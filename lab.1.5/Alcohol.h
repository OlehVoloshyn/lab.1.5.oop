#include"Liquid.h"
#pragma once
using namespace std;
class Alcohol
{
private:
	Liquid liquid;
	double strength;
public:
	Liquid getLiquid() { return liquid; }
	double getStrength() { return strength; }

	void setLiquid(Liquid liquid) { this->liquid = liquid; }
	void setSrtength(double strength) { this->strength = strength; }

	void Init(Liquid liquid, double strength);
	void Display() const;
	void Read();
	string toString() const;
};

