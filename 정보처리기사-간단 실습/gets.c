#include <stdio.h>

char n[30]; 
char * test(){
    printf("입력하세요: ") ; 
    gets(n) ; 
    return n; 
}

int main(){
    char* test1 = test() ;  // char*: char형 또는 char형 배열(문자열)을 가리킬 수 있는 포인터 변수 
    char* test2 = test() ; 
    char* test3 = test() ; 

    printf("%s\n", test1) ; 
    printf("%s\n", test2) ; 
    printf("%s\n", test3) ; 
}