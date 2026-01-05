//#include <iostream>
//
//using namespace std;
///*
//    this
//        정의 : 멤버함수안에 자동으로 생성되어지는 포인터변수
//               this가 가지고 있는 객체의 주소는 맴버함수를 가지고 있는 객체이다
//*/
//class Simple {
//private:
//    int num;
//public :
//    Simple();
//    ~Simple();
//    Simple(int num);
//    void printNum();
//    Simple* getSimpleObject();
//};
//Simple* Simple::getSimpleObject() {
//    // self-return
//    return this;
//}
//Simple::Simple() {
//    cout << "simple 생성자" << endl;
//};
//Simple::~Simple() {
//    cout << "simple 소멸자" << endl;
//};
//Simple::Simple(int num) :num(num) {
//    //this->num = num;
//};
//void Simple::printNum() {
//    cout << "num : " << this->num << endl;
//}
//
//int main() {
//    /*Simple* s = new Simple();
//    cout << sizeof(s) << endl;
//    s->printNum();
//    s->getSimpleObject()->getSimpleObject()->getSimpleObject();
//    delete s;*/
//
//    Simple p[3];
//    cout << sizeof(p) << endl;
//
//    Simple* pp[3];
//    pp[0] = new Simple();
//    pp[1] = new Simple();
//    pp[2] = new Simple();
//
//    delete pp[0];
//    delete pp[1];
//    delete pp[2];
//    return 0;
//}
