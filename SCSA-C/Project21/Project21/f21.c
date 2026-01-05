/*
문자열 복사, 비교, 출력 기능을 하는 함수를 구현하시오 
*/

#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

void strcpy(char* dest, const char* src); 
int strcmp(const char* s1, const char* s2); 
char* strchr(const char* string, int c); 
int atoi(const char* string); 

void main() {
	char arr1[] = "abcdef";  // 원본 
	char arr2[20] = "kkk";  

	// 문자열 복사 
	printf("arr1=%s, arr2=%s\n", arr1, arr2); 
	strcpy(arr2, arr1);
	printf("arr1=%s, arr2=%s\n", arr1, arr2); 
}

// 문자열 복사 
void strcpy(char* dest, const char* src) { // 복사 대상, 복사 원본
	int i = 0; 
	while ((dest[i] = src[i++]) != '\0'); 
}

int strcmp(const char* s1, const char* s2);
char* strchr(const char* string, int c);
int atoi(const char* string);






