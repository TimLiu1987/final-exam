#include "human.h"

human::human( )
{

}

human::human(string _n, int _a, bool _s)
{
	name = _n;
	age = _a;
	sex = _s;
}

string human::toString()
{
	stringstream ss;
	ss << name << "," << age << "," ;
	if (sex)
		ss << "�k";
	else
		ss << "�k";
	//�i��k�k�P�_�A�M��push�^�h
	return ss.str();
}
