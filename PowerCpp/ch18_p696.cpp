#include <iostream>
#include <vector>
#include <string>
using namespace std;


void main()
{
	vector<string> vec;

	vec.push_back("milk");
	vec.push_back("bread");
	vec.push_back("butter");

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	cout << endl;

	vec.insert(vec.begin() + 1, "apple");
	vec.pop_back();

	vector<string>::iterator p;
	for (p = vec.begin(); p != vec.end(); p++)
		cout << *p << " ";
	cout << endl;
}