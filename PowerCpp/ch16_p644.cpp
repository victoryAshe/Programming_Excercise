#include <iostream>
using namespace std;

class ParentException
{
public:
	void display() { cout << "ParentException" << endl; }
};

class ChildException : public ParentException
{
public:
	void display() { cout << "ChildException" << endl; }
};

void main()
{
	try {
		throw ChildException();
	}
	catch (ParentException& e)
	{
		e.display();
	}
	catch (ChildException& e)
	{
		e.display();
	}
}