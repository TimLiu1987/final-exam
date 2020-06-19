#include "employee.h"
#include "BMI.h"
#include "human.h"

employee::employee()
{

}

employee::employee(string _n,int _a, string _j, bool _s, BMI _bmi, double _sa, int _m)
{
	name = _n;
	age = _a;
	sex = _s;
	bmi = _bmi;
	job = _j;
	salary = _sa;
	month = _m;
}
int employee::campare(employee &n)//&n為輸入進n的位置
{
	if (n.salary < salary)
	{
		return 1;
	}
	else if (n.salary == salary)
	{
		return 0;
	}
	else
		return -1;
}
string employee::toString()
{
	stringstream ss;
	ss << human::toString() << "(" << bmi.toString() << ") (" << job << "-" << salary << ","
		<< "工作月份:" << month << "," << "獎金:" << bonus() << ")" << endl;
	return ss.str();
}

void employee::setBMI(BMI b)
{
	bmi = b;
}

double employee::total()
{
	return salary * month;
}
double employee::bonus()
{
	return salary * month * 0.3;
}
