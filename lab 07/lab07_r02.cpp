#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string data = "사랑,프로그래밍,의자,사랑의바보,영통역,천년의사랑,냉장고,객체지향사랑";
    string key_word;

    cout << "키워드 : ";
    cin >> key_word;
    cout << "검색결과 : ";

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