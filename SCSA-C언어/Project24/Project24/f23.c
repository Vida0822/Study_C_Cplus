#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

#include <direct.h>



void main() {

	// 경로 확인
	char buf[256];
	_getcwd(buf, 256);
	printf("현재 경로: %s\n", buf);

	// 파일 입출력 
	FILE* fp1, * fp2;
	fp1 = fopen("a.txt", "r");
	fp2 = fopen("b.txt", "w");
	if (fp1 == NULL || fp2 == NULL) {
		printf("파일 오픈 에러");
		exit(0);
	}

	int data = 0;
	while ((data = fgetc(fp1)) != -1) {
		printf("%c", data);
		fputc(data, fp2); 
	}
}