#include <stdio.h> // 얘가 있어야 printf() 함수를 쓸 수 있다
#include <string.h>  // 얘가 있어야 문자열 관련 함수를 쓸수 있다

int main(){
    
    int a ; 
    scanf("%d", &a) ; // 변수 a의(주소에) 저장 
    /*
    scanf() : 변수를 입력받을 수 있도록 하는 함수 (stdio.h) - scan+f
    '&a' : 변수 a의 주소 
    --> 입력 받은 값을 변수의 '주소'에 저장해야함
    : 변수의 주소로 찾아가 그 주소가 가리키는 메모리에 값을 저장 
    */
    
    
    
    printf("%d\n", a) ; 
    /*
    printf() : 서식 출력함수 (stdio.h) - print+f
    --> param1 : 출력 형식 문자 
    --> param2 : 실제 값 
    => 값을 출력형식에 맞춰 출력하며 개행은 자동으로 되지 않는다
    */ 
    
    
    
    char b = 'A' ; 
    printf("%d\n", b) ; // 65 
    printf("%c\n", b) ; // A 
    printf("%d\n", b+1) ; // 65
    printf("%c\n", b+1) ; // B 
    /*
    C언어 자료형 
    char 
    short, int, long, long long
    float, double, long double 
    */
    
    
    /*
    조건문 & 반복문 : java와 그 종류와 문법이 일치한다
    */ 
    
    
    
    int arr[5] = {1,2,3,4,5} ; // 주소 자체가 'a'    
    for(int i = 0 ; i < 5 ; i++){
        printf("%d\n", arr[i]) ; 
    }
    char carr[6] = "KOREA" ; 
    printf("%s\n", carr) ; 
    printf("%d\n", strlen(carr)) ; // <string.h>

    int i, j , k =1;
    int a[5][5] ;  
    for(i = 0 ; i < 5; i++){
        for(j = 4 ; j >= 0 ; j--){
            a[i][j] = k; 
            k++;  
        }
    }
    for(i = 0 ; i < 5 ; i++){
        for(j = 0 ; j < 5 ; j++){
            printf("%3d", a[i][j]) ; 
        }
        printf("\n") ; 
    }

    return 0; 
    /*
    [배열]
    - 배열의 이름(a)는 배열의 주소이다. 아까는 &a를 해야 a변수의 주소를 가리킬 수 있지만 
    배열은 'a' 이렇게만 해도 '배열의 주소'를 가리킨다 
    - 선언 : "자료형 배열이름[배열크기]" , 참조 "배열이름[인덱스]"
    - C언어에선 문자열을 '문자 배열'을 통해 구현한다 
        ㄴ 이때 문자열 마지막에는 \0(널값)이 추가되기 때문에문자열의 갯수+1의 크기로 배열을 선언해야한다
            : 문자열의 시작과 끝 구분 위함 
    */  




   /*
   [함수]

   */
    return 0 ; 
}