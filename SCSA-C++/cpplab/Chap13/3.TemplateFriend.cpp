//#include <iostream>
//
//using namespace std;
//
//template <class T>
//class Point {
//private: 
//    int x, y; 
//public : 
//    Point(int x=0, int y=0) :x(x), y(y) {} // 기본 생성자 필요 X : 자동으로 (0, 0)
//    void print() {
//        cout << x << ", " << y << endl; 
//    }
//    Point<int> operator+(Point<int>& p1, Point<int>& p2) {
//        cout << "Point<int> operator+" << endl;
//        return Point<int>(p1.x + p2.x, p1.y + p2.y);
//    }
// 
//	  // friend 함수 정의 -> 이 함수(외부 함수)들에서 Point의 private 멤버(x, y)에 접근 가능 
//    friend Point<int> operator+(Point<int>& p1, Point<int>& p2); 
//    friend Point<double> operator+(Point<double>& p1, Point<double>& p2);
//    friend ostream& operator<<(ostream& o, Point<double>& p); 
//};
//
//Point<int> operator+(Point<int>& p1, Point<int>& p2) {
//    cout << "Point<int> operator+" << endl; 
//    return Point<int>(p1.x + p2.x, p1.y + p2.y); 
//}
//
//Point<double> operator+(Point<double>& p1, Point<double>& p2) {
//    cout << "Point<double> operator+" << endl;
//    return Point<double>(p1.x + p2.x, p1.y + p2.y);
//}
//
//ostream& operator<<(ostream& o, Point<double>& p) {
//    o << "[" << p.x << ", " << p.y << "]" << endl; 
//    return o;
//}
//
//int main() {
//    Point<int> p1(1, 3); 
//    Point<int> p2(5, 7);
//
//    Point<int> res = p1 + p2; 
//    res.print(); 
//
//    return 0;
//}
