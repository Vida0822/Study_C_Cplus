//
//#include <iostream>
//
//using namespace std;
///*
//    후치 단항 연산자 오버로드
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
//    // 후치단항 연산자 오버로드 : 인자에 'int'
//    const Point& operator++(int) { 
//        cout << "후치 멤버 operator++" << endl;
//
//        //this->x++;  // 이렇게하면 먼저 연산을 해버리기 때문에 전치 연산자와 똑같음
//
//        const Point tmp(this->x, this->y);  // 현재값 tmp에 저장 
//        this->x++;
//        this->y++; 
//        return tmp;  // 넘기는건 증가 전 값 
//    } 
//};
//
//// 전역함수 후치단항 연산자 오버로드 : 인자로 객체 참조 변수 & 'int' 들어감 
////const Point& operator++(Point& p, int) {
////    cout << "후치멤버 operator++" << endl; 
////    const Point tmp(p.x, p.y); 
////    p.x++; 
////    p.y++; 
////    return tmp; 
////}
//
//
//void print(Point& p) {
//    cout << p.x << ", " << p.y << endl;
//    cout.operator<<(p.x).operator<<(",")<<(p.y)
//}
//
//int main() {
//    int a = 10;
//    Point p(1, 2);
//    Point ret = p++; // 1, 2
//    print(ret); 
//
//    //Point ret = p++++; // 1, 2  => Compile Error 
//    //print(ret); // -858993459, -858993459 => 연산자에 const 적용해줘야함 
//
//    return 0;
//}
