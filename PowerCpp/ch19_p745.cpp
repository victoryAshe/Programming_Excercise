#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include "printHeader.h"
using namespace std;

void main()
{
	string names[5] = { "사과", "배","키위", "레몬", "포도" };

	vector<string> fruits(5);
	copy(&names[0], &names[5], fruits.begin());
	print(fruits, "삭제 전\n");
	cout << endl;

	vector<string>::iterator it;
	it = remove(fruits.begin(), fruits.end(), "레몬");
	print(fruits, "remove() 후\n");
	cout << endl;

	fruits.erase(it, fruits.end());
	print(fruits, "erase() 후\n");
}