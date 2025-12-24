#include<stdio.h>
#pragma warning(disable:4996)

void sortArr(int* p, int size); 
int binarySearch(int* p, int size); 

void main() {
	float a[] = { 1.2f, 3.45f }; 
	char b[] = { 'a', 'b', 'c', '\0' }; 
	char c[] = "apple";  // '문자열은 상수' == 문자열 리터럴은 수정하면 안 되는 메모리(text영역)에 놓인다 == 문자열 리터럴 ("hello") 은 상수처럼 취급된다
	char* p = "apple"; // 배열과 포인터는 치환 

	c[0] = 'k';  // Error X : Stack에 저장되는 값이기 때문에 바뀌어도 괜찮음 (문자열 리터럴을 배열로 복사) 
	//p[0] = 'm';  // Error O :  상수 영역에 저장되어 있는 "apple"을 참조만 하는 것이기 때문에 쓰기 작업 무시됨 (문자열 리터럴 그 자체를 가리킴)

	printf("c=%s, p=%s \n", c, p);  // c=kpple, p=apple

	//int d[2][3] = { {1, 2, 3}, {4, 5, 6} }; 
	//int i, j; 
	//for (i = 0; i < 2; i++) {
	//	for (j = 0;j < 3;j++) {
	//		printf("%d\t", d[i][j]); 
	//	}
	//	printf("\n"); 
	//}

	int arr[9]; 
	sortArr(arr, 9);  // 정렬 
	printf("찾은 위치: %d", binarySearch(arr, 9)) ; // 이분탐색 	
}


void sortArr(int* arr, int size) {

	// 입력 
	int i, j;
	puts("정수 9개를 입력하세요: ");
	for (i = 0;i < 9;i++) {
		//scanf("%d", &arr+i); // &arr : 배열 전체 주소 -> &arr + i: 배열 N개 단위 이동
		//scanf("%d", &(arr + i));  
		// ㄴ 틀린 이유 : arr, arr+i 자체가 주소를 나타냄 (배열명은 배열 요소의 주소)  --> 거기에 주소 연산자(&)를 사용했기 때문에 이중으로?주소를 구한 것! 
		scanf("%d", arr + i); // 두번째 인자로 주소값이 들어가야하기 때문에 배열명을 그대로 써줘야함 ( == p[i]) 
	}


	// 정렬 
	for (i = 0;i < 8;i++) {
		for (j = i + 1; j < 9;j++) {
			if (*(arr + i) > *(arr + j)) {
				int tmp = *(arr + i);
				*(arr + i)  // lvalue (그 주소가 가리키는 메모리 공간) : 값이 아니라 “i번째 요소 그 자체"
					= *(arr + j); // '*' 연산자는“그 주소가 가리키는 객체(object)”를 표현
				*(arr + j) = tmp;
			}
		}
	}

	// 출력 
	puts("===정렬한 정수 출력===");
	for (i = 0;i < 9;i++) {
		printf("%d\n", *(arr + i));
		//scanf("%d", &(arr + i));
	}

	//printf("%d\n", *(arr + (sizeof(arr) / 2 / sizeof(arr[0]))));
	printf("중간 값: %d\n", *(arr + (&arr[8] - &arr[0])/2));
	//printf("중간 값: %d\n", *(arr + (sizeof(arr) / sizeof(arr[0]) / 2)));

}



int binarySearch(int* p, int size) {
	int target; 
	puts("찾을 값 입력: "); 
	scanf("%d", &target); 

	int f = 0 , l = size-1, m ;
	while (f <= l) {
		m = (f + l) / 2; 
		if (target < p[m]) {
			l = m - 1; 
		}
		else if (target > p[m]) {
			f = m + 1; 
		}
		else { // target == m 
			return m+1; 
		}
	}
	return -1; 
}