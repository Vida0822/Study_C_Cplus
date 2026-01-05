#include<stdio.h>

void main(void) {
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int i, j;

	int* p = a[0], (*q)[3] = a; 
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			printf("林家=%x a[%d][%d]=%d \n", *(a + i) + j, i, j, *(*(a + i) + j));
		}
	}
	//  林家 = b04ff8c8 a[0][0] = 1
	//	林家 = b04ff8cc a[0][1] = 2
	//	林家 = b04ff8d0 a[0][2] = 3
	//	林家 = b04ff8d4 a[1][0] = 4
	//	林家 = b04ff8d8 a[1][1] = 5
	//	林家 = b04ff8dc a[1][2] = 6

	printf("a[0]=%x a=%x &a=%x\n", a[0], a, &a); // a[0]=b04ff8c8 a=b04ff8c8 &a=b04ff8c8
	printf("a[0]+1=%x a+1=%x &a+1=%x\n", a[0] + 1, a + 1, &a + 1);  // a[0]+1=b04ff8cc a+1=b04ff8d4 &a+1=b04ff8e0

	printf("a[1][-1]=%d\n", a[1][-1]); // 3
	printf("p[5]=%d q[1][1]=%d\n", p[5], q[1][1]); // p[5]=6 q[1][1]=5   int* p = a[0] <-> int* p = a    -> p[5] = a[5]

}