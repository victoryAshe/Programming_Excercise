#include <iostream>
#include <fstream>
using namespace std;

void main()
{
	ifstream is;
	ofstream os;
	is.open("score.txt");	// 입력 파일
	if (is.fail())
	{
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}

	os.open("result.txt");	// 출력 파일
	if (os.fail())
	{
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}

	char c;
	int line_number = 1;	// 행 번호
	is.get(c);
	os << line_number << ": ";
	while (is)
	{
		os << c;
		if (c == '\n')
		{
			line_number++;
			os << line_number << ": ";
		}
		is.get(c);
	}

	is.close();
	os.close();



}