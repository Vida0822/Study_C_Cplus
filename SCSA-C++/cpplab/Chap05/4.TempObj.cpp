#include <iostream>

using namespace std;

class Temp {
private:
    int num;
public:
    Temp(int num) :num(num) { cout << "持失切" << endl; };
    ~Temp() { cout << "社瑚切" << endl; };
    void print() { cout << "num : " << num << endl; }
};
int main() {
    Temp(100);
    cout << "-----------------------------" << endl;
    Temp(200).print();
    cout << "-----------------------------" << endl;
    return 0;
}
