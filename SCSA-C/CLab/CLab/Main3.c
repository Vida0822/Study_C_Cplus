
#include <stdio.h>
#include <stdlib.h>

// 1, 3, 5 라는 3개의 값을 가지고 구성할 수 있는 2개의 값들을 표현해보세요 
void recursive(int* arr, int* sel, int arrlen, int sellen, int k, int* v) {
    // basis part 
    if (k == sellen) { // 종료 조건 만족 
        for (int i = 0; i < sellen; i++) {
            printf("%d ", sel[i]); 
        }
        printf("\n"); 
        return; 
    }

    // inductive part 
    //for(int i = 0 ; i < arrlen ; i++)
    //{
    //    sel[k] = arr[i];
    //    recursive(arr, sel, arrlen, sellen, k + 1);
    //}
    //if (v[0] == 0) {
    //    sel[k] = arr[0];
    //    v[0] = 1; 
    //    recursive(arr, sel, arrlen, sellen, k + 1, v);
    //    v[0] = 0;
    //}
    //
    //if (v[1] == 0) {
    //    sel[k] = arr[1];
    //    v[1] = 1;
    //    recursive(arr, sel, arrlen, sellen, k + 1, v);
    //    v[1] = 0;
    //}
    //if (v[2] == 0) {
    //    sel[k] = arr[2];
    //    v[2] = 1;
    //    recursive(arr, sel, arrlen, sellen, k + 1, v);
    //    v[2] = 0;
    //}
    for (int i = 0; i < sellen; i++) {
        if (v[i] == 0) {
            sel[k] = arr[i];
            v[i] = 1;
            recursive(arr, sel, arrlen, sellen, k + 1, v);
            v[i] = 0;
        }
    }
}

int main_3() {
    int arr[3] = { 1, 3, 5 }; 
    int sel[3]; 
    int v[3] = { 0, 0, 0 };

    sel[0] = arr[0]; 
    v[0] = 1; 
    recursive(arr, sel, 3, 3, 1, v);
    v[0] = 0;

    sel[0] = arr[1];
    v[1] = 1;
    recursive(arr, sel, 3, 3, 1, v);
    v[1] = 0;

    sel[0] = arr[2];
    v[2] = 1;
    recursive(arr, sel, 3, 3, 1, v);
    v[2] = 0;
}
