/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
#include<stdlib.h>

void main() {
	FILE *fp;
	int data, off;
	fp = fopen("a.txt", "r");
	if (fp == NULL ) {
		printf("읽기 모드 파일오픈 실패\n");
		exit(0);
	}

	fseek(fp, 10, SEEK_SET);
	data = fgetc(fp);
	printf("%c\n", data);

	off = ftell(fp);
	printf("현재위치 : %d\n", off);

	rewind(fp);
	data = fgetc(fp);
	printf("%c\n", data);

	fclose(fp);
}

