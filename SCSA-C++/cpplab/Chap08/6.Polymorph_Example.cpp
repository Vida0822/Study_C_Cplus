   
#include <iostream>

using namespace std;

class Animal {
public: 
    virtual void eat() = 0; 

};

class Fly {
public:
    virtual void fly() = 0;

};

class Dog : public Animal {
public:
    // override 
    void eat() {
        cout << "개가 먹습니다." << endl; 
    }
    
    // extends 
    void bark() {
        cout << "개가 짖습니다." << endl; 
    }
};

class Bird : public Animal, public Fly {
public:
    // override 
    void eat() {
        cout << "새가 먹습니다." << endl;
    }

    // extends 
    void fly() {
        cout << "새가 날아다닙니다. " << endl;
    }
};

class Human : public Animal {
public:
    // override 
    void eat() {
        cout << "사람이 먹습니다." << endl;
    }
};

class Superman : public Human , public Fly { // Superman 이 재정의한다하더라도 Human을 상속받는게 맞음 
public:
    // override 
    void eat() {
        cout << "슈퍼맨이 먹습니다." << endl;
    }

    // extends 
    void fly() {
        cout << "슈퍼맨이 날아다닙니다. " << endl;
    }
};

void toEat(Animal* a) {
    a->eat(); 
}

void toFly(Fly* f) {
    f->fly();
}


int main() {
    //Animal* a = new Animal(); 
    Dog* d = new Dog(); 
    Bird* b = new Bird();
    Human* h = new Human();
    Superman* s = new Superman();

    toEat(d);
    toEat(b);
    toEat(h);
    toEat(s); 

    toFly(b);
    toFly(s); 

    return 0;
}
