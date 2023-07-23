#include<iostream>
using namespace std;
// Calculator for the main process
int main()
{
	float num1, num2, sum, difference, product, quotient;
	cout << "Enter num1";
	cin >> num1;
	cout << "Enter num2";
	cin >> num2;
	sum = num1 + num2;
	difference = num1 - num2;
	product = num1 * num2;
	quotient = num1 / num2;
	cout << " The sum is" << sum << endl;
	cout << "The difference is" << difference << endl;
	cout << "The product is" << product << endl;
	cout << "The quotient is" << quotient << endl;
	system("pause");
	return 0;
}