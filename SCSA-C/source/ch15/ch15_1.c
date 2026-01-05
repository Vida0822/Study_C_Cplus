/*
 * ch15_1.c
 *
 *  Created on: 2014. 5. 5.
 *      Author: usr
 */
#include<stdio.h>
#define SIZE 5

void main() {
	int arr[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		arr[i] = i + 1;
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d\t", arr[i]);
	}

}

