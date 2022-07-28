#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

void main()
{
	string names[5] = { "사과", "배", "키위", "레몬","포도" };

	vector<string> fruits(&names[0], &names[5]);
	vector<string>::iterator it;

	reverse(fruits.begin(), fruits.end());
	for (it = fruits.begin(); it != fruits.end(); ++it)
		cout << *it << " ";
	cout << endl;
}