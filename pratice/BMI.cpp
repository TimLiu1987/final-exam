#include "BMI.h"
#include <iomanip>
BMI::BMI()
{

}
//新增一個空函式

BMI::BMI(double _h, double _w)
{
	height = _h;
	weight = _w;
}

double BMI::countBMI()
{
	return (weight / height*height);
}

string BMI::toString()
{
	stringstream ss;
	ss << height << "/" << weight << "(BMI:" << fixed << setprecision(2) << countBMI() << ")";
	return ss.str();
}
