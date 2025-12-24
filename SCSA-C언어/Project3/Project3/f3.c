#include<stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

// 함수 선언 
void printArr(int x[], int size);
//void swap(int* x, int* y); 

//
//void main() {
//	// 배열은 집합 데이터 쉽게 처리 
//	int arr[] = { 1, 2, 3, 4, 5 }; 
//	printArr(arr, 5); 
//
//	int sum = sumArr(arr, 5); 
//	int max = maxArr(arr, 5);
//	int min = minArr(arr, 5);
//
//	printf("sum=%d, max=%d, min=%d", sum, max, min); 
//}

// 함수 정의 
void printArr(int x[], int size) {
	int i; 
	for (i = 0; i < size; i++) {
		printf("x[%d]=%d \n", i, x[i]); 
	}
}


// EX1. 요소의 합 반환 함수 
int sumArr(int x[], int size) {
	int i, sum = 0; 
	for (i = 0; i < size; i++) {
		sum += x[i]; 
	}
	return sum; 
}


// EX2. 최대값 반환 함수 
int maxArr(int x[], int size) {
	int i, max = 0;
	for (i = 0; i < size; i++) {
		if (max < x[i]) {
			max = x[i]; 
		}
	}
	return max;
}


// EX3. 최소값 반환 함수 
int minArr(int x[], int size) {
	int i, min = 100;
	for (i = 0; i < size; i++) {
		if (min > x[i]) {
			min = x[i];
		}
	}
	return min;
}

void swap(int *x, int *y) { // 선언문에서의 *는 주소를 의미
	int tmp = 0; 
	tmp = *x;  // 실행할 때의 *는 담겨져있는 값을 의미함 
	*x = *y;  
	*y = tmp; 
}
//
//void main() {
//	int x = 10, y = 20; 
//	//swap(x, y);  // Project3.exe(프로세스 18404)이(가) -1073741819 코드(0xc0000005)와 함께 종료되었습니다.  => 메모리 관련 오류 
//	swap(&x, &y);  // Project3.exe(프로세스 27736)이(가) 0 코드(0x0)와 함께 종료되었습니다.  => 정상 실행 
//	printf("x=%d, y=%d", x, y); 
//}

// 재귀 EX. 피보나치 수열 
int fivo(int *nums, int i) { // 배열도 되고 포인터도 됨: nums* 도 되고, nums[] 도 됨 
	if (i == 1 || i == 2) {
		return 1; 
	}
	nums[i] = fivo(nums, i-1) + fivo(nums, i-2);
	return nums[i]; 
}

void main() {
	int nums[100] = { 0 }; 
	nums[1] = 1, nums[2] = 2; 

	int turn; 
	printf("몇 번째 피보나치 수열값? : "); 
	//scanf("%d", turn);  -> "초기화 되지 않은 turn 지역 변수를 사용했습니다."
	scanf("%d", &turn); 

	int ret = fivo(nums, turn);
	printf("%d 번째 피보나치 수열 값=%d", turn, ret); 
}


//int fibo(int x) {
//	if (x == 1 || x == 2)
//		return 1;
//	else
//		return fibo(x - 2) + fibo(x - 1); 
//}
//
//void main() {
//	int i, j; 
//	puts("출력하고자하는 피보나치 수열의 개수를 입력하라");  
//	scanf("%d", &j); 
//	for (i = 1; i <= j; i++) {
//		printf("%d\t", fibo(i)); 
//	}
//}



