#include <iostream>
using namespace std;

template<typename T>
T add(T a, T b) {  
	// ※ 업캐스팅 방식 사용하는 java의 Generic 클래스와 달리 사용자가 함수를 호출할 때 함수를 만듬
	return a + b; 
}


int main() {
	cout << add(3, 2) << endl; 
	cout << add(3.1f, 2.4f) << endl; 
	
	return 0;
}