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
		cout << "Draw Shape";
	}
};


class Rectangle : public Shape
{
private:
	int width, height;

public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }

	void draw() { cout << "Draw Rectangle"; }  // 상속받은 함수 재정의
};

void main()
{
	Shape* ps = new Rectangle();
	ps->setOrigin(10, 10); // 가능
	// ps->setWidth(100); 컴파일 오류
}