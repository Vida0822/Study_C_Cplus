//
//#include <iostream>
//
//using namespace std;
///*
//    연산자 오버로드
//
//        연산자를 operator 키워드를 이용하여 사용자의 필요에 따라 정의하는 방법. 
//        멤버함수 또는 전역함수를 이용하여 재정의
//*/
//
//class Point {
//public: 
//    int x, y; 
//    Point(int x, int y): x(x), y(y) {}
//
//    // 기본 
//    //int operator+(int n) {
//    //    return this + n; 
//    //}
//   
//    // 멤버함수 연산자 오버로드 
//    Point& operator+(Point& p) { // 함수임 
//        this->x += p.x; 
//        this->y += p.y; 
//        return *this; // 주소변수가 아닌 데이터를 보내야함 ('참조변수'는 객체 데이터 자체를 가리킴, 주소가 아니라)
//    }
//
//    Point& operator+(int a) {
//        this->x += a; 
//        this->y += a;
//        return *this; 
//    }
//}; 
//
//
//// 전역함수 연산자 오버로드 
////Point& operator+(int a, Point* p) {
//Point& operator+(int a, Point& p) {
//    p.x += a; 
//    p.y += a; 
//    return p; 
//}
//
//int main() {
//    Point p1(5, 3); 
//    Point p2(1, 2);
//
//    Point res = p1 + p2;  // <-> Point res = p1.operator+(p2);
//    cout << res.x << ", " << res.y << endl;  // 6, 5 
//
//    Point res2 = p1 + 3; 
//    Point res3 = p2 + 3; 
//    cout << res2.x << ", " << res2.y << endl;  // 9, 8  (p2 더한거 적용 O) 
//    cout << res3.x << ", " << res3.y << endl;  // 4, 5  (p2 더한거 적용 X) 
//   
//    //Point res4 = 3.operator+(p1);  // Error : int에는 멤버 함수를 추가할 수 없음 => 해결 : 전역 함수 만들기
//    Point res4 = operator+(3, p1);
//    cout << res4.x << ", " << res4.y << endl; // 12, 11 
//
//    return 0;
//}
