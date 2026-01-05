#include <iostream>

using namespace std;

class Calc {
private : 
    int num;
public:
    Calc(int num=0) :num(num) {};
    Calc& add(int num) {
        this->num += num;
        return *this;
    }
    Calc& minus(int num) {
        this->num -= num;
        return *this;
    }
    Calc& printNum() {
        cout << "num : " << this->num << endl;
        return *this;
    }
};

int main() {
    Calc c(10);
    c.add(3).minus(4).add(5).printNum();
    return 0;
}
