#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

// 가변 길이 숫자의 합 반환 
//add(1, 2, 3, 4, 5); 
//add(1, 2, 3); 
// 이렇게 호출 가능하도록 하려면 가변 인자 사용 필요 

int add(int num, ...) {
	// &num+2 : 첫번째 파라미터 주소 
	// &num+4 : 두번째 파라미터 주소 
	// ...
	int i, sum = 0; 
	for (i = 1; i <= num; i++) {
		printf("%d\t", (&num)[2*i]);
		sum += (&num)[2 * i]; 
	}
	printf("\n"); 
	return sum; 
}

void main() {
	printf("sum=%d\n", add(3, 1, 2, 3));
	printf("sum=%d\n", add(5, 1, 2, 3, 4, 5));
}