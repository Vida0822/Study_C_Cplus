//
//#include <iostream>
//
//using namespace std;
//
//class Person {
//private:
//    char* name;
//public:
//    Person(const char* name) {
//        cout << "Person 생성자" << endl; 
//        this->name = new char[strlen(name)];
//        strcpy(this->name, name);
//    }
//    ~Person() {
//        cout << "Person 소멸자" << endl;
//        delete[] this->name;
//    };
//    void whatYourName() {
//        cout << "My name is " << this->name << endl;
//    }
//}; 
//
//class Student : public Person { // 상속 
//private: 
//    char* major; 
//    public:
//        // 생성자 
//        Student(const char* name, const char* major) :Person(name) {  // 상위 생성자 지정
//            cout << "Student 생성자" << endl;
//            this->major = new char[strlen(name) + 1]; 
//            strcpy(this->major, major); 
//        }
//
//        // 소멸자
//        ~Student() {
//            cout << "Student 소멸자" << endl;
//            delete[] this->major; 
//        }
//
//        // 확장 
//        void whoAreYou() {
//            this->whatYourName(); // 물려받은거 
//            cout << "My Major is" << this->major << endl;  // 하위클래스거 
//        }
//};
//
//
//int main() {
//    Student s("둘리", "scsa");
//    s.whatYourName(); 
//    s.whoAreYou();  
//    return 0;
//}
