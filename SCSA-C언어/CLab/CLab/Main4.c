
#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
    char name[10];
    int age;

} Person;

int main_4() { 
    struct Person p; 
    strcpy(p.name, "둘리");  
    p.age = 7; 

    //Person* pp = p;  -> Error : 구조체 이름은 주소가 아니다. 
    Person* pp = &p; 
    printf("%d \n", (*pp).age);  // *보다 . 의 우선순위가 높기 때문에 괄호 필수 
    printf("%d \n", pp->age); 

    return 0;
}
