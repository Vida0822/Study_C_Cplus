#include <iostream>
#include <cstdio>
// 참조변수의 등장
using namespace std;

int main() {
    int a = 10;
    printf("%u %u\n", a, &a);
    int b = a;
    printf("%u %u\n", b, &b);

    int& c = a;
    printf("%u %u %u\n", c, &c, &a);
    a = 11;
    printf("%u\n", c);
    int& d = a;
    // 참조변수는 선언과동시에 기본변수를 매칭해주어야 한다
    //int& e ;

    int arr[] = { 1,3,5 };
    int& a1 = arr[0];
    int& a2 = arr[1];
    int& a3 = arr[2];

    arr[0] = 11;
    cout << a1 << endl;

    a1 = 12;
    cout << arr[0] << endl;

    return 0;
}
