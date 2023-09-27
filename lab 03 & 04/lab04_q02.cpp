#include <iostream>
#include <cmath>
using namespace std;




void print_DOB(int year = 1900, int month = 1, int day = 1) {
	
	cout << "생년월일은 " << year << "년 " << month << "월 " << day << "일입니다." << endl;
}

int main() {


	print_DOB();

	int y;
	int m;
	int d;

	cout << "year 입력: ";
	cin >> y;
	cout << "month 입력: ";
	cin >> m;
	cout << "day 입력: ";
	cin >> d;


	print_DOB(y,m,d);

	return 0;
	
}
