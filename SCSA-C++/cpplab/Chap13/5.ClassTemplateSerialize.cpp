//#include <iostream>
//#include <cstring>
//using namespace std;
//
//template<typename T>
//class Point {
//private :
//    T data;
//public:
//    Point(T data) : data(data) {}
//    void print() const {
//        cout << "T print" << endl;
//        cout << data << endl;
//    }
//};
// 
// 템플릿 특수화
//template<>
//class Point<const char*> {
//private:
//    char* data;
//public:
//    Point(const char* data)  {
//        this->data = new char[strlen(data) + 1];
//        strcpy(this->data, data);
//    }
//    ~Point() {
//        delete[] this->data;
//    }
//    void print() const {
//        cout << "char* print" << endl;
//        cout << data << endl;
//    }
//};
//
//int main() {
//    Point<int> p1(3);
//    p1.print();
//    Point<const char*> p("hello");
//    p.print();
//    return 0;
//}
