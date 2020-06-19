#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class BMI
{
public:
	BMI();
	BMI(double, double);
	double height;
	double weight;
	double countBMI();
	string toString();
};

