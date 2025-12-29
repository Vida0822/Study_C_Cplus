/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
#pragma warning(disable:4996) 

void main() {
	char a[10];
	char *buf;
	buf = fgets(a, 10, stdin);
	printf("%s\n", buf);

	buf = fgets(a, 5, stdin);
	printf("%s\n", buf);
}

