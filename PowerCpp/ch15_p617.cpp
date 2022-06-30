﻿#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	struct Score {
		int number;
		char name[30];
		int score;
	} grades[] = 
		{	{20100001, "홍길동", 100},
			{20100002, "김유신", 90},
			{20100003, "강감찬", 80} 
		};

	ofstream os;
	os.open("test.dat", ofstream::binary);
	if (os.fail())
	{
		cout << "test.dat 파일을 열 수 없습니다." << endl;
		exit(1);
	}

	os.write((char*)&grades, sizeof(grades));	// 구조체 배열을 이진 파일에 저장!
	os.close();


}