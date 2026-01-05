
#include <iostream>

using namespace std;

class Person {}; 

// is-a
class Student : public Person {} ; 

// has-a
class Gun{};
class Police {
private:
    Gun gun; 
};

int main() {
    cout << "Hello World!\n";
    return 0;
}
