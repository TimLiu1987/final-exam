#include <iostream>
#include <string>
#include "BMI.h"
#include "employee.h"
#include "human.h"
using namespace std;

void print(employee &p1, employee &p2)
{
	switch (p1.campare(p2))
	{
	case 1:
		cout << p1.name << "薪水比" << p2.name << "高" << endl;
		break;
	case 0:
		cout << p1.name << "薪水比" << p2.name << "等於" << endl;
		break;
	case -1:
		cout << p1.name << "薪水比" << p2.name << "低" << endl;
		break;
	default:
		break;
	}
}

int main()
{
	employee person1("John", 16, "Manager", 1, BMI(1.7, 66), 58000, 16);
	employee person2("Candy", 65, "Boss", 0, BMI(1.4, 85), 72000, 11);
	employee person3("Mary", 88, "Cleaner", 0, BMI(1.8, 99), 32000, 53);

	string _name;
	int _age;
	string _sex;
	double _height;
	double _weight;
	double _salary;
	int _month;

	cin >> _name >> _age >> _sex >> _height >> _weight >> _salary >> _month;


	person1.name = _name;
	person1.age = _age;
	if (_sex == "男")
		person1.sex = 1;
	else
		person1.sex = 0;

	person2.bmi = BMI(_height, _weight);

	person3.salary = _salary;
	person3.month = _month;
	
	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;
	print(person1, person2);
	print(person1, person3);
	print(person2, person3);


	system("pause");
}