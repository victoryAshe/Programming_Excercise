#include <iostream>
#include <string>
using namespace std;

/*
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

void swapObjects(Car c1, Car c2) // 객체를 값으로 전달받음
{
	Car tmp;
	tmp = c1; c1 = c2; c2 = tmp;
}

Car buyCar()
{
	Car tmp(0, 1, "metal");
	return tmp;  // 객체를 값으로 변환
}

void main()
{
	Car c1;
	c1.display(); 

	c1 = buyCar();  // 변환 객체를 c1으로 복사 -> c1의 값이 사라지고 buyCar이 반환한 객체 값을 덮어씌움
	c1.display();

	return;
}
*/