/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
void main() {
	int a[] = { 'a', 'b', 'c', 'd', 'e' };
	int i;
	for (i = 0; i < 5; i++) {
		putc(a[i], stdout);
	}
}

