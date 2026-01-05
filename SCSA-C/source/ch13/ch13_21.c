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
	float b;
	char str[10];
	fp1 = fopen("a.txt", "r");
	if (fp1 == NULL ) {
		printf("읽기 모드 파일오픈 실패\n");
		exit(0);
	}

	fscanf(fp1, "%d%f%s", &a, &b, &str);
	printf("a=%d, b=%f, str=%s\n", a, b, str);

	fp2 = fopen("b.txt", "w");
	if (fp2 == NULL ) {
		printf("쓰기 모드 파일오픈 실패\n");
		exit(0);
	}

	fprintf(fp2, "a=%d, b=%f, str=%s\n", a, b, str);

	fclose(fp1);
	fclose(fp2);
}

