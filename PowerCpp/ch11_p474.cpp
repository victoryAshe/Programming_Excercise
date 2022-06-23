#include <iostream>

#include <string>
using namespace std;

// Time: 시각을 나타내는 클래스
class Time
{
	int hour, minute, second;

public:
	Time() //디폴트 생성자
	{
		hour = minute = second = 0;
	}
	Time(int h, int m, int s) : hour(h), minute(m), second(s){}

	void print()
	{
		cout << hour << "시 " << minute << "분 " << second << "초" << endl;
	}
};

// AlarmClock: 알람 시계를 나타내는 클래스
class AlarmClock
{
	Time currentTime, alarmTime; // 현재 시각과 알람을 울릴 시각

public:
	AlarmClock(Time a, Time c) : currentTime(c), alarmTime(a) {}

	void print()
	{
		cout << "현재 시각: ";
		currentTime.print();

		cout << "알람 시각: ";
		alarmTime.print();
	}
};

void main()
{
	Time alarm(6, 0, 0);
	Time current(12, 56, 34);

	AlarmClock c(alarm, current);
	c.print();
}