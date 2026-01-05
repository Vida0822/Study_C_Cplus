
#include <stdio.h>
#include <stdlib.h>

void printa(int** pa);
void printb(int (*pa)[2]);

int main_2() {
    // 포인트 변수 배열 
    int* pa[3]; 
    int a[2] = {2, 4};
    int b[4] = {1, 2, 3, 4};
    int c[3] = { 1, 3, 5 };
    pa[0] = a; 
    pa[1] = b; 
    pa[2] = c; 

    //*(pa + 0) == pa[0] 
    printf("%u \n", **(pa + 0)); // pa : 포인트 배열 주소 -> *(pa+0): 첫번째 배열 주소 -> **(pa+0) ; 첫번째 배열의 첫번째 값
    printf("%u \n", *(*(pa+0)+1));
    printf("%u \n", pa[0][1]); 

    printa(pa); 

    int tarr[2][2] = { {1, 3}, {5, 7} }; 
    int* p = tarr;  // 일차원 포인터로 받아서 정수 펼쳐짐 
    printf("%d \n", *(p + 2)); // 5 

    int(*arrp)[2] = tarr; 
    printb(arrp);


    return 0;
}

void printa(int** pa) {
    printf("printa : %d \n", sizeof(pa));
}

//void printb(int (*pa)[2][2]) {  // 함수로 전달되는 것은 “배열 전체”가 아니라“첫 번째 원소의 주소”이기 때문에 
void printb(int (*pa)[2]) {  // 그 첫 요소가 int라 자료형을 int로 쓰는 것!!  
    printf("printb : %d \n", sizeof(pa)); 
}