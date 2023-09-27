#include <iostream>
#include <cmath>
using namespace std;

double get_number() {
	double num;
	cout << "Enter the number: ";
	cin >> num;
	return num;
}

int main() {
	double x, y;
	x = get_number();
	y = get_number();
	cout << "Rounding up number of " << x << ": " << ceil(x) << endl;
	cout << "Rounding down number of " << x << ": " << floor(x) << endl;
	cout << "Rounding number of " << x << ": " << round(x) << endl;
	cout << "Maximum number between " << x << "and " << y << ": " << max(x,y) << endl;
	cout << y << "-th root of " << x << ": " << pow(x, 1/y) << endl;
	cout << "|" << x << " - " << y << " | = " << abs(x - y) << endl;

	return 0;
}