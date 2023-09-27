#include<iostream>
#include<iomanip>
#include <fstream>
#include <string>


using namespace std;
int main() {
	string line;
	ofstream output("output.txt");
	ifstream input1("input1.txt");
	ifstream input2("input2.txt");

	if (input1.is_open()) {
		while (getline(input1, line)) {
			output << line << endl;
		}
		input1.close();
	}

	output << endl;

	if (input2.is_open()) {
		while (getline(input2, line)) {
			output << line << endl;
		}
		input2.close();
	}


	output.close();

	return 0;


}