﻿#include <iostream>
using namespace std;
/*
    객체간의 관계는 상속과 포함관계가 존재하고
    상속을 is-a 관계
    포함을 has-a 관계라 한다

*/
class Simple {
private:
    int num1 = 10;
protected:
    int num2 = 11;
public:
    int num3 = 12;
    Simple() {
        cout << "Simple 생성자" << endl;
    }
    ~Simple() {
        cout << "Simple 소멸자" << endl;
    }
};

class SubSimple : public Simple {
public:
    void print() {
        //cout << this->num1 << "," << this->num2 << "," << this->num3 << endl;
    }
    SubSimple() {
        cout << "SubSimple 생성자" << endl;
    }
    ~SubSimple() {
        cout << "SubSimple 소멸자" << endl;
    }

};

int main()
{
    //Simple p;
    cout << "--------------------" << endl;
    SubSimple sp;
}

