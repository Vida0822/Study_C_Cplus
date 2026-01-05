//#include <iostream>
//
//using namespace std;
//class Point;
//class PointOperator;
//
//class PointOperator {
//public:
//    Point addPoint(Point& p1, Point& p2);
//    Point minusPoint(Point& p1, Point& p2);
//};
//
//class Point {
//private:
//    int x, y;
//    friend Point PointOperator::addPoint(Point& p1, Point& p2);
//    friend Point PointOperator::minusPoint(Point& p1, Point& p2);
//    // 전역함수의 프랜드
//    friend void printPoint(const Point& p);
//public:
//    Point(int x, int y);
//    void print() {
//        cout << x << ", " << y << endl;
//    }
//};
//// 전역함수
//void printPoint(const Point& p)  {
//    cout << p.x << ", " << p.y << endl;
//}
//
//Point::Point(int x, int y):x(x),y(y) {};
//
//Point PointOperator::addPoint(Point& p1, Point& p2) {
//    return Point(p1.x+p2.x, p1.y+p2.y);
//}
//
//Point PointOperator::minusPoint(Point& p1, Point& p2) {
//    return Point(p1.x - p2.x, p1.y - p2.y);
//}
//
//int main() {
//    Point a(3, 5);
//    Point b(4, 2);
//    PointOperator op;
//    Point res = op.addPoint(a, b);
//    res.print();
//    res = op.minusPoint(res, a);
//    res.print();
//    cout << "Hello World!\n";
//
//    printPoint(res);
//    return 0;
//}
