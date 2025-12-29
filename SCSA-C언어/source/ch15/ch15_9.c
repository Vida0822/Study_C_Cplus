/*
 * ch15_1.c
 *
 *  Created on: 2014. 5. 5.
 *      Author: usr
 */
#include<stdio.h>

#define LEVEL 2

void main() {

#if(LEVEL==1)
	printf("1단계 입니다.");
#elif(LEVEL==2)
	printf("2단계 입니다.");
#elif(LEVEL==3)
	printf("3단계 입니다.");
#else
	printf("최고 단계 입니다.");
#endif

}

