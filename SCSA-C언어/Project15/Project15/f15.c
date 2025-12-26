#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

void error1() {
	printf("error1 발생 \n"); 
}
void error2() {
	printf("error2 발생 \n");
}
void error3() {
	printf("error3 발생 \n");
}

void main() {
	int x; 
	
	//switch (x) {
	//case 1:
	//	error2(); 
	//	break; 
	//case 2:
	//	error3();
	//	break;
	//default: 
	//	error1();
	//}

	void (*p[])() = { error1, error2, error3 };  // 룩업 테이블 
	printf("에러 코드 입력: ");
	scanf("%d", &x);
	if (x > 2 || x < 0) {
		x = 0; 
	}
	p[x](); 
}