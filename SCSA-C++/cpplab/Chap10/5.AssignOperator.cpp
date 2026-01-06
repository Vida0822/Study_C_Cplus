#include <iostream>

using namespace std;

class First {
private:
    int num1, num2;
    char* name;
public:
    First() {
        cout << "생성자" << endl;
    };
    First(const char* name, int num1 = 0, int num2 = 0) :num1(num1), num2(num2) {
        cout << "생성자" << endl;
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    };

    First(const First& copy) :num1(copy.num1), num2(copy.num2) {
        cout << "복사생성자" << endl;
        this->name = new char[strlen(copy.name) + 1];
        strcpy(this->name, copy.name);
    }
    // 복사대입연산자오버로드
    First& operator=(const First& copy) {
        cout << "복사대입연산자오버로드" << endl;
        this->num1 = copy.num1;
        this->num2 = copy.num2;
        this->name = new char[strlen(copy.name) + 1];
        strcpy(this->name, copy.name);
        return *this;
    }
    ~First() {
        delete[] name;
    }
    void print() { cout << name << "," << num1 << "," << num2 << endl; }
};

class Second : public First {
private:
    int num3;
public:
    Second(const char* name, int num1, int num2, int num3)
        : First(name, num1, num2), num3(num3) {
    }

    Second& operator=(const Second& copy) {
        First::operator=(copy);
        this->num3 = num3;
        return *this;
    }
};

int main() {
    First f1("둘리", 1, 2);
    First f2;
    f2 = f1;
    f2.print();


    return 0;
}
