/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
void main() {
	FILE *fp1, *fp2;
	fp1 = fopen("a.txt", "r");
	if (fp1 != NULL ) {
		printf("읽기모드 파일오픈 성공\n");
	} else {
		printf("읽기모드 파일오픈 실패\n");
	}

	fp2 = fopen("a.txt", "w");
	if (fp2 != NULL ) {
		printf("쓰기모드 파일오픈 성공\n");
	} else {
		printf("쓰기모드 파일오픈 실패\n");
	}

	fclose(fp1);
	fclose(fp2);
}

