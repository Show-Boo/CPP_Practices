#include <iostream>
#include <cmath>
using namespace std;




void print_DOB(int year = 1900, int month = 1, int day = 1) {
	
	cout << "��������� " << year << "�� " << month << "�� " << day << "���Դϴ�." << endl;
}

int main() {


	print_DOB();

	int y;
	int m;
	int d;

	cout << "year �Է�: ";
	cin >> y;
	cout << "month �Է�: ";
	cin >> m;
	cout << "day �Է�: ";
	cin >> d;


	print_DOB(y,m,d);

	return 0;
	
}
