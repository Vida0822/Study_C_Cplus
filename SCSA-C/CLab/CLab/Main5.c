
#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    char name[10];
    int age;

} Person;

void printc(Person* p); 

int main_5() {
    struct Person p;
    strcpy(p.name, "둘리");
    p.age = 7;

    //Person* pp = p;  -> Error : 구조체 이름은 주소가 아니다. 
    Person* pp = &p;
    printf("%d \n", (*pp).age);  // *보다 . 의 우선순위가 높기 때문에 괄호 필수 
    printf("%d \n", pp->age);

    // 동적 선언 방식 
    Person* pa = (Person*)malloc(sizeof(Person)*3); 
    if (pa == NULL) {
        printf("메모리 할당 실패"); 
    }
    free(pa); 
    
    // 메모리 크기 도중에 변경 가능 (값 보장 안됨 -> 실무에서는 memcpy() 이용해서 초기화)
    pa = (Person*)malloc(sizeof(Person) * 3);
    pa = realloc(pa, sizeof(Person) * 10);  
    free(pa);


    Person p2 = p; 
    printf("%s, %d \n", p2.name, p2.age); 
    p.age = 8; 
    printf("%s, %d \n", p2.name, p2.age); 

    printc(&p); 
    printf("%s, %d \n", p2.name, p2.age); 

    return 0;
}

void printc(Person* p) {
    p->age = 11; 
}
