#include<iostream>
using namespace std;
int main() {
	int num;
	do {
		cout << "Enter the number (0, 10]: ";
		cin >> num;
		if (num > 10) {
			continue;
		}
		else if (num < 1) {
			continue;
		}
		else {
			break;
		}
	} while (true); //¹Ýµå½Ã ¼¼¹ÌÄÝ·Ð Âï¾îÁÜ
	cout << "Success!" << endl;
	return 0;
}

