﻿#include <vector>
#include <iostream>
using namespace std;

void main()
{
	vector<double> scores;  // 선언

	while (true)
	{
		double value = 0.0;

		cout << "성적을 입력하시오(종료는 -1): ";
		cin >> value;

		if (value < 0.0) break;
		scores.push_back(value);
	}

	double highest = -100;
	
	vector<double>::iterator it;
	for (it = scores.begin(); it != scores.end(); it++)
		if (*it > highest) highest = *it;

	cout << "최고 성적은 " << highest << "입니다. \n";
}