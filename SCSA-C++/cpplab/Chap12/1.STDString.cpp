#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "scsa";
    string str2 = "i like the ";
    printf("%u\n", str2);
    str2 = str2 + str1;
    printf("%u\n", str2);
    cout << str2 << endl;

    if (str2 == str1) {
        cout << "°°´Ù" << endl;
    }
    else {
        cout << "´Ù¸£´Ù" << endl;
    }
    cin >> str2;
    cout << str2 << endl;
    return 0;
}
