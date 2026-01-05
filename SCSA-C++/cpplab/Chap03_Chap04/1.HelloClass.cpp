
//#include <iostream>
//#include <cstring>
//using namespace std;
///*
//    변수의 생명범위
//
//    지역변수 : 함수안에서 선언되어지는 변수
//    전역변수 : 전역에서 선언되어지는 변수
//    레지스터변수 : 레지스터영역에 선언되어지는 변수
//    const 변수 : 값을 변경하지 못하는 변수
//    static 변수 : 지역변수의 static 변수 : 함수가 끝나도 사라지지 안는변수
//                  전역변수의 static 변수 : 자신의 .c 파일에서만 사용할수 있는 변수  
//                  맴버변수의 static 변수 : 클래스의 변수로 사용되어 진다
//    ----- cpp ----
//    멤버변수 : 객체의 생명주기와 함께하는 변수
//
//    함수의 생명범위
//    
//    전역함수
//    ----- cpp ----
//    맴버함수    
//*/
//// 전역변수
//int gv = 10;
//// 전역함수
//void printGV() {
//    cout << gv << endl;
//}
//class Person {
//private:
//    // 맴버변수
//    int age = 5;
//public:
//    // 생성자 오버로드
//    Person() {
//        cout << "Person 생성자입니다" << endl;
//    }
//    // 생성자 오버로드
//    Person(int _age) {
//        cout << "Person age 생성자입니다" << endl;
//        age = _age;
//    }
//    // 맴버함수
//    void printAge() {
//        // 지역변수
//        string str = "살 입니다";
//        cout << age << str <<   endl;
//    }
//};
//
//int main(){
//    // 정적선언방식
//    Person p;
//    Person p1(9);
//    // 동적선언방식
//    Person* p2 = new Person;
//    Person* p3 = new Person();
//}
