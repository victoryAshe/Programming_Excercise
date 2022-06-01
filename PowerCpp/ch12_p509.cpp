#include <string>
using namespace std;

class Card
{
	string cardNumber;
	int month, year;
	string owner;
	string cvc;
	Card()
	{
		cardNumber = "0000 0000 0000 0000";
		month = 1; year = 1; 
		owner = "Unknown";
		cvc = "000";
	}
	Card(string num)
	{
		cardNumber = num;
		month = 1; year = 1;
		owner = "Unknown";
		cvc = "000";
	}
	Card(int month)
	{
		this->month = month;
		cardNumber = "0000 0000 0000 0000";
		year = 1;
		owner = "Unknown";
		cvc = "000";
	}

};