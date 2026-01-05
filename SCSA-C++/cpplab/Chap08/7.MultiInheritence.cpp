
#include <iostream>

using namespace std;
/*
    다중상속 
    장점: 다형성이 확장된다 
    단점: 1. 모호성 발생된다  -> 해결책: 클래스 이름을 명확하게 지정해준다.  
          2. 멀티 객체가 생성될 수 있다 -> 해결책: 가상 상속을 사용한다.  
				* 멀티 객체: 같은 부모 클래스 객체가 자식 안에 여러 번 생성되는 현상 (부모 A가 논리적으로 하나여야 하는데 물리적으로 여러 개 생성) 
				* 가상 상속 : "부모 객체를 한 번만 만들고 그 객체를 모든 자식이 공유하게 해라” 라고 컴파일러에게 알려주는 문법
*/

class Grand {}; 
class Father : virtual public Grand{ // Grand에 대한 가상 참조 : 중간 클래스들은 그 부모를 직접 포함하지 않고, 그 부모를 가리키는 정보(주소 / 오프셋)를 가진다
public:
    virtual void work() {
        cout << "아빠가 일합니다." << endl; 
    }
};

class Mother : virtual public Grand{
public: 
    virtual void work() {
        cout << "엄마가 일합니다." << endl;
    }
};

class Son : public Father, public Mother {
public: 
    // 가장 마지막 자식(D) 이 생성자에서 부모(Grand) 초기화해야함 
    // :근데 Grand에는 기본 생성자만 있으므로 컴파일러가 자동으로 처리 (별도로 처리할 필요 X) 
};

int main() {
    Son* s = new Son(); 
    //s->work();  // Error: 다중상속인데 두 클래스에 모두 동일한 함수가 정의되어있음 
    s->Mother::work(); // 모호성 해결 : 범위 지정자로 상속 객체 지정 

    Father* f = new Son();
    Mother* m = new Son();
    f->work(); 
    //m->work(); 

    return 0;
}
