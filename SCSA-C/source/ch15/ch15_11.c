/*
 * ch15_1.c
 *
 *  Created on: 2014. 5. 5.
 *      Author: usr
 */
#include<stdio.h>

#define WINDOWS

void main() {

#ifdef WINDOWS
	printf("윈도우즈용 입니다.");
#else
	printf("기타 운영체제용 입니다.");
#endif

}

