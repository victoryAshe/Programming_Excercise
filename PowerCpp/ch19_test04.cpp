#include<iostream>
#include <string>
#include <vector>
#include <string>
using namespace std;

void main()
{
	string foods[7] = { "김밥" , "라면" , "고기만두" , "돈까스" , "김치만두" , "주먹밥" , "닭꼬치" };

	vector<string> revFood(&foods[0], &foods[7]);

	
	vector<string>::reverse_iterator rit;
	for (rit = revFood.rbegin(); rit != revFood.rend(); rit++)
		cout << *rit << endl;

		
}