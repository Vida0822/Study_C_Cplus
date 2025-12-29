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
	char *b = "apple";
	int a_num, b_num;

	a_num = strlen(a);
	b_num = strlen(b);

	printf("a_num:%d\n", a_num);
	printf("b_num:%d\n", b_num);
}

