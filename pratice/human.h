#pragma once
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
class human
{
public:
	human();
	human(string, int, bool);

	string name;
	int age;
	bool sex;

	string toString();
};

