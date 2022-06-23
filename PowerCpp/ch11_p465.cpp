#include <iostream>
#include <string>
using namespace std;

class Car
{
	int speed, gear, id; // id: 자동차의 시리얼 번호 
	string colour;

public:
	//실체화된 Car 객체 개수를 세는 정적 변수
	static int numberOfCars;
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), colour(c)
	{
		// 자동차 개수를 증가시키고 id 번호를 할당
		id = ++numberOfCars;
	}
};

int Car::numberOfCars = 0; // 정적 변수 정의

void main()
{
	Car c1; 
	cout << Car::numberOfCars << endl;

	Car c2;
	cout << Car::numberOfCars << endl;
}