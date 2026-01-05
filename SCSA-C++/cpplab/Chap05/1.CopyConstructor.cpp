//#include <iostream>
//
//using namespace std;
///*
//    복사생성자
//    호출시점
//        1) 객체를 이용하여 객체를 생성할때
//        2) 함수의 인자로 객체를 전달할때
//        3) 함수의 리턴으로 객체를 전달할때
//*/
//class Simple {
//private:
//    
//public:
//    int num1, num2;
//    Simple(int num1 = 0, int num2 = 0) :num1(num1), num2(num2) {
//        cout << "Simple 생성자" << endl;
//    }
//    // 복사생성자
//    Simple(const Simple& copy):num1(copy.num1), num2(copy.num2) {
//        cout << "Simple 복사 생성자" << endl;
//
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
//int main(){
//    Simple s1(10, 20);
//    
//    Simple s2 = s1;
//    //Simple s2(s1);
//
//    s1.num1 = 100;
//    s1.print();
//    s2.print();
//
//    Simple res = globalPrint(s1);
//
//}
