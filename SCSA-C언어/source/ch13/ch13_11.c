/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
void main() {
	char str[25];
	fread(str, 1, 5, stdin);
	str[5] = '\0';
	printf("%s\n", str);
}

