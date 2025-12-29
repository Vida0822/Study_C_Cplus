/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
#include<stdlib.h>

void main() {
	FILE *fp1, *fp2;
	int a;
	fp1 = fopen("a.txt", "w");
	if (fp1 == NULL ) {
		printf("쓰기 모드 파일오픈 실패\n");
		exit(0);
	}
	puts("문자 하나를 입력하라");
	a = getchar();
	fputc(a, fp1);
	fclose(fp1);

	fp2 = fopen("a.txt", "r");
	if (fp2 == NULL ) {
		printf("읽기 모드 파일오픈 실패\n");
		exit(0);
	}

	a = fgetc(fp2);
	printf("파일내용:%c\n", (char) a);
	fclose(fp2);
}

