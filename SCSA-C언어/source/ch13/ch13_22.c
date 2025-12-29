/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
	int number;
	char name[20];
	char dept[50];
};

void main() {
	FILE *fp1, *fp2;
	struct Student data1, data2;

	data1.number = 1;
	strcpy(data1.name, "홍길동");
	strcpy(data1.dept, "컴퓨터공학과");

	fp1 = fopen("a.txt", "w");
	if (fp1 == NULL ) {
		printf("쓰기 모드 파일오픈 실패\n");
		exit(0);
	}

	fwrite(&data1, sizeof(struct Student), 1, fp1);

	fclose(fp1);

	fp2 = fopen("a.txt", "r");
	if (fp2 == NULL ) {
		printf("읽기 모드 파일오픈 실패\n");
		exit(0);
	}

	fread(&data2, sizeof(struct Student), 1, fp2);
	printf("data2.number=%d, data2.name=%s, data2.dept=%s\n", data2.number,
			data2.name, data2.dept);

	fclose(fp2);
}

