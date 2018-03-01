/* Main.cpp
Uses Convert.h .

This program uses Convert.h to convert a decimal number to a different base.

Team Members:
KE
Jeremy Mwangelwa 
LW

Class: Data Structures
College: California University of Pennsylvania
Date: 02/25/2016*/

#include "convert.h"
#include <iostream>
#include <string>


int decimal = 0, base = 0;

// Start of my changes - KE
int ErrorCatching = 0, tempValue;
bool badInput = true;

// End  of my changes - KE

using namespace std;

int main ()
{
	convert convert; //Create convert object
	

		while (badInput == true)
		{
			cout << endl;
			cout << "Enter the number to convert: ";
			cin >> tempValue;
			ErrorCatching = cin.rdstate();

			if (ErrorCatching != 0)
			{
				cout << "\nThere has been an input error\n";
				badInput = true;
				cin.clear();
				cin.ignore(30000, '\n');
			}
			else
			{
				badInput = false;
				decimal = tempValue;
			}
			
		}

		badInput = true;
		ErrorCatching = 0;
		cin.clear();
		cin.ignore(30000, '\n');

		while (badInput == true)
		{
			cout << "What base? Choose from 2 to 16: ";
			cin >> tempValue;
			ErrorCatching = cin.rdstate();

			if (ErrorCatching != 0)
			{
				cout << "\nThere has been an input error\n";
				badInput = true;
				cin.clear();
				cin.ignore(30000, '\n');
			}
			else
			{
				if ((tempValue < 2) || (tempValue > 16))
				{
					cout << "\nThere has been an input error\n";
					badInput = true;
					cin.clear();
					cin.ignore(30000, '\n');
				}
				else
				{
					badInput = false;
					base = tempValue;
					ErrorCatching = 0;
				}
			}
		}

		cout << convert.toBase(decimal, base) << endl; //Convert to base and output the string

		cout << "\nThe number to convert is\n";
		cout << decimal;
		cout << "\nthe base is\n";
		cout << base;
	system("PAUSE");
	return 0;


}