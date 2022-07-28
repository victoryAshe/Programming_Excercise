#include<iostream>
#include<map>
using namespace std;

void main()
{
	map<string, int> table;
	map<string, int>::iterator iter = table.begin();

	while (iter != table.end())
	{
		pair<string, int> element = make_pair(iter->first, iter->second);
		cout << "key: " << element.first << ", value: " << element.second << endl;
		iter++;
	}

}