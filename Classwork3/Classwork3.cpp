// Classwork3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	cout << "rolling dice..\n";

	srand(time(0));

	int d1 = (rand() % (6 - 0) + 1);
	int d2 = (rand() % (6 - 0) + 1);
	
	cout << "D1 = " << d1 << " D2 = " << d2 << endl;
}

