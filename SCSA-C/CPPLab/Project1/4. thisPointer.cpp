
#include <iostream>

using namespace std;

class Simple {
private:
    int num; 
public: 
    // 선언 
    Simple() {}; 
    Simple(int _num) : num(_num) {}; 
    void printNum(); 
};

// 구현 
Simple::Simple() {}; 
Simple::Simple(int _num) {}
void Simple::printNum() {
    cout << "num:" << num << endl; 
}

int main() {
    cout << "Hello World!\n";
    return 0;
}
