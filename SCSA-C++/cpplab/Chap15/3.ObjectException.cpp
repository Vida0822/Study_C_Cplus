
#include <iostream>

using namespace std;

class ExA {
public :
    void print() {
        cout << "ExA" << endl; 
    }
};

class ExB : public ExA{
public:
    void print() {
        cout << "ExB" << endl;
    }
};

class ExC : public ExB {
public:
    void print() {
        cout << "ExC" << endl;
    }
};

void ExFunction(int ex) {
    if (ex == 1) throw ExA();
    else if (ex == 2) throw ExB(); 
    else if (ex == 3) throw ExC(); 
}

int main() {
    try {
        ExFunction(2); 
        // 1~3 모두 exA() 호출됨 : 상속 관계이기 때문에 ExB, ExC 모두 ExA라는 질문에 true => catch문은 하위 클래스부터
    }
    //catch (ExA& e) {
    //    e.print(); 
    //}
    //catch (ExB& e) {
    //    e.print();
    //}
    //catch (ExC& e) {
    //    e.print();
    //}
    catch (ExC& e) {
        e.print();
    }
    catch (ExB& e) {
        e.print();
    }
    catch (ExA& e) {
        e.print();
    }
}
