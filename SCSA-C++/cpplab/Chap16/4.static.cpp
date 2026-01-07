//#include <iostream>
//
//using namespace std;
//
//class Car {
//private:
//    int fuel;
//public:
//    Car(int fuel) :fuel(fuel) {}
//        void show() {
//        cout << "fuel : " << fuel << endl;
//    }
//};
//
//class Truck :public Car {
//private:
//    int weight;
//public:
//    Truck(int fuel, int weight) :Car(fuel), weight(weight) {}
//    void show() {
//        Car::show();
//        cout << "weight : " << weight << endl;
//    }
//};
//
//int main() {
//    // c style 
//    int a = 10, b = 20; 
//    double res = (double)a / (double)b; 
//    cout << res << endl; 
//
//    // static cast 
//    res = static_cast<double>(a) / static_cast<double>(b); 
//    cout << res << endl; 
//
//    int* p = &a; 
//    cout << *p << endl; 
//    float* pf = (float*)p;  // fullcasting 가능하지만 안전하지 않은 코드 
//    //float* pf1 = static_cast<float*>(p);  // 안전 X 
//
//    Car* c = new Truck(3, 100); 
//    Truck* t = static_cast<Truck*>(c); // 가상함수 존재와 상관없이 다운캐스팅 해줌 (안전성 보장 X) 
//
//    return 0;
//}
