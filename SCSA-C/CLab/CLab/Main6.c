
#include <stdio.h>
#include <stdlib.h>

typedef struct book { // 관례: struct 태그 = 소문자
    char title[10]; 
    int price;  
    char author[10]; 
} Book; // 관례 : typedef 이름 = 대문자 or CamelCase

void insertBook(Book** books) {
    Book* p = (Book*)malloc(sizeof(Book));
    scanf("%s", p->title); 
    scanf("%d", &p->price); 
    scanf("%s", p->author); 
    books[index] = p; 
}

void updateBook(Book* books) {

}
void deleteBook(Book* books) {

}
void findBook(Book* books) {

}
void listBook(Book* books) {

}
void funcPoint(void (*fp)(Book*), Book* book){

}

int index = 0; 
int main() {
    Book* books = (Book*)malloc(sizeof(Book) * 10); 
    int menu = 0; 
    while (1) {
        printf("1. 목록 2. 검색 3. 입력 4. 수정 5. 삭제 0. 종료 \n"); 
        scanf_s("%d", &menu); 
        switch (menu) {
        case 1: 
            funcPoint(listBook, books); 
            break; 
        case 2: 
            funcPoint(findBook, books); 
            break; 
        case 3: 
            funcPoint(insertBook, books);
            break; 
        case 4: 
            funcPoint(updateBook, books);
            break; 
        case 5: 
            funcPoint(deleteBook, books);
            break; 
        default: 
            exit(0); 
        }
    }
    return 0;
}
