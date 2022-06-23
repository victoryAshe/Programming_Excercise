#include <iostream>
#include <string>
using namespace std;

class String
{
	char* s;

public:
	String(char* p) // 생성자
	{
		s = new char[strlen(p) + 1];
		strcpy(s, p);
	}

	~String()       // 소멸자
	{
		cout << "String() 소멸자" << endl;
		delete[] s;  // 배열에 할당된 메모리 해제
	}
};

class MyString : public String
{
	char* header;

public:
	MyString(char* h, char* p) : String(p) // 생성자
	{
		header = new char[strlen(h) + 1];
		strcpy(header, h);
	}

	~MyString()                           // 소멸자
	{
		cout << "MyString() 소멸자" << endl;
		delete[] header;
	}
};

void main()
{
	cout << "자식 클래스 포인터 이용" << endl;
	MyString* s1 = new MyString("/////", "Hello, World,,,,,,,,,,,");
	delete s1;     // 메모리를 해제해 소멸자가 호출되도록 함
	cout << endl;

	cout << "부모 클래스 포인터 이용" << endl;
	String* s2 = new MyString("*****", "Bye, World,,,^^~");
	delete s2;
}