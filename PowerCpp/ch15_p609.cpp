#include <iostream>
#include <fstream>			// 파일 입출력 관련 헤더 파일
using namespace std;

void main()
{
	ifstream is;
	is.open("score.txt");
	if (!is)
	{
		cerr << "파일 오픈에 실패했습니다." << endl;
		exit(1);
	}

	char c = ' ';
	while (is)  // txt파일 인코딩이 ANSI여야 정상 작동
	{
		is.get(c);
		cout << c;
	}

	is.close();

}