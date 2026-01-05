/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
void main() {
	char str[] = "hello world";
	fwrite(str, 1, 5, stdout);
	fwrite(str+5, 1, 5, stdout);
}

