#include <iostream>
#include <string>
using namespace std;

class Car
{
	int speed, gear, id;
	string colour;
public:

	static int numberOfCars;
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), colour(c)
	{
		id = ++numberOfCars;
	}

	// 정적 멤버 함수
	static int getNumberOfCars()
	{
		return numberOfCars;
	}
};

int Car::numberOfCars = 0; // 정적 변수 정의 및 초기화

void main()
{
	Car c1(100, 0, "blue");
	Car c2(0, 0, "white");
	
	int n = Car::getNumberOfCars(); // 정적 멤버 함수 호출
	cout << "지금까지 생성된 자동차 수 = " << n << endl;

}