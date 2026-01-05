#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

typedef struct {
	int num;
	char name[20];
	void (*fp)(struct Stud*);  // 이렇게 하면 멤버 함수처럼 사용할 수 있음 
}Stud;


void printStud(Stud* s) {
	printf("num:%d, name:%s \n", s->num, s->name); 
}

void main() {
	Stud s; 
	s.fp = printStud; 
	s.num = 1; 
	strcpy_s(s.name, 20, "aaa"); 
	s.fp(&s);  // 이렇게 하면 멤버 함수처럼 사용할 수 있음 
}