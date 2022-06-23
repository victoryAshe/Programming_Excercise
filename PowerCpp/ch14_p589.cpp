#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
	int x, y;

public:
	void setOrigin(int x, int y) { this->x = x; this->y = y; }

	//순수 가상 함수 정의!
	virtual void draw() = 0; // 도형이 결정되지 않아 그릴 수 없으므로 이 형태로 선언하는 것이 바람직함
};

class Rectangle : public Shape
{
private:
	int width, height;

public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }

	// 순수 가상 함수의 구현!
	void draw()
	{
		cout << "Draw Rectangle" << endl;
	}
};

void main()
{
	Shape* ps = new Rectangle();
	ps->draw(); // 재정의된 draw() 호출!

	delete ps;
}