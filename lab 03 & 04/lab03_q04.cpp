#include <iostream>
#include <cmath>
using namespace std;

void applePrice(int a = 1000) {
	cout << "Price of an apple is " << a << endl;
}
// default augment Áß¿ä!
int main() {
	int x = 1500;
	applePrice(x);
	int y = 500;
	applePrice(y);
	int z = 1000;
	applePrice(z);

	applePrice();// default augments
	return 0;
}