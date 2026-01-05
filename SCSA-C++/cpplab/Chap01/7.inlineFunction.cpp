
#include <iostream>

using namespace std;
// 인라인 함수는 치환이 가능하면 호출한쪽에 함수의 내부코드를 삽입한다
inline int func1(int a, int b) {
    return a + b;
}
int main() {
    cout << func1(3,5) ;
    // 아래와 같은 형식으로 치환
    cout << 3 + 5;
    return 0;
}
