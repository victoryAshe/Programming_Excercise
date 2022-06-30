#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	int buffer[] = { 100,20,30,40,50 };
	ofstream os("test.dat", ofstream::binary);	// 파일을 생성
	if (os.fail())
	{
		cout << "파일을 만들지 못했습니다." << endl;
		exit(1);
	}

	os.write((char*)&buffer, sizeof(buffer)); // 배열을 이진 파일에 저장
	os.close();
}