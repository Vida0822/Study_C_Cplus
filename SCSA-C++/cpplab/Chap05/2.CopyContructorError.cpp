#include <iostream>

using namespace std;
/*
    얕은복사의 문사의 문제가 발생할수 있게 때문에 
    객체의 생성자에서 한 작업이 있다면 
    복사생성자를 구현하여 같은 작업을 구현하셔야 합니다 
*/
//class Simple {
//private:
//    char* name;
//public:
//    int num1, num2; 
//    Simple() {
//        
//    }
//
//    Simple(char*name,  int num1 = 0, int num2 = 0) :  num1(num1), num2(num2) {
//        cout << "Simple 생성자" << endl;
//        int len = strlen(name);
//        this->name = new char[len + 1];
//        strcpy(this->name, name);
//    }
//    ~Simple() {
//        cout << "Simple 소멸자" << endl;
//        delete[] this->name;
//    }
//
//    // 복사생성자
//    Simple(const Simple& copy) :num1(copy.num1), num2(copy.num2) {
//        cout << "Simple 복사 생성자" << endl;
//        int len = strlen(name);
//        this->name = new char[len + 1];
//        strcpy(this->name, name);
//    }
//    void print() {
//        cout << "num1 : " << num1 << " num2 : " << num2 << endl;
//    }
//};
//
//Simple globalPrint(Simple s) {
//    return s;
//};
//
//int main() {
//    char name[10] = "홍길동";
//    Simple s1(name, 10, 20);
//
//    Simple s2 = s1;
//    //Simple s2(s1);
//
//    /*s1.num1 = 100;
//    s1.print();
//    s2.print();
//
//    Simple res = globalPrint(s1);*/
//
//}
