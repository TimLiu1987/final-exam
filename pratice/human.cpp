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
		ss << "男";
	else
		ss << "女";
	//進行男女判斷，然後push回去
	return ss.str();
}
