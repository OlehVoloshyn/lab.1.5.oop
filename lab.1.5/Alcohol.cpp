#include "Alcohol.h"
#include<iostream>
 #include <string>
#include <sstream>
using namespace std;

void Alcohol::Init(Liquid liquid, double strength)
{
	setLiquid(liquid);
	setSrtength(strength);
}

void Alcohol::Display() const
{
	cout << endl;
	cout << "liquid = " << endl;
	liquid.Display(); // використовуємо делегування
	cout << "strength = " << strength << endl;


}

void Alcohol::Read()
{
	double strength;
	Liquid l;
	cout << endl;
	cout << "liquid =  " << endl;
	l.Read(); // використовуємо делегування
	cout << "strength = "; cin >> strength;
	Init(l, strength);

}

string Alcohol::toString() const
{
	stringstream sout; 
	sout << "strength = " << strength << endl; 
	
	return sout.str();
}
