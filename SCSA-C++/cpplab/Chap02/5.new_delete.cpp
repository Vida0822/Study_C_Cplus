
#include <iostream>
#include <cstring>

using namespace std;

class Simple {
public:
    void print() {
        cout << "print : a : " << a << endl;
    }
protected:
private:
    int a = 10;
};

int main() {
    /*char* name = (char*)malloc(sizeof(char) * 10 + 1);
    free(name);*/

    char* name = new char[10 + 1];
    delete[] name;

    // 정적선언방식
    Simple s;
    s.print();
    // 동적선언방식
    Simple* sp = new Simple;
    sp->print();
    delete sp;
    return 0;
}
