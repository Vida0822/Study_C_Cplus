/*
 * ch15_1.c
 *
 *  Created on: 2014. 5. 5.
 *      Author: usr
 */
#include<stdio.h>

#define TEST 2

#if(TEST==1)
#define MAX 100
#elif(TEST==2)
#define MAX 200
#else
#define MAX 300
#endif

void main() {
	printf("MAX=%d\n", MAX);
}

