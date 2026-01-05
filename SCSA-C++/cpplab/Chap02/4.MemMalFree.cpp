//
//#include <stdio.h>
//#include <stdlib.h>
//#include <cstring>
//int main(void) {
//    char name1[10] = "lee";
//    char name2[10] = "lee";
//    const char* name3 = "lee";
//    const char* name4 = "lee";
//
//    char* name5 = (char*)malloc(sizeof(char) * 10 + 1);
//    strcpy(name5, "lee");
//    char* name6 = (char*)malloc(sizeof(char) * 10 + 1);
//    strcpy(name6, "lee");
//
//    printf("%u %u %u %u", name3, name4, name5, name6);
//
//    free(name5);
//    free(name6);
//
//    int* arr[3];
//    arr[0] = (int*)malloc(sizeof(int) * 3);
//    arr[1] = (int*)malloc(sizeof(int) * 3);
//    arr[2] = (int*)malloc(sizeof(int) * 3);
//
//    free(arr[0]);
//    free(arr[1]);
//    free(arr[2]);
//
//    return 0;
//}