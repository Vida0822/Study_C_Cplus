#include <iostream>

using namespace std;

/*
    friend 
        정의 : friend 선언된 대상에서 선언한 객체의 private 맴버에 접근할수 있다
        class    : 클래스 단위로
        function : 선언된 함수에서만  
*/
class Girl;

class Boy {
private:
    int height;
    friend class Girl;
public:
    Boy(int height);
    void showMyGirl(Girl& g);
};

class Girl {
private:
    int weight;
    //friend class Boy;
    friend void Boy::showMyGirl(Girl& g); // 함수의 프렌드 선언 
public :
    void showMyBoyFriend(Boy& boy);
};

Boy::Boy(int height) :height(height) {}
void Boy::showMyGirl(Girl& g) {
    cout << g.weight << endl;
};
void Girl::showMyBoyFriend(Boy& boy) {
    cout << "myBoyfriend's height : " << boy.height << endl;
}
int main() {
    Boy b(170);
    Girl g;
    g.showMyBoyFriend(b);
    
    return 0;
}
