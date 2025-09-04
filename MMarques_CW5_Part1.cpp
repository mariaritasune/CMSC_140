#include <iostream>
using namespace std;

int main()
{
	int stars, 
		star2;

	stars = 1;
	star2 = 1;

	cout << "(i)\n";

		while (stars <= 10)
	{
		cout << "*";
		stars++;
	}

	cout << endl;
	cout << endl;
	cout << "(ii)\n";
	
	do
	{
		cout << "*";

		star2++;
	} while (star2 <= 20);

	cout << endl;
	cout << endl;
	cout << "(iii)\n";
	
	for (int rows = 1; rows <= 10; rows++)
	{
		for (int asterik = 1; asterik <= rows; asterik++)
			cout << "*";
			cout << endl;
	}
			cout << endl;
			cout << "(iv)" << endl;
	for (int rows = 1; rows <= 20; rows++)
	{
		for (int asterik = 1; asterik <= rows; asterik++)
			cout << "*";
			cout << endl;
	}
	cout << endl;
	cout << endl;
	cout << "(v)";
	cout << endl;
	for (int rows = 10; rows >= 1; rows--)
	{
		for (int asterik = rows; asterik >= 1; asterik--)
			cout << "*";
			cout << endl;
	}

	cout << endl;
	cout << endl;
	cout << "(vi)" << endl;
	
	for (int rows = 20; rows >= 1; rows--)
	{
		for (int asterik = rows; asterik >= 1; asterik--)
			cout << "*";
		cout << endl;
	}









	return 0;
}























