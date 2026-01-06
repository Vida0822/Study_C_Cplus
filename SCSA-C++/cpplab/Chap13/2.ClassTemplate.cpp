#include <iostream>

using namespace std;

template<class T> 
class Point { 
private:
    T x, y; 
public:
    Point(T x, T y) :x(x), y(y) {}
    void print() const { // print(const Point* this) : 이 함수 안에서는 객체의 멤버 변수를 변경할 수 없다
        cout << "x : " << x << ",  y : " << y << endl; 
    }
};

template<class T>  // 1. 
Point<T> // 2. 
::Point(T x, T y) :x(x), y(y) { 
    // Error: 이건 클래스가 아니라 클래스를 찍어내는 틀 (실제로 포인터 클래스는 존재 X : 호출할 때 생성됨)
    //      => 존재하지 않는 생성자 함수를 참조하기 때문에 오류 발생
    //      => 해결: template 명시해줘야함
}

int main() {
    Point<int> p(3, 4);  // 이거 호출될 때 클래스 생성 
    p.print();  // x : 3,  y : 4

    Point<double>p2(3.14, 1.23);  // 이거 호출될 때 클래스 생성 
    p2.print();  // x : 3.14,  y : 1.23
    return 0;
}
