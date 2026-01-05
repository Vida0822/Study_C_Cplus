/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
#include<string.h>

void main() {
	char a[10] = "apple";
	char b[10] = "app_test";
	char c[10] = "abc";
	char d[10] = "applebanana";

	int n1, n2, n3;

	n1 = strncmp(a, b, 3);
	n2 = strncmp(a, c, 3);
	n3 = strncmp(a, d, 5);

	printf("n1:%d\n", n1);
	printf("n2:%d\n", n2);
	printf("n3:%d\n", n3);
}

