#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

void main() {

	// calloc (초기화 개수, 할당 크기): 크기만큼 힙에 할당받아서 0으로 지정한 개수만큼 초기화 해줌
	int* p = (int*)calloc(5, sizeof(int) * 5);
	int i; 
	for (i = 0; i < 5; i++) {
		printf("%d\t", p[i]); 
	}
	printf("\n"); 

	for (i = 0; i < 5; i++) {
		p[i] = i + 1; 
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", p[i]);
	}
	printf("\n");

	free(p); 

	// realloc (원 메모리 블록 주소, 확장할 크기): 원 메모리의 확장 크기만큼 다시 할당받아줌 
	// ※ 원 메모리의 값 복사를 보장해주지 않음. 
	int* p2 = (int*)realloc(p, sizeof(int) * 7); 
	for (i = 0; i < 7; i++) {
		printf("%d\t", p[i]); 
	}
	printf("\n");

	free(p2); 
}