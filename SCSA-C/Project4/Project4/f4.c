#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

void inputArr(int* arr, int size); // 이거 위에 선언안해줄거면 main 보다 함수 먼저 선언해야함 (함수 선언 + main 아래 구현 형태가 good) 
void printArr(int* arr, int size);

void main() {
	//int arr[3]; // -858993460      -858993460      -858993460      -858993460    -> 초기화 안하면 쓰레기 값 
	int arr[3] = { 0 };   //   0	0	0

	// 초기화해서 생성 시 크기 생략 (초기화 개수 만큼 방이 만들어짐)  
	// 배열의 크기는 고정이므로 확장불가 
	int arr2[] = { 1, 2, 3, 4 };


	int i, j, k; 
	puts("배열 arr에 넣을 숫자를 입력하세요: ");
	//for (i = 0; i < 3; i++) {
	//	scanf("%d", &arr[i]); 
	//}
	scanf("%d%d%d", &arr[0], &arr[1], &arr[2]); // ※ 주소 연산자로 값을 넣어줄 주소 알려줘야함 

	//for (i = 0; i<4; i++) {  // index 넘게 참조해도 오류 안뜨고 잘 출력함 (danger)  
	puts("arr의 요소들: "); 
	for (j = 0; j < 3; j++) {
		printf("%d\t", arr[j]);  
	}
	printf("\n"); 

	puts("arr2의 요소들: "); 
	for (k = 0; k < 3; k++) {
		printf("%d\t", arr2[k]);
	}
	printf("\n");

	/*
	포인터: 값으로 주소를 갖는 변수 (주소를 저장하는/가리키는 변수)
	*/
	// int *p  -> 이것도 됨  
	//int* p;
	// p는 포인터, 즉 int 값의 주소를 갖는 변수 
	// ㄴ 타입 지정 이유 : 주소는 4byte로 동일하지만 메모리를 참조할 때 얼마만큼의 데이터를 읽고 어떻게 해석할지 알려주기 위함

	int a = 10;
	int* p = &a;
	printf("a=%d, &a=%p, p=%p, *p=%d \n", a, &a, p, *p);
	// a = 10 
	// &a = 000000D04516FBB4       -- &: 주소값을 얻어주는 연산자 
	// p= 000000D04516FBB4
	// *p = 10     -- 실행문에서의 * : 그 주소에 담긴 값을 의미  --> print 내부이기때문에 실행문, p가 가리키는 주소에 있는 a를 을 출력 

	++(*p); // 이것도 실행문 ! 
	printf("a=%d, &a=%p, p=%p, *p=%d \n", a, &a, p, *p); // a=11, &a=000000943E9EF9C4, p=000000943E9EF9C4, *p=11

	int arr3[4];
	inputArr(arr3, 4); 
	printArr(arr3, 4); 
	printArr(arr, 3); 
}

// 배열의 요소 입력 함수 
void inputArr(int *arr, int size){
	printf("%d개 정수 입력:", size); 
	int i; 
	for (i = 0;i < size;i++) {
		scanf("%d", &arr[i]); 
	}
}

// 배열의 요소 입력 함수 
void printArr(int *arr, int size) {
	int i; 
	for (i = 0;i < size;i++) {
		printf("%d  ", arr[i]); 
	}
	printf("\n");
}