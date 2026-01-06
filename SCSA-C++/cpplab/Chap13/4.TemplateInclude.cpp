//
//#include <iostream> 
//#include "Point.h"  // 이거만 하면 에러 
//#include "Point.cpp" // 얘까지 포함해줘야함 (template 함수기 때문??) 
//
///*
//	template 헤더 파일을 포함할때는 cpp 파일까지 포함해서 사용해야한다. 
// : 템플릿은 컴파일 시점에 “코드를 생성”해야 하는데,
//	cpp 파일에 구현이 있으면 컴파일러가 그 내용을 볼 수 없기 때문
//*/
//using namespace std;
//
//int main() {
//	Point<int> p1(1, 2); 
//	p1.print(); 
//}
