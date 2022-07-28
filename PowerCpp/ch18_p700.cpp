﻿#include <iostream>
#include <deque>
using namespace std;

void main()
{
	deque<int> dq;

	dq.push_back(1);
	dq.push_back(2);

	dq.push_front(3);
	dq.push_front(4);

	for (int i = 0; i < dq.size(); i++)
		cout << dq[i] << " ";
	cout << endl;

	dq.pop_back();
	dq.pop_front();
	for (int i = 0; i < dq.size(); i++)
		cout << dq[i] << " ";
	cout << endl;
}