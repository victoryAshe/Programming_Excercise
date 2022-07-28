#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <string>
using namespace std;

void main()
{
	vector<int> vec;
	for (int i = 0; i < 10; ++i)
		vec.push_back(i);

	list<int> ilist;
	for (int i = 3; i < 6; ++i)
		ilist.push_back(i);

	vector<int>::iterator it;
	it = search(vec.begin(), vec.end(), ilist.begin(), ilist.end());

	if (it != vec.end())
		cout << "부분 구간이 위치 " << distance(vec.begin(), it) << "에 있습니다." << endl;
}