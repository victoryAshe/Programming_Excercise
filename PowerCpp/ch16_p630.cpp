﻿#include <iostream>
using namespace std;

void main()
{
	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;

	cout << "피자 조각수를 입력하시오: ";
	cin >> pizza_slices;

	cout << "사람 수를 입력하시오: ";
	cin >> persons;

	slices_per_person = pizza_slices / persons;
	
	cout << "한 사람 당 피자는 " << slices_per_person << "개 입니다." << endl;
}