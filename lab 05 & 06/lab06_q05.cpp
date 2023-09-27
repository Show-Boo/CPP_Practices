#include <iostream>

using namespace std;


int gcd(int a, int b){
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}


int main()
{
	int x;
	int y;

	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;

	cout << "gcd(" << x << "," << y << ") = " << gcd(x, y);

}