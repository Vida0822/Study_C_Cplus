//
//#include <iostream>
//
//using namespace std;
//
///*
//상위클래스에서 정의된 함수를 하위클래스에서 다시 정의하는 기능
//함수의 virtual 라는 키워드를 통해 재정의된 함수에 대하여
//정적바인딩과 동적바인딩을 구현할 수 있다.
//*/
//
//class Person {
//public:
//    virtual void print() {
//        cout << "Student " << endl;
//    }
//};
//
//class Student : public Person {
//public:
//    void print() {
//        cout << "Student " << endl;
//    }
//};
//
//int main() {
//    Person* p = new Person();
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
