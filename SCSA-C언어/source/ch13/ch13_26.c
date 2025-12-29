/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
#include<string.h>

void main() {
	char a[10]="abcdefghi";
	char b[10]="ABCDEFGHI";

	strncpy(b, a, 4);

	printf("a:%s\n", a);
	printf("b:%s\n", b);
}

