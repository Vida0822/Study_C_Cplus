#include <iostream>

using namespace std;

//void print(const int& a) {
void print(int& a) {
    a++; 
    cout << "print a : " << a << endl; // 12 
}

int main() {
    const int a = 10; 
    //a = 20; //error 
    //int& b = a;  // error : b를 활용해 이름 바꿀 수 있기 때문
    int& b = const_cast<int&>(a); 
    b++; 

    cout << a << ", " << b << endl;  // 10, 11 : 참조변수를 통해 a(=b)를 11로 변경 -> 근데 a 메모리 값은 11이지만, a를 다시 읽지 않고 최초 상수인 10 출력

    print(const_cast<int&>(a)); 
    cout << "main a : " << a << endl; 
    return 0;
}
