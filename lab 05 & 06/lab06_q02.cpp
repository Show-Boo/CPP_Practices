#include <iostream>

using namespace std;
int main()
{
	int sum = 0;
	int n;
	int i;

	cout << "number : ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		sum = sum + i;
	}


	cout << "Sum of 1 to " << n << " = " << sum;

}