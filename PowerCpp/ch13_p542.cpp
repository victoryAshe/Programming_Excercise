#include <iostream>
#include <string>
using namespace std;

class Car {
public:
	int getHP()
	{
		return 100;
	}
};

class SportsCar : public Car
{
public:
	int getHP()
	{
		return 300;
	}
};

void main()
{
	SportsCar sc;

	cout << "마력: " << sc.getHP() << endl;      // 300
	cout << "마력: " << sc.Car::getHP() << endl; // 100	
	
	return;
}