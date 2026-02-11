#include <iostream>

using namespace std;

int main()
{
	/*
	do
	{
		do some processes (at first iteration, do it even if condition is false inside while.)
	} while (condition);
	*/
	int password = 1234;
	int input;

	do
	{
		cout << "Enter The password: ";
		cin >> input;

	} while (input != password);

	cout << "Correct Password";

	return 0;
}