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
	char b[10] = "banana";
	char c[10] = "abc";
	char d[10] = "apple";

	int n1, n2, n3, n4;

	n1 = strcmp(a, b);
	n2 = strcmp(a, c);
	n3 = strcmp(a, d);

	printf("n1:%d\n", n1);
	printf("n2:%d\n", n2);
	printf("n3:%d\n", n3);
}

