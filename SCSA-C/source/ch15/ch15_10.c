#include<stdio.h>

#define TEST

#ifdef TEST
#define STR "TEST가 정의되어 있음"
#else
#define STR "TEST가 정의되지 않았음"
#endif

void main() {
	printf("STR=%s\n", STR);
}
