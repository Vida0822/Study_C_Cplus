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
	char data[250];
	fp1 = fopen("a.txt", "r");
	if (fp1 == NULL ) {
		printf("읽기 모드 파일오픈 실패\n");
		exit(0);
	}

	fp2 = fopen("b.txt", "w");
	if (fp2 == NULL ) {
		printf("쓰기 모드 파일오픈 실패\n");
		exit(0);
	}

	while (fgets(data, 250, fp1) != NULL ) {
		fputs(data, fp2);
	}

	fclose(fp1);
	fclose(fp2);
}

