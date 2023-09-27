#include<iostream>
#include<iomanip>
#include <fstream>


using namespace std;
int main() {
	ofstream temp;
	temp.open("temp.txt");

	srand(time(NULL));

	for (int row = 0; row < 100; row++) {
		int num = rand() % 100;
		temp << num << " ";
		if (row % 10 == 9) {
			temp << endl;
		}
	}
	temp.close();
	return 0;
}