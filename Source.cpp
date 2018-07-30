#include <iostream>
#include <conio.h>
using namespace std;

void subtotal(float String[], int SIZE);

void main()
{
	const int SIZE = 5;
	float String[SIZE] = { 0 };

	cout << "Please Enter Values In String:- " << endl << endl;
	for (int i = 0; i<SIZE; i++)
	{
		cout << "Please Enter The Value For " << i + 1 << " Cell:- ";
		cin >> String[i];
	}
	cout << endl << endl << endl;
	subtotal(String, SIZE);

	_getch();
}

void subtotal(float String[], int SIZE)
{
	for (int k = 1; k<SIZE; k++)
	{
		String[k] = String[k] + String[k - 1];
	}
	cout << "The Values Of String Are Now:- " << endl << endl;
	for (int j = 0; j<SIZE; j++)
	{
		cout << "The Value Of Cell " << j + 1 << " Is Now:- ";
		cout << String[j] << endl;
	}
}