#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

// 선언 
void f1(); 
char* f2(char* a, char* b); 
int f3(int a, int b); 

void main() {
	void (*p1)() = f1; 
	p1(); 

	void (*p2)(char*, char*) = f2; 
	char arr1[10] = "aaa"; 
	char arr2[] = "bbb"; 
	printf("arr1=%s, arr2=%s\n", arr1, arr2); 
	p2(arr1, arr2); 
	printf("arr1=%s, arr2=%s\n", arr1, arr2); 

	int (*p3)(int a, int b) = f3; 
	printf("sum=%d", p3(1, 2)); 
}

// 정의 
void f1(){
	printf("함수 포인터 테스트\n");
}

char* f2(char* a, char* b){
	int i, j; 
	int len = strlen(a); 
	int len2 = strlen(b);

	for (i = 0; i < len2; i++) {
		a[len + i] = b[i]; 
	}
}

int f3(int a, int b){
	return a + b; 
}
