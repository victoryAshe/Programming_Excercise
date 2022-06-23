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

void swapObjects(Car &r1, Car &r2) // 객체의 레퍼런스로 매개 변수 정의
{
	Car tmp;
	tmp = r1; r1 = r2; r2 = tmp;
}

void main()
{
	Car mine(0, 1, "white");
	Car yours(0, 1, "red");
	mine.display(); yours.display();

	swapObjects(mine, yours); // 객체의 전달
	mine.display(); yours.display();

	return;
}


