#include <iostream>
#include <vector>
#include "printHeader.h"
using namespace std;

void main()
{
	vector<int> vec;

	for (int i = 1; i <= 5; i++)
		vec.push_back(i * 10);

	print(vec);
}