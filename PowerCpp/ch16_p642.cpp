﻿#include <iostream>
using namespace std;

class NoPersonException
{
public:
	NoPersonException();
	NoPersonException(int p) { persons = p; };
	int get_persons() { return persons; };

private:
	int persons;
};

void main()
{
	// ## 공통 ##
	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	try {
		cout << "피자 조각 수를 입력하시오: ";
		cin >> pizza_slices;

		cout << "사람 수를 입력하시오: ";
		cin >> persons;

		if (persons <= 0)throw NoPersonException(persons);
		slices_per_person = pizza_slices / persons;
		cout << "한 사람 당 피자는 " << slices_per_person << "조각 입니다." << endl;
	}
	catch (NoPersonException e)
	{
		cout << "오류: 사람이 " << e.get_persons() << "명 입니다." << endl;
	}
}