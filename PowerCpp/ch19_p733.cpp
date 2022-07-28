﻿#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// 문자열 s가 "김"을 포함하는지 검사
bool checkKim(string s)
{
	if (s.find("김") != string::npos)
		return true;

	return false;
}

void main()
{
	string names[5] = { "김철수", "박문수", "강감찬","김유신", "이순신" };
	
	vector<string> vec(&names[0], &names[5]);
	vector<string>::iterator it =  vec.begin();

	while (true)
	{
		it = find_if(it, vec.end(), checkKim);
		
		if (it == vec.end()) break;
		cout << "벡터의 " << distance(vec.begin(), it) << "번째 공간에서 "
			<< *it << "을 탐색했음" << endl;
		it++;
	}

}