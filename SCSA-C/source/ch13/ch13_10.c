/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
void main() {
	char a[] = "hello";
	fputs(a, stdout);
	puts(a);
	fputs(a, stdout);
}

