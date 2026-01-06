//#include <iostream>
//using namespace std;
//
//template<typename T>
//T add(T a, T b) {  
//	// ※ 업캐스팅 방식 사용하는 java의 Generic과 달리 사용자가 함수를 호출할 때 함수를 만듬
//	return a + b; 
//}
//
//template<class T, typename I>
//T minus_(T a, I b) {
//	cout << "minus_(template)" << endl; 
//	return a - b;  
//}
//
//float minus_(float a, int b) {
//	cout << "minus_(전역)" << endl;
//	return a - b; 
//}
//
//template<class T, class I>
//void print(double b) {
//	cout << (T)b << ", " << (I)b << endl;  // 형변환 
//}
//
//template<class T> 
//T Max(T a, T b) {
//	return a > b ? a : b; 
//}
//
//// 템플릿의 특수화 
//template<> // specialized teplate function 임을 명시  
//string Max(string str1, string str2) {
//	return str1.length() > str2.length() ? str1 : str2;
//}
//
//int main() {
//	cout << add(3, 2) << endl;  // 5 
//	//cout << add(3.1f, 2.4f) << endl; 
//	cout << add<float>(3.1f, 2.4f) << endl; // 5.5 
//	cout << add<string>("i like ", "scsa \n");  // i like scsa 
//
//	cout << minus_(3.1f, 2) << endl; // minus_(전역) : 일반함수가 이미 존재하면 일반함수가 먼저 호출됨 
//	cout << minus_<float, int>(3.1f, 2) << endl; // minus_(template) 
//
//	print<char, int>(65);  // A, 65
//
//	cout << Max(11, 13) << endl;  // 13
//	cout << Max('a', 'A') << endl; // a 
//	cout << Max(3.1, 2.1) << endl; // 3.1 
//
//	cout << Max<string>("assimple", "best") << endl; // best 출력됨 -> 해결: 일반함수도 템플릿 함수로 만듬 
//
//	return 0;
//}