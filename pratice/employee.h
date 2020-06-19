#pragma once
#include <string>
#include <iostream>
#include "BMI.h"
#include "human.h"
using namespace std;
class employee : public human
{
public:
	employee();
	employee(string, int, string, bool, BMI, double, int);
	double total();
	double bonus();
	int campare(employee &);
	string toString();
	void setBMI(BMI);

	string job;
	double salary;
	int month;
	BMI bmi;
};

