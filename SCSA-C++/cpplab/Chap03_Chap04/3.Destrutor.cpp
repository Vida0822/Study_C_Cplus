//#include <iostream>
//#include <cstring>
//using namespace std;
//class Person {
//private:
//    char* name;
//    int age = 5;
//public:
//    /*Person() {
//        cout << "Person 생성자입니다" << endl;
//    }*/
//    // 생성자초기화를 이용하는경우 대입연산횟수 줄일수 있다 
//    Person(const char* _name, int _age = 10) :  age(_age) {
//        cout << "Person age 생성자입니다" << endl;
//        name = new char[sizeof(_name) + 1];
//        strcpy(name, _name);
//        //age = _age;
//    }
//    
//    // 소멸자
//    ~Person() {
//        cout << "Person 소멸자입니다" << endl;
//        delete[] name;
//    }
//    void printPerson() {
//        string str = "살 입니다";
//        cout << name << ", "<< age << str << endl;
//    }
//};
//
//int main() {
//    // 정적선언방식
//    Person p("둘리");
//    p.printPerson();
//    Person p1("도우너", 9);
//    p1.printPerson();
//    // 동적선언방식
//    Person* p2 = new Person("또치",7);
//    p2->printPerson();
//    Person* p3 = new Person("마이콜",28);
//    p3->printPerson();
//    delete p2;
//    delete p3;
//}
