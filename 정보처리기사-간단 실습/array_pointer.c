#include <stdio.h>

void main(){

    char a[] = "Art" ; 
    // 문자열도 배열로 저장 (0번지 : Art, A/ 1번지 : r , 2번지 : t)

    char * p = NULL ;  // 문자를 가리킬 수 있는 포인터 변수
    p = a ; 

    printf("%s\n", a) ; 
    printf("%c\n", *p) ; // 0번지의 값 
    printf("%c\n", *a) ; // 0번지의 값
    printf("%s\n", p) ; 

    for(int i = 0 ; a[i] != ''; i++)
        printf("%c", a[i]) ;
}