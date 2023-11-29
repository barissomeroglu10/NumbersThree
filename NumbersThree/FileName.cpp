/*
In this code we will get 3 numbers from the user and will check which number is the biggest.
(Have not checked situation for equal!)

Developer: Bar?? Somero?lu
Date: 30.11.23 / 00.30 a.m.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	double Number1, Number2, Number3;

	cout << "Please Enter First Number: ";
	cin >> Number1;

	cout << "Please Enter Second Number: ";
	cin >> Number2;

	cout << "Please Enter Third Number: ";
	cin >> Number3;

	cout << "\n";

	if (Number1 > Number2 && Number1 > Number3)
	{
		cout << "First Number is the Biggest" << endl;
	}

	else if (Number2 > Number1 && Number2 > Number3)
	{
		cout << "Second Number is the Biggest" << endl;
	}

	else if (Number3 > Number1 && Number3 > Number2)
	{
		cout << "Third Number is the Biggest" << endl;
	}




	return 0;
}