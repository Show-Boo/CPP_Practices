#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int column = 1, row = 1;
	while (column <= 10) {
		while (row <= 10) {
			
			if (row == column) {
				cout << setw(4) << 1;
				row++;
			}
			else {
				cout << setw(4) << 0;
				row++;
			}
		}
		cout << endl;
		column += 1;
		row = 1;
		continue;
	}
	return 0;
}
