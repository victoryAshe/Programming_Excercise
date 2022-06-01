#include <iostream>
#include <string>
using namespace std;

class Car {
	int speed; int gear; string colour;
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), colour(c) {}
	void display();
};

void Car::display()
{
	cout << "속도: " << speed << ", 기어: " << gear << ", 색상: " << colour << endl;
}

void swapObjects(Car *p1, Car *p2) // 객체를 값으로 전달받음
{
	Car tmp;
	tmp = *p1; *p1 = *p2; *p2 = tmp;
}

void main()
{
	Car mine(0, 1, "white");
	Car yours(0, 1, "red");
	mine.display(); yours.display();

	swapObjects(&mine, &yours);
	mine.display(); yours.display();

	return;
}


