#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
	int x, y;

public:
	// 가상 함수 정의
	virtual void draw() { cout << "Draw Shape" << endl; }
	
	void setOrigin(int x, int y)
	{
		this->x = x; this->y = y;
	}
};

class Rectangle : public Shape
{
private:
	int width, height;

public:
	void setWidth(int w) { width = w; }
	void setHeight(int h) { height = h; }

	// 재정의
	void draw() { cout << "Draw Rectangle" << endl; }
};

class Circle : public Shape
{
private: 
	int radius;

public:
	void setRadius(int r) { radius = r; }

	// 재정의
	void draw() { cout << "Draw Circle " << endl; }
};


class Triangle : public Shape
{
private:
	int base, height; // base: 밑변 길이

public:
	// 재정의
	void draw() { cout << "Draw Triangle" << endl; }
};

class Parallelogram : public Shape
{
public:
	void draw() { cout << "Draw Parallelogram " << endl; }
};

void main()
{
	Shape* arrayOfShapes[4];

	arrayOfShapes[0] = new Rectangle();
	arrayOfShapes[1] = new Circle();
	arrayOfShapes[2] = new Triangle();
	arrayOfShapes[3] = new Parallelogram();

	// 동적 바인딩에 의해 서로 다른 draw()가 호출됨!
	for (int i = 0; i < 4; i++)
		arrayOfShapes[i]->draw(); 

	// 결과
	/*
	* Draw Rectangle
	* Draw Circle
	* Draw Triangle
	* Draw Parallelogram
	*/

}