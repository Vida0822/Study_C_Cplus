#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

void main() {
	int a = 10, b = 20; 
	int* p = &a; 

	const int* p2 = p; 
	int const* p3 = p; 
	int* const p4 = p; 
	int const* const p5 = p;

	printf("a=%d, p=%p, *p=%d\n", a, p, *p); 
	printf("p2=%p\n", p2);
	//*p2 = 20; // 에러 : 주소에 있는 값 변경 불가 (식이 수정할 수 있는 lvalue 여야합니다 ) 
	p2 = &b; // 주소는 변경 가능 
	printf("&b=%p, p2=%p\n", &b, p2);

	printf("p3=%p\n", p3);
	//*p3 = 20; // 에러 : 주소에 있는 값 변경 불가
	p3 = &b; // 주소는 변경 가능 
	printf("&b=%p, p3=%p\n", &b, p3);

	printf("p4=%p\n", p4);
	*p4 = 20; // 값 변경 가능 
	//p4 = &b; // 에러 : 주소는 변경 불가 
	printf("&b=%p, p4=%d\n", &b, *p4);

	printf("p5=%p\n", p5);
	//*p5 = 20; // 에러 : 주소에 있는 값 변경 불가 
	//p5 = &b; // 에러 : 주소 변경 불가 
	printf("&b=%p, p5=%d\n", &b, *p5);
}