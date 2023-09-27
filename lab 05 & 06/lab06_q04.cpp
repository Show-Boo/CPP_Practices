#include <iostream>

using namespace std;
int main()
{
	int n;
	int i;

	while (true) {
		cout << "단 수를 입력하세요: ";
		cin >> n;

		if (n >= 1 && n <= 9)
		{
			for (i = 1; i <= 9; i++)
				cout << n << " * " << i << " = " << n * i << endl;
			cout << endl;
			continue;

		}
		else if (n == -1) {


			cout << "종료합니다.";
			break;
		}

		else {
			cout << "1부터 9까지의 정수를 입력해주세요." << endl;
			cout << endl;
		}
		continue;

		return 0;

	}
}