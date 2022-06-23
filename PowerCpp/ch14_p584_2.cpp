#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal() { cout << "Animal 생성자" << endl; }
	virtual ~Animal() { cout << "Animal 소멸자" << endl; }
	virtual void speak() { cout << "Animal Speak()" << endl; } // 가상함수
};

class Dog : public Animal
{
public:
	Dog() { cout << "Dog 생성자" << endl; }
	~Dog() { cout << "Dog 소멸자" << endl; }
	void speak() { cout << "왈왈" << endl; } // 재정의
};

class Cat : public Animal
{
public:
	Cat() { cout << "Cat 생성자 " << endl; }
	~Cat() { cout << "Cat 소멸자" << endl; }
	void speak() { cout << "야옹" << endl; } //재정의
};

void main()
{
	Animal* a1 = new Dog();
	a1->speak();
	delete a1;
	cout << endl;

	Animal* a2 = new Cat();
	a2->speak();
	delete a2;


	// 결과
	/*
	* Animal 생성자
	* Dog 생성자
	* 왈왈
	* Dog 소멸자
	* Animal 소멸자
	*
	* Animal 생성자
	* Cat 생성자
	* 야옹
	* Cat 소멸자
	* Animal 소멸자
	*/
}