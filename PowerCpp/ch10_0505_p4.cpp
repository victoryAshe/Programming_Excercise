#include <iostream>
using namespace std;

class MyData
{
public:

	MyData(int nParam)
	{
		m_pnData = new int;
		*m_pnData = nParam;
	}

	MyData(MyData& b)
	{
		m_pnData = new int;
		*m_pnData = b.getData();

	}

	~MyData()
	{
		delete m_pnData;
	}
	int getData()
	{
		return *m_pnData;
	}
	void setData(int d)
	{
		*m_pnData = d;
	}
private:
	int* m_pnData;
};

int m()
{
	MyData a(10);
	MyData b(a);
	a.setData(20);

	cout << a.getData() << endl;
	cout << b.getData() << endl;
	return 0;
}
