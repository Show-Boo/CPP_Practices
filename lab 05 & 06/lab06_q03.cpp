#include <iostream>

using namespace std;
int main()
{
	int n;
	int sum = 0;
	int i;

	cout << "number : ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
			continue;

		else if (i % 3 == 0)
			continue;

		else
			sum = sum + i;
		

	}

	cout << "sum : " << sum;



}