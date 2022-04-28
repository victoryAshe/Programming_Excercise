#include<string>
#include<iostream>
using namespace std;

class Employee {
	string name;
	int age, salary, years;

public:
	void setEmp();
	string getName();	int getAge();	int getSalary(); 	int getYears();
	void printEmp();
};

void Employee::setEmp()
{
	cout << "직원의 이름, 나이, 월급, 연차를 차례로 입력하시오: ";
	cin >> name >> age >> salary >> years;
}
string Employee::getName() { return name; }
int Employee::getAge() { return age; }
int Employee::getSalary() { return salary; }
int Employee::getYears() { return years; }

void Employee::printEmp() {
	cout << "이름: " << name << " | 나이 : " << age << " | 월급 : " << salary
		<< " | 연차 : " << years << endl;
}

void main() {
	Employee emp = Employee();
	emp.setEmp();
	emp.printEmp();

}
