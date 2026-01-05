#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

// 2차원 배열을 힙에 할당받아서 사용 
// 폭은 3으로 고정. 줄 수 는 입력 받음
void main() {
	int row, i, j; 

	// 입력 
	printf("폭이 3인 배열의 원하는 줄 수는?"); 
	scanf("%d", &row); 

	int (*p)[3]   // 포인터 변수로 받기 
		= (int(*)[3])  // 배열로 치환 : 사이즈가 3인 배열의 주소 
		malloc(sizeof(int) * 3 * row);  // 전체 크기 

	for (i = 0; i < row; i++) {
		for (j = 0; j < 3; j++) {
			p[i][j] = i * 3 + j + 1; 
		}
	}
	
	// 출력 
	for (i = 0; i < row; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d\t", p[i][j]); 
		}
		printf("\n"); 
	}
	free(p); 


	// 입력 
	//printf("저장하고자 하는 수의 개수를 입력하시오 \n"); 
	//scanf("%d", &a); 

	//p = (int*)malloc(sizeof(int) * a/3);
	//for(i=0; i<a/3; i++) {
	//	int* q = (int*)malloc(sizeof(int) * 3);
	//	for (j = 0; j < 3; j++) {
	//		q[j] = t; 
	//		t++; 
	//	}
	//	p[i] = q; 
	//}

	//// 출력 
	//for (i = 0; i < a / 3; i++) {
	//	for (j = 0; j < 3; j++) {
	//		printf("%d", *(p[i]+j));
	//	}
	//	printf("\n"); 
	//}
}
