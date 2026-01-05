/*
 * ch15_1.c
 *
 *  Created on: 2014. 5. 5.
 *      Author: usr
 */
#include<stdio.h>

#define TEST 1
#define MAX 100
#if(TEST == 1)
#undef MAX
#define MAX 5
#endif

void main() {
	printf("MAX=%d\n", MAX);

}

