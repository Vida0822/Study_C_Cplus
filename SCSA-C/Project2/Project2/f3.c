#include<stdio.h>
#pragma warning(disable:4996)  // #pragma: 컴파일러에게 지시하는 특별한 명령 -> scanf() 사용하면 발생하는 경고 메세지를 무시함 
void main() {
	int a; 
	float b; 
	char c; 
	char d[20]; 

	//printf("문자 하나 입력:"); 
	//scanf("%c", &c); // 표준입력함수   
	//printf("정수 입력:");
	//scanf("%d", &a);  /// & : 주소 연산자 -> 변수 a의 주소를 반환해줌 -> 받은 문자를 변수 c 주소에 담음 ('대입') 
	//printf("실수 입력:");
	//scanf("%f", &b);
	//printf("문자열 입력:");
	//scanf("%s", d); // 주소 연산자 안씀: 배열 이름에는 배열의 시작 주소가 들어가기 때문에 애초에 주소를 가리킴 (주소 연산자 쓰면 이중포인터) 


	//printf("a=%d, b=%f, c=%c, d=%s\n", a, b, c, d); 


	// EX1. 약수 출력 프로그램 
	printf("====EX1. 약수 출력 프로그램==== \n");
	int num; 

	printf("정수 입력:");
	scanf("%d", &num);
	for (int i = 2; i <= num;i++) {
		if (num % i == 0) {
			printf("%d \t", i); 
			//printf("정수 %d의 약수:%d \n", num, i); 
		}
	}
	printf("\n"); 


	// EX2. 배수의 합 
	printf("=== EX2. 배수의 합 출력 프로그램==== \n");
	int num2, sum=0;

	printf("정수 입력:");
	scanf("%d", &num2);
	for (int i = num2; i <= 100 ;i++) {
		if (i % num2 == 0) {
			printf("%d의 배수: %d \n", num2, i); 
			sum += i; 
		}
	}
	printf("%d의 배수의 합: %d", num2, sum); 
}