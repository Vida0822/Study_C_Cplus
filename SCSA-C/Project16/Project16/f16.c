#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

int f1(int k) {
	return k * k;
}
int f2(int k) {
	return k * k * k;
}
int f3(int k) {
	return k * k * k * k;
}

int(*p[])(int) = { f1, f2, f3 }; 

// 룩업 테이블의 함수를 호출하는 함수, 파람으로 룩업테이블 인덱스를 받음 
int (*functionCall(int type))(int) {
	return p[type]; // f1 등 함수 주소 반환 
}

void main(void) {
	int num, type; 
	printf("제곱 구할 숫자 입력: \n");
	scanf("%d", &num); 
	printf("0.제곱  1. 세제곱  2. 네제곱 \n"); 
	scanf("%d", &type); 
	
	if (type < 0 || type > 2) {
		type = 0; 
	}
	printf("계산결과:%d \n", p[type](num)); 
	printf("계산결과:%d \n", functionCall(type)(num)); 
} //main