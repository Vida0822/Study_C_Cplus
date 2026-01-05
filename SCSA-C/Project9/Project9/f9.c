// ~~ 강사님 코드 ~~~ 
#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

//typedef 타입 정의 => 기본형 같이 진짜 '타입'을 정의한것 
// => 변수 사용할 때 struct 안붙여도 됨 : struct Student s (x) -> Student s (실무에서 가장 많이 사용)
// ㄴ 기본형에도 적용 가능 ! (별칭 느낌) 
typedef int myint;
typedef unsigned char uchar;
typedef long long ll;
typedef float real;

myint a = 10;
uchar c = 'A';
ll big = 10000000000LL;
real pi = 3.14f;


typedef struct {
	int num; 
	char name[20];
	int grade; 
}Student;  // 이름을 뒤에 붙일 수도 있음 

void inArr(Student* p, int idx); 
void printArr(Student* p, int idx); 

void main() {
	Student arr[3];
	int i; 
	for (i = 0; i < 3; i++) {
		inArr(arr, i); 
	}
	for (i = 0; i < 3; i++) {
		printArr(arr, i);
	}
}


void inArr(Student* p, int idx) {
	printf("num:"); 
	scanf("%d", &p[idx].num); 

	printf("name:"); 
	char name[20]; // 임시 저장
	scanf("%s", name);
	strcpy_s(p[idx].name, 20, name);  

	printf("grade:");
	scanf("%d", &p[idx].grade);
}


void printArr(Student* p, int idx) {
	printf("==student %d 출력== \n");
	printf("num:%d \n", p[idx].num); 
	printf("name:%s \n", p[idx].name);
	printf("grade:%d \n", p[idx].grade);
}

// ~~ 내코드~~ 
//
//#include<stdio.h>
//#pragma warning(disable:4996)
//
//void inArr(struct Test* p, int size);
//void outArr(struct Test* p, int size);
//
//struct Test {
//	int num;
//	char name[20];
//	int grade;
//}t2 = { 2, "bbb", 3 }, t3, arr[3] = { {5, "ddd", 1}, {6, "eee",2}, {7, "fff" , 3} }; // 정의 즉시 선언 가능 
//
//void main() {
//	struct Test t1, arr2[2] = { {8, "ggg", 4} , {7, "hhh", 2}};
//	t1.num = 1; 
//	strcpy(t1.name, "aaa"); 
//	t1.grade = 2; 
//
//	t3.num = 3;
//	strcpy(t3.name, "ccc"); 
//	t3.grade = 4; 
//
//	printf("t1.num=%d t1.name=%s, t1.grade=%d \n", t1.num, t1.name, t1.grade); 
//	printf("t2.num=%d t2.name=%s, t2.grade=%d \n", t2.num, t2.name, t2.grade);
//	printf("t3.num=%d t3.name=%s, t3.grade=%d \n", t3.num, t3.name, t3.grade);
//
//	struct Test* p1 = &t1; 
//	printf("p1->num=%d p1->name=%s p1->grade=%d \n", p1->num, p1->name, p1->grade); 
//	printf("p1[0].num=%d p1[0].name=%s p1[0].grade=%d \n", p1[0].num, p1[0].name, p1[0].grade);
//
//	int i; 
//	for (i = 0; i < 3;i++) {
//		printf("arr[%d].num=%d arr[%d].name=%s, arr[%d].grade=%d\n", 
//			i, arr[i].num, i, arr[i].name, i, arr[i].grade);
//	}
//
//	for (i = 0; i < 2;i++) {
//		printf("arr2[%d].num=%d arr2[%d].name=%s, arr2[%d].grade=%d\n",
//			i, arr2[i].num, i, arr2[i].name, i, arr2[i].grade);
//	}
//
//	struct Test* p2[3];  // 이중 배열?포인터?? 
//	struct Test p2[3];  -> 이 상태에서의 p2는 아무 것도 가리키지 않는 포인터(쓰레기 주소) -> malloc 등으로 동적 할당해야 함 
//	struct Test* p2;
//	inArr(p2, 3);
//	outArr(p2, 3);
//}
//
// 입력함수 
//void inArr(struct Test* p, int size) { // 배열 p2는 함수로 전달될 때 자동으로 포인터로 변환
//	int i;
//	for (i = 0; i < size; i++) {
//		printf("===p[%d]에 저장될 Test 객체===\n", i);
//		printf("num: ");
//		scanf("%d", &p[i].num);
//
//		printf("name: ");
//		scanf("%s", &p[i].name);
//
//		printf("grade: ");
//		scanf("%d", &p[i].grade);
//	}
//}
//
// 출력함수 
//void outArr(struct Test* p, int size) {
//	puts("===배열에 저장된 객체 출력==");
//	printf("size: %d \n", size);
//	int i;
//	for (i = 0; i < size; i++) {
//		printf("p[%d].num=%d p[%d].name=%s, p[%d].grade=%d\n",
//			i, p[i].num, i, p[i].name, i, p[i].grade);
//	}
//}