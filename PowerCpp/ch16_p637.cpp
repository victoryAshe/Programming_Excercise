#include <iostream>
using namespace std;
int dividePizza(int pizza_slices, int persons);

void main()
{
	// ## 공통 ##
	int pizza_slices = 0;
	int persons = -1;
	int slices_per_person = 0;


	// ## 예외 처리 ##
	try
	{
		cout << "피자 조각수를 입력하시오: ";
		cin >> pizza_slices;

		cout << "사람 수를 입력하시오: ";
		cin >> persons;

		slices_per_person = dividePizza(pizza_slices, persons);
		cout << "한 사람 당 피자는 " << slices_per_person << "조각입니다." << endl;
	}
	catch (int e)
	{
		cout << "사람이 " << e << "명입니다." << endl;
	}

}

int dividePizza(int pizza_slices, int persons)
{
	try 
	{
		if (persons == 0) throw persons;     // 예외 발생
		return pizza_slices / persons;
	}
	catch (int e)
	{
		cout << "사람이 " << e << "명입니다(dividePizza)." << endl;
		throw;
	}

}