//
//#include <iostream>
//
//using namespace std;
//
//// 순수 가상 함수 
///*
//    함수의 선언부만 구현하고 재정의를 통해 구현부를 구현하게 만드는 기법
//    순수가상함수를 가지고 있는 클래스는 객체화될 수 없다. 
//*/
//
//class Person {
//public:
//    virtual void print()=0;  // 순수 가상 함수 
//};
//
//class Student : public Person {
//public:
//    void print() {
//        cout << "Student " << endl;  // 오버라이드 필수 
//    }
//};
//
//int main() {
//    //Person* p = new Person(); // 컴파일 에러 
//    p->print();
//    Student* s = new Student();
//    s->print();
//
//    Person* p1 = new Student();
//    p1->print();
//
//    delete p;
//    delete s;
//}
