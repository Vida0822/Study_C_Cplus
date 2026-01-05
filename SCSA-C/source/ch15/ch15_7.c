#include<stdio.h>

#define FLAG 1

#if FLAG
#define STR "true"
#else
#define STR "false"
#endif

void main() {
	printf("STR=%s\n", STR);
}
