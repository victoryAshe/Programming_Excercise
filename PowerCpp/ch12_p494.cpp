#include<iostream>
using namespace std;

class Date
{
	int year, month, day;
	friend bool equals(Date d1, Date d2); // 프렌드 함수 선언
public:
	Date(int y, int m, int d)
	{
		year = y; month = m; day = d;
	}
};

// 프렌드 함수 기술
bool equals(Date d1, Date d2)
{
	// d1.getYear() == d2.getYear() && ... 를 사용해도 괜찮지만, 
	// 이 bool이 자주 사용될 경우 비효율적일 수 있다.
	return d1.year == d2.year && d1.month == d2.month && d1.day == d2.day;
}

void m()
{
	Date d1(2022, 5, 19), d2(1960, 5, 23);
	cout << equals(d1, d2) << endl;
	return;
}