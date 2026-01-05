#include <stdio.h>

void print(int arr[]); 

int main_() {
	// 변수 : 메모리를 할당받는 것 
	// 선언적 타입 : C에서는 변수의 타입이 ‘선언 시점’에 고정되고, 그 타입에 따라 메모리 해석 방식이 결정 (vs 동적 타입)
	// * char : 4 byte를 기본적으로 할당하지만 1 byte 만 사용함 ! 
	int a = 3 ; // lvalue 에서의 a : 주소 
	int b = a ; // rvalue 에서의 a : 값 

	// 배열 : 같은 타입 변수의 순서적 나열 
	// 특성 : 선언과 동시에 크기가 결정되어야하고 크기 변경이 불가하다. 
	int arr[2]; 
	//arr[2] = 10; // 이거 다른 컴파일러에서는 에러 X (but 해당 변수 보존 X : 할당되지 않은 영역이라고 os가 인식) 
	//printf("%d", arr[0], arr[1], arr[2]); 

	// 포인터 변수 : 주소변수만 값으로 가질 수 있는 변수 
	int* p; 
	p = &a;
	p = arr; // 배열은 이름이 주소 
	printf("%d", sizeof(p)); // 8 byte 

	return 0; 
}

void print(int arr[]) { // 실제로 배열이 복사되서 넘어가는게 아니라 포인터 변수로 자동 변환되서 넘어감 : int arr[] -> int *arr 
	sizeof(arr);  
}