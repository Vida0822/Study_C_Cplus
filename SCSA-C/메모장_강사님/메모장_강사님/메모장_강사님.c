#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<io.h> 

#pragma warning(disable:4996) 

/*
파일 읽기 함수 
*/
void memoRead(const char* fname) {
	FILE* fp = fopen(fname, "r"); 
	char buf[255]; 
	while ((fgets(buf, 255, fp)) != NULL) {
		printf("%s", buf);
	}
}

/*
파일명 입력받는 함수 
*/
char inFname(char* fname, int mode) { // mode: 1(읽기) 2(쓰기)
	int x; 
	char mo = 'w' ;   // default mode 값 : w (새로 쓰기) 
	printf("파일명을 입력하시오."); 
	scanf("%s", fname); 

	// 쓰기일 때 
	if (mode == 2) {
		struct _finddata_t c_file;
		intptr_t hFile;

		while (1) {
			mo = 'w'; 
			// Findfirst .c file in current directory 
			if ((hFile = _findfirst(fname, &c_file)) == -1L)
				break; 
			else {
				printf("중복된 파일명 / 1. 파일명 다시 입력 2. 새로 쓰기 3. 이어쓰기");
				scanf("%x", &x);
				if (x == 1) {
					printf("파일명을 입력하시오");
					scanf("%s", fname);
					// 루프 돌아서 새로 입력한게 중복아닌지 다시 확인
				}
				else if (x == 2) {
					break;
				}
				else if (x == 3) {
					mo = 'a';
					break;
				}
			}
			return mo; 
		}
	}
	return mo; 
}

/*
파일 쓰기 함수
*/
void memoWrite(const char* fname, char mo) {
	char mode[5]; // 문자열 형태로 만들어주기 위함 - fopen(char const* fname, char const* mode) 
	mode[0] = mo;  
	mode[1] = '\0'; // 널(null) 문자 또는 문자열의 끝을 나타내는 종료 문자

	char buf[255]; 
	FILE* fp = fopen(fname, mode);

	while (getchar() != '\n');

	while (1) {	
		printf("파일 내용 입력. 멈추려면 stop 입력 \n"); 
		fgets(buf, 255, stdin); // stdin : 표준 입력
		if (!strncmp(buf, "stop", 4)) { // strncmp : 문자열 비교 (n개만)  -> buf의 앞 4글자 vs "stop"의 앞 4글자 (-> "stop") 
			break; 
		}
		fputs(buf, fp); 
	}
	fclose(fp); 
}

void main() {
	char fname[20]; 
	int menu, flag = 1; 
	char mo = '\0'; 

	while (flag) {
		printf("1. 읽기 2. 쓰기 3. 종료 \n"); 
		scanf("%d", &menu); 

		switch (menu) {
		case 1: 
			inFname(fname, 1); 
			memoRead(fname); 
			break; 
		case 2:
			mo = inFname(fname, 2); 
			memoWrite(fname, mo);
			break; 
		case 3 : 
			flag = 0; 
			break; 
		}
	}
}



