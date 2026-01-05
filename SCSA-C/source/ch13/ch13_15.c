/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
void main() {
	int a;
	float b;
	char c[5];

	fscanf(stdin, "%d%f%s", &a, &b, &c);
	fprintf(stdout, "a=%d, b=%f, c=%s\n", a, b, c);
}

