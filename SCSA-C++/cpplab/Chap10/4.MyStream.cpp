
#include <iostream>

//using namespace std;
namespace mystd{
	using namespace std;
	
	class ostream {
	public: 
		// << : 입출력 스트림 연산자 
		ostream& operator<<(const char* chr) { 
			// 문자열 리터럴 타입: 'const char[6]'-> 함수 인자도 const char* 로 받아줘야함  -- const char* p = "hello";  // ⭕
						//=> 왜? 출력 함수에서는 문자열 변경하면 안됨 
			//	vs 문자 배열 : char str[] : 내용 변경 가능   --- char s[] = "hello";   // ⭕
			
			// ※ char* p = "hello";   ->  ❌ (C++)
			printf("%s", chr); 
			return *this; 
		}
		ostream& operator<<(char chr) {
			printf("%c", chr);
			return *this;
		}
		ostream& operator<<(int chr) {
			printf("%d", chr);
			return *this;
		}
		ostream& operator<<(double chr) {
			printf("%g", chr);
			return *this;
		}
		ostream& operator<<(float chr) {
			printf("%lf", chr);
			return *this;
		}
		ostream& operator<<(ostream& (*fp)(ostream& ostm)) {
			return fp(*this); 
		}	
	};
	ostream& endl(ostream& ostm) {
		ostm << '\n';
		fflush(stdout);
		return ostm;
	}
	ostream cout; 
}

using mystd::cout; 
using mystd::endl;

int main() {
	cout << 'a' << endl << 123 << endl << "hello" << endl << 34.12 << endl;
}