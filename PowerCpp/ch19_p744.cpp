#include <iostream>
#include <algorithm>
#include <vector>
#include "printHeader.h"
using namespace std;

int increment(int element)
{
	return ++element;
}

void main()
{
	vector<int> vec;
	vector<int> result(10);

	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	print(vec);

	// 각 요소에 대해 increment 적용
	transform(vec.begin(), vec.end(), result.begin(), increment);
	print(result);
}