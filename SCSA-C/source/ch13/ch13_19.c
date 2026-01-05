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
	char name[20];
	fp1 = fopen("a.txt", "w");
	if (fp1 == NULL ) {
		printf("쓰기 모드 파일오픈 실패\n");
		exit(0);
	}
	puts("이름을 입력하라");
	gets(name);
	fputs(name, fp1);
	fclose(fp1);

	fp2 = fopen("a.txt", "r");
	if (fp2 == NULL ) {
		printf("읽기 모드 파일오픈 실패\n");
		exit(0);
	}

	fgets(name, 10, fp2);
	printf("입력한 이름:%s\n", name);
	fclose(fp2);
}

