//
//#include <iostream>
//
//using namespace std;
//
//template<class T> // class = typename 
//class Point {
//private:
//    T data; 
//public : 
//   Point(T data):data(data){}
//   void print() const {
//       cout << data << endl;
//   }
//};
//
//template<> 
//class Point<char*> {
//private:
//    char* data;
//public:
//    Point(const char* data) :data(data) {
//        this->data = new char[strlen(data) + 1];
//        strcpy(this->data, data); 
//    }
//    ~Point() { // new 로 동적할당 해주었으므로 소멸자로 메모리 해제 해줘야함 
//        delete[] this->data; 
//    }
//    void print() const {
//        cout << "char& print" << endl;
//        cout << data << endl;
//    }
//};
//
//
//int main() {
//    Point p(3); 
//    p.print(); 
//
//    Point p2("hello");
//    p2.print();
//
//    return 0;
//}
