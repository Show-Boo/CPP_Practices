#include <iostream>

using namespace std;
int main()
{
	int n;
	int i;

	while (true) {
		cout << "�� ���� �Է��ϼ���: ";
		cin >> n;

		if (n >= 1 && n <= 9)
		{
			for (i = 1; i <= 9; i++)
				cout << n << " * " << i << " = " << n * i << endl;
			cout << endl;
			continue;

		}
		else if (n == -1) {


			cout << "�����մϴ�.";
			break;
		}

		else {
			cout << "1���� 9������ ������ �Է����ּ���." << endl;
			cout << endl;
		}
		continue;

		return 0;

	}
}