
#include <stdio.h>
#include <iostream> // 입출력 (표준 헤더파일이라 확장자 생략) 

int main() {
    printf("Hello world \n"); 

    std::cout << "Hello World" << std::endl; 

    int num = 20; 
    std::cout << num << std::endl; 

    int num2(30); 
    std::cout << num2 << std::endl; 

    return 0;
}


