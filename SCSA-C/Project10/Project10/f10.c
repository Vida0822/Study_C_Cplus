// 문제: HEAP 에 배열 만들기

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

void main() {

	int* arr = (int*)malloc(sizeof(int) * 10);  // 동적 할당 영역을 배열처럼 사용: 변수 일일히 할당받지 않고 크기가 큰 저장공간을 한꺼번에 동적할당해 배열처럼 사용
	//printf("%u\n", arr);
	if (arr == NULL) {
		printf("메모리가 부족합니다.\n");
		exit(1);
	}
	printf("%p\n", (void*)arr); // 000001AAC078C000

	int i; 
	for (i = 0; i < 10; i++) {
		arr[i] = i+1; 
	}

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n"); 

	free(arr); 
	printf("%p\n", (void*)arr); // 000001AAC078C00
}



