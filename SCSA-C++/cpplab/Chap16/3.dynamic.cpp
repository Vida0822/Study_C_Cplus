//#include <iostream>
//
//using namespace std;
//
//class Car {
//private:
//    int fuel; 
//public:
//    Car(int fuel) :fuel(fuel) {}
//    virtual  // 해결 
//        void show(){
//        cout << "fuel : " << fuel << endl ; 
//    }
//};
//
//class Truck :public Car {
//private:
//    int weight; 
//public: 
//    Truck(int fuel, int weight):Car(fuel), weight(weight){}
//    void show() {
//        Car::show(); 
//        cout << "weight : " << weight << endl;
//    }
//};
//
//int main() {
//    // Car* c = new Car(3) ; 
//    //Truck* t = (Truck*)c; // Bad! 
//
//    Car* c1 = new Truck(3, 100);   // upcasting (자동)
//    Truck* t1 = dynamic_cast<Truck*>(c1); // Error) 객체가 가상함수 가지고 있는 경우에만 지원 (동적 바인딩 필수)  
//    t1->show();
//
//    Car* c2 = new Car(3); 
//    Truck* t2 = dynamic_cast<Truck*>(c2); // Error) 실제 객체:Car != Truck 
//    if (t2 == nullptr) { // 원래같으면 예외 발생하고 프로그램 종료되는데 null 반환함으로써 예외처리 지원 
//        cout << "변환 실패" << endl; 
//    }
//    else {
//        t2->show();
//    }
//    
//    Truck* t3 = new Truck(1, 200); 
//    Car* c3 = dynamic_cast<Car*>(t3); // upcasting도 operator 이용해서 명시적으로 
//    c3->show(); 
//
//    return 0;
//}
