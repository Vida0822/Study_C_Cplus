/*
 * ch15_1.c
 *
 *  Created on: 2014. 5. 5.
 *      Author: usr
 */
#include<stdio.h>

#define PI 3.14
#define STR "abc"
#define MAX 100
#define MIN -10

void main() {
	int r = 10;
	printf("원의 넓이는 %f이다.\n", PI * r * r);
	printf("문자열은 %s이다.\n", STR);
	printf("최대값은 %d이다.\n", MAX);
	printf("최소값은 %d이다.\n", MIN);
}

