/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
void main() {
	int a;
	while ((a = getc(stdin)) != 'z') {
		printf("%c", a);
	}
}


