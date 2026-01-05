//
//#include <iostream>
//
//using namespace std;
//
//// 가상 소멸자 
///*
//    함수의 선언부만 구현하고 재정의를 통해 구현부를 구현하게 만드는 기법
//*/
//
//class Person {
//public:
//    Person() { cout << "Person" << endl; }
//    //~Person() { cout << "Person" << endl; } // Student 소멸되어도 Person 소멸 안됨 
//    virtual ~Person() { cout << "Person" << endl; } // virtual 붙여줘야 같이 소멸됨 
//};
//
//class Student : public Person {
//public:
//    Student() { cout << "Student" << endl; }
//    ~Student() { cout << "Student" << endl; }
//};
//
//int main() {
//    Person* s = new Student();
//    delete s; // Person 생성 -> Student 생성 -> Student 소멸 -> Person 소멸 
//}
