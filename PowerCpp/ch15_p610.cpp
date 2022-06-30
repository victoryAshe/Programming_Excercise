#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	ofstream os;
	char c;
	os.open("test.txt");

	while(cin.get(c)) // 글을 쓰고 -> Enter -> Ctrl + C [입력 종료 커멘드]
	{
		os.put(c);
	}

	os.close();
}