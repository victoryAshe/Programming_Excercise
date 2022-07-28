#include <iostream>
#include <vector>
#include <algorithm>
#include "printHeader.h"
using namespace std;

void main()
{
	int values1[9] = { 1,2,3,4,5,6,7,8,9 };
	int values2[9] = { 9, 9, 3, 4, 5, 9, 9, 9, 9 };

	vector<int> vec1(&values1[0], &values1[9]);
	vector<int> vec2(&values2[0], &values2[9]);

	print(vec1); print(vec2);

	bool isEqual = equal(vec1.begin() + 2, vec1.begin() + 5, vec2.begin() + 2);

	if (isEqual)
		cout << "두 개의 구간이 동일함" << endl;

}