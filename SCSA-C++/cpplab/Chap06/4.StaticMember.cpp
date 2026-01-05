#include <iostream>

using namespace std;

/*
    static
        변수 :  전역 : 
                지역 : 
                객체 : 객체의변수가 아니라 클래스의 변수로 작동된다
        
        함수 :  객체 : static 맴버변수와 static 맴버함수만 접근할 수 있다
*/
class Simple {
public:
    int oval = 10;
    static int sval;

    void printO() {
        oval++;
        sval++;
    }
    static void printS() {
        sval++;
        // 객체맴버변수나 객체맴버함수를 접근할수 없다
        // oval++;
        // printO();
    }
};
// static 맴버변수는 클래스 밖에서 초기화 하여야 한다
int Simple::sval = 20;

int main() {
    Simple p1;
    Simple p2;
    p1.oval++;
    p1.sval++;
    cout << p2.oval << endl;
    cout << p2.sval << endl;
    cout << Simple::sval << endl;

    p1.printO();
    p1.printS();

    Simple::printS();
    return 0;
}
