// p572의 변형.
#include <iostream>
#include <string>
using namespace std;

class Shape
{
	//protected: 자신과 상속받은 객체만 접근 가능하게 하는 접근지정자
protected:
	// 도형의 위치를 나타내는 2차원 상 기준점 -> 모든 도형에 공통
	int x, y;

public:
	void setOrigin(int x, int y)
	{
		this->x = x; this->y = y;
	}

	// 가상 함수 정의!
	virtual void draw() 
	{
		cout << "Draw Shape" << endl;
	}
};


class Rectangle : public Shape
{
private:
	int width, height;

public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }

	void draw() { cout << "Draw Rectangle" << endl; }  // 가상 함수 재정의
};

class Circle : public Shape
{
private:
	int radius;

public:
	void setRadius(int r) { radius = r; }

	void draw() { cout << "Draw Circle" << endl; }   // 가상 함수 재정의

};

void main()
{
	Shape* ps = new Rectangle();    // 업캐스팅
	ps->draw();                     // 결과: "Draw Rectangle"
	delete ps;                     // 메모리 해제

	Circle c;
	Shape& s = c;
	s.draw();                      // 결과: "Draw Circle"
}