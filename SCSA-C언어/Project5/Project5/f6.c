#include<stdio.h>
#pragma warning(disable:4996)

void inputArr(int* arr, int size);
void printArr(int* arr, int size);

void main() {
	int a = 10; 
	char b = 'x'; 
	int* p = &b; 

	printf("a=%d, &a=%p, p=%p, *p=%d \n", a, &a, p, *p); 
	// a=10, &a=00000097D7D1F664, p=00000097D7D1F684, *p=-858993544   --> p에 쓰레기값 담김 ("'char *'과(와) 'int *' 사이의 형식이 호환되지 않습니다.) 

	char* p2 = &b;
	printf("b=%c, &b=%p, p2=%p, *p2=%c \n", b, &b, p2, *p2);
	// b=x, &b=000000D0C15DF664, p2=000000D0C15DF664, *p2=x


	int* ppp = (int*)0x100;  // ※Danger※ : 펌웨어처럼 직접 설계하는게 아니라면 메모리 배치를 알 수 없기 때문

	// arr == &arr[0] , arr != &arr  (이중포인터) 
	// 주소값을 담기 때문에 상수 (주소를 변경하지 않음) 

	// 주소 연산 
	// int*p -> p+1 = p+4byte (한단위 담는 주소)
	// arr의 2번방 -> *(arr+2)

	printf("p=%p, p+1=%p\n", p, (p + 1));  // p=000000D8A550F5B4, p+1=000000D8A550F5B8
	printf("p2=%p, p+2=%p\n", p2, (p2 + 1));  // p2=000000D8A550F5B4, p+2=000000D8A550F5B5
	 
	int arr[] = { 1, 2, 3 }; // 배열의 이름 : 첫 요소 주소를 가리키는 변수 <=> 포인터 변수 
	int* p4 = arr; // p4 = &arr[0] -- 0번방에 들어가있는 값: int -> 이 값을 담는 주소를 가리키는 포인터 변수이므로 int*  
	printf("p4=%p\n", p4); // p4=0000009AD2AFFBA8

	int i; 
	//for (i = 0; i<sizeof(p4); i++) { sizeof() : 메모리 공간에서 소모하는 메모리의 크기를 '바이트 단위'로 계산해서 반환 (요소 개수 X) 
	for (i = 0; i<3; i++) {
		printf("*(p4 + i): %d \n", (i+1), *(p4 + i));
		printf("*(arr + i): %d \n", (i + 1), *(arr + i));
		printf("p4[%d] : %d\n", i, p4[i]);
		printf("\n"); 
	}

	// [] = * 
	// [][] == ** 

	int arr3[4];
	inputArr(arr3, 4);
	printArr(arr3, 4);
}

// 배열의 요소 입력 함수 
void inputArr(int* arr, int size) {
	printf("%d개 정수 입력:", size);
	int i;
	for (i = 0;i < size;i++) {
		scanf("%d", &arr[i]);
	}
	//for (i = 0; i < size; i++) {
	//	scanf("%d", (arr + i)); // (arr + i) 자체가 각 요소를 담는 주소를 나타냄  
	//}
}

// 배열의 요소 입력 함수 
void printArr(int* arr, int size) {
	int i;
	//for (i = 0;i < size;i++) {
	//	printf("%d  ", arr[i]);

	//}
	for (i = 0;i < size;i++) {
		printf("%d  ", *(arr+i));

	}
	printf("\n");
}