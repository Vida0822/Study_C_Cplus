#include <iostream>

using namespace std;

template<class T>
class Point {
private:
    static T x;
public:
    void addT(T a) {
        this->x += a; 
    }
    void print() const {
        cout << x << endl; 
    }
};

// 템플릿 클래스의 static 변수도 외부에서 초기화 해줘야한다. 
template<class T>
T Point<T>::x = 0;  // 해결 : static 멤버 변수 초기화

int main() {
    Point<int> p1; 
    p1.addT(2);  // Error: static 멤버 초기화 X 
    p1.print(); 
    
    Point<int> p2; 
    p2.print(); // 2 : 이미 만들어진 <int> 클래스의 static 변수를 참조하기 때문

    Point<double> p3; 
    p3.print(); // 0 : 이때 <double> 클래스가 처음 만들어지기 때문
    p3.addT(10); 

    Point<double> p4;
    p4.print(); // 10 : 이미 만들어진 <double> 클래스의 static 변수를 참조하기 때문

    return 0;
}
