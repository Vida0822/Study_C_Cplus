//
//#include <iostream>
//
//using namespace std;
///*
//    전치 단항 연산자 오버로드 
//*/
//
//class Point {
//private: 
//
//public:
//    int x, y; 
//    Point(int x, int y) : x(x), y(y) {}; 
//
//    // 멤버함수 
//    // 전치단항 연산자 오버로드 : 인자에 아무것도 안들어감 
//    //Point& operator++() { 
//    //    cout << "operator++" << endl;
//
//    //    this->x++; 
//    //    this->y++; 
//    //    return *this; 
//    //}
//};
//
//// 전역함수 전치단항 연산자 오버로드 : 인자로 객체 참조 변수 들어감 
//Point& operator++(Point& p) {
//    p.x++;  // 참조변수는 '->' 가 아니라 '.' 로 멤버 참조
//    p.y++; 
//    return p; 
//}
//
//
//void print(Point& p) {
//    cout << p.x << ", " << p.y << endl; 
//}
//
//int main() {
//    int a = 10; 
//    Point p(1, 2); 
//
//    Point ret = ++p; // Complie Error : 같은 연산자를 두번 정의해서 충돌 
//    print(ret);  // 2, 3 
//
//    return 0;
//}
