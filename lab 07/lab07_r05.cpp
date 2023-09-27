#include<iostream>
#include<iomanip>
#include <fstream>
#include <string>


using namespace std;
int main() {
	char cha;
	ifstream input("input.txt");
	ofstream output("output.txt");

	int num;
	cout << "length = ";
	cin >> num;


	int cur = 0;
	while (input.get(cha)) {
		if (cha != '\n') {
			output.put(cha);
			cur++;
			if (cur % num == 0) {
				output.put('\n');
			
			}
		}
	}
	input.close();
	output.close();
	return 0;


}