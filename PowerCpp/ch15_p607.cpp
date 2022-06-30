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

	int number;		// 학번
	char name[30];	// 이름
	int score;		// 성적
	is >> number >> name >> score;  // 파일 입력

	ofstream os;
	os.open("result.txt");
	os << number << " " << name << " " << score << endl; // 파일 출력

	is.close();
	os.close();

}