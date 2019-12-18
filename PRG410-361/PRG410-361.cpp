// PRG410-361.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Write a program that accepts as input the mass, in grams, and density, in grams per cubic centimeters,
and outputs the volume of the object using the formula: volume = mass / density.

Format your output to two decimal places.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double density, mass;

	cout << fixed << showpoint << setprecision(2);
	cout << "Enter the mass (in grams) of an object: ";
	cin >> mass;
	cout << endl;

	cout << "Enter the density (in in grams per cubic cm) of an object: ";
	cin >> density;
	cout << endl;

	cout << "The volume of the object is: " << mass / density << endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
