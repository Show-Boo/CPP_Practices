#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string data = "���,���α׷���,����,����ǹٺ�,���뿪,õ���ǻ��,�����,��ü������";
    string key_word;

    cout << "Ű���� : ";
    cin >> key_word;
    cout << "�˻���� : ";

    string comma = ",";
    int location = 0;
    string word;

    while (1) {
        location = data.find(comma);
        if (location == string::npos) {
            if (data.find(key_word) != string::npos) {
                cout << data;
            }
            break;
        }

        word = data.substr(0, location);
        if (word.find(key_word) != string::npos) {
            cout << word << ",";
        }
        data = data.substr(location + 1);
    }
    return 0;

}