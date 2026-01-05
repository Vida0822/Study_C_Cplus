/*
 * ch15_1.c
 *
 *  Created on: 2014. 5. 5.
 *      Author: usr
 */
#include<stdio.h>

#define ADD(X) ((X)+(X))

void main() {
	int result = 0;
	result = ADD(2) * ADD(3);
	printf("ADD(2)*ADD(3)=%d\n", result);
}

