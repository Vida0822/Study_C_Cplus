#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

typedef struct {
	int num; 
	char name[20]; 
} Stud; 

int sum(int* arr, int size) {
	int s = 0, i; 
	for (i = 0; i < size; i++) {
		s += arr[i]; 
	}
	return s; 
}

void printArr(char* arr[], int size) {
	int i; 
	for (i = 0; i < size; i++) {
		printf("%s\n", arr[i]); 
	}
	printf("\n"); 
}

void printStud(Stud * p) {
	printf("num : %d, name : %s \n", p->num, p ->name); 
}

void callSum(int(*fp)(int*, int), int* arr, int size) {
	printf("sum=%d\n", fp(arr, size)); 
}

void main() {
	int nums[] = { 1, 2, 3 }; 
	char* str[] = { "aaa", "bbb", "ccc" }; 
	Stud s1; 
	s1.num = 1;
	strcpy_s(s1.name, 20, "name1");

	printf("nums¿« «’: %d\n", sum(nums, 3));
	printArr(str, 3);
	printStud(&s1); 
	callSum(sum, nums, 3); 
}