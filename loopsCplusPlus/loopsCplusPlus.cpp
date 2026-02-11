#include <iostream>

using namespace std;

int main()
{
	/*
	Purpose is to scan 2 number and printing the values between these
	2 number which can be divide with 7 as an integer*/

	int start, end = 0;

	cin >> start >> end;
	cout << start << " " << end << endl;

	while (start <= end)
	{
		if (start % 7 == 0)
		{
			cout << start << " ";
		}
		start++;
	}
	return 0;
}