/*
 * ch13_2.c
 *
 *  Created on: 2014. 4. 10.
 *      Author: usr
 */
#include<stdio.h>
#include<string.h>

void main() {
	char id[10] = "king";
	char pwd[10] = "1234";
	char input_id[10];
	char input_pwd[10];

	puts("id를 입력하시오");
	scanf("%s", input_id);
	puts("pwd를 입력하시오");
	scanf("%s", input_pwd);

	if (strcmp(id, input_id) == 0) {
		if (strcmp(pwd, input_pwd) == 0) {
			puts("로그인 성공");
		} else {
			puts("pwd를 잘못입력하였습니다.");
		}
	} else {
		puts("id를 잘못입력하였습니다.");
	}
}

