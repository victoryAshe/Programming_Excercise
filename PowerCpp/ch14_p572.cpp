// p570의 확장.
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

	// 각 도형을 화면에 그리는 함수(그래픽 사용 안하므로 그냥 print만 해줄 예정)
	// ->  특정 도형이 결정되지 않은 상태이므로 기능 구현 X
	void draw()
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

	void draw() { cout << "Draw Rectangle" << endl; }  // 상속받은 함수 재정의
};

class Circle : public Shape
{
private:
	int radius;

public:
	void setRadius(int r) { radius = r; }

	void draw() { cout << "Draw Circle" << endl; }   // 상속받은 함수 재정의

};

void main()
{
	Shape* ps = new Rectangle();    // 업캐스팅
	ps->setOrigin(10, 10);          // 가능
	ps->draw();                     // 결과: "Draw Shape"

	((Rectangle*)ps)->setWidth(100);// 다운캐스팅, Rectangle::setWidth() 호출

	Circle c;
	Shape& s = c;
	s.setOrigin(10, 10);
	s.draw();                      // 결과: "Draw Shape"
	
	((Circle*)ps)->setRadius(5);   // 새로운 Circle 객체 포인터 ps를 만들어 Circle 메소드 호출
	ps->draw();                    // 결과: "Draw Shape"

	delete ps;                     // 메모리 해제
}