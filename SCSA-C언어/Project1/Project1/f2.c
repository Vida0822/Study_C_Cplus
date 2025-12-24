#include<stdio.h>

void func1(void); 
void func2(void); 

void main(void) {
	int i, j; 
	printf("\n==func1==\n"); 
	for (i = 0;i < 10;i++)
		func1(); 
	printf("\n==func2==\n"); 
	for (j = 0;j < 10;j++)
		func2(); 
}


void func1(void) {
	static int cnt = 1; // 정적 변수 : 함수 외부 상태 공유됨 
	printf("func1의 counter=%d\n", cnt); 
	cnt++; 
}

void func2(void) {
	int cnt = 1;  // 지역 변수 : 함수 외부 상태 공유 안됨 
	printf("func2의 counter=%d\n", cnt); 
	cnt++; 
}