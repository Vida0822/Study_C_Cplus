#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable:4996)

// 주소록 노드 구조체
typedef struct Node {
    char name[20];
    char tel[20];
    char address[20];
    struct Node* next;
} Node;

Node* head = NULL;
Node* tail = NULL;

/* 이름으로 검색 */
Node* searchByName(char* name) {
    Node* cur = head;
    while (cur != NULL) {
        if (!strcmp(name, cur->name))
            return cur;
        cur = cur->next;
    }
    return NULL;
}

/* 새 노드 생성 */
Node* makeNode() {
    Node* node = (Node*)malloc(sizeof(Node));

    printf("name: ");
    scanf("%s", node->name);

    if (searchByName(node->name) != NULL) {
        printf("이름이 중복됩니다.\n");
        free(node);
        return NULL;
    }

    printf("tel: ");
    scanf("%s", node->tel);

    printf("address: ");
    scanf("%s", node->address);

    node->next = NULL;
    return node;
}

/* 노드 추가 */
void addNode(Node* node) {
    if (head == NULL) {
        head = node;
        tail = node;
    }
    else {
        tail->next = node;
        tail = node;
    }
}

/* 전체 출력 */
void listPrint() {
    Node* cur = head;
    if (cur == NULL) {
        printf("주소록이 비어 있습니다.\n");
        return;
    }

    while (cur != NULL) {
        printf("name: %s, tel: %s, address: %s\n",
            cur->name, cur->tel, cur->address);
        cur = cur->next;
    }
}

/* 노드 수정 */
void updateNode(Node* node) {
    int sel;

    if (node == NULL) {
        printf("해당 이름이 존재하지 않습니다.\n");
        return;
    }

    printf("1. 이름  2. 전화번호  3. 주소\n");
    printf("수정할 항목 선택: ");
    scanf("%d", &sel);

    if (sel == 1) {
        char newName[20];
        printf("새 이름: ");
        scanf("%s", newName);

        if (searchByName(newName) != NULL) {
            printf("이미 존재하는 이름입니다.\n");
            return;
        }
        strcpy(node->name, newName);
    }
    else if (sel == 2) {
        printf("새 전화번호: ");
        scanf("%s", node->tel);
    }
    else if (sel == 3) {
        printf("새 주소: ");
        scanf("%s", node->address);
    }
    else {
        printf("잘못된 선택입니다.\n");
    }
}

/* 노드 삭제 */
void deleteNode() {
    char name[20];
    Node* cur = head;
    Node* prev = NULL;

    printf("삭제할 이름: ");
    scanf("%s", name);

    while (cur != NULL) {
        if (!strcmp(cur->name, name)) {

            // 첫 노드 삭제
            if (prev == NULL)
                head = cur->next;
            else
                prev->next = cur->next;

            // 마지막 노드 삭제
            if (cur == tail)
                tail = prev;

            free(cur);
            printf("삭제 완료\n");
            return;
        }
        prev = cur;
        cur = cur->next;
    }

    printf("해당 이름이 존재하지 않습니다.\n");
}


/*
파일 읽기
: 프로그램 시작 시 파일 내용 읽어 리스트에 저장
*/
void readFile() {
    FILE* fp = fopen("data.dat", "r");
    if (fp == NULL) {
        printf("파일 읽기 실패 \n");
        return; 
    }

    Node* bmp = NULL;  
    while (1) {
        bmp = (Node*)malloc(sizeof(Node)); // 노드 생성 
        if (fread(bmp, sizeof(Node), 1, fp) < 1) { // 노드 한개 만큼 fp에서 읽어와라 ( < 1: 할당받은게 없음 (읽은 데이터 X)) 
            free(bmp); 
            break; 
        }
        else {
            addNode(bmp); 
        } // if
    } // while 
    fclose(fp); 
} // readFile 


/*
파일 저장 
: 프로그램 종료 시 리스트 내용 파일에 저장 
*/
void writeFile() {

    FILE* fp = fopen("data.dat", "w");
    if (fp == NULL) {
        printf("파일 열기 실패 \n");
        return;
    }

    Node* bmp = head; 
    while (bmp != NULL) {
        head = bmp->next;
        fwrite(bmp, sizeof(Node), 1, fp); // 노드 한개 만큼 fp에 써라
        printf("name:%s 메모리 해제\n", bmp->name);
        free(bmp); 
        //bmp = bmp->next; // bmp를 해제했는데 해제한 bmp를 참조해서 발생하는 오류 
        bmp = head; // 미리 받아둔 head 를 참조해야함 
    }
    fclose(fp);
}


int main() {
    int menu;
    Node* node = NULL;
    readFile(); 

    while (1) {
        printf("\n1. 추가  2. 검색  3. 수정  4. 삭제  5. 목록 출력  6. 종료\n");
        printf("선택: ");
        scanf("%d", &menu);

        switch (menu) {
        case 1:
            node = makeNode();
            if (node != NULL)
                addNode(node);
            break;

        case 2: {
            char name[20];
            printf("검색할 이름: ");
            scanf("%s", name);

            node = searchByName(name);
            if (node != NULL)
                printf("name: %s, tel: %s, address: %s\n",
                    node->name, node->tel, node->address);
            else
                printf("검색 결과 없음\n");
            break;
        }

        case 3: {
            char name[20];
            printf("수정할 이름: ");
            scanf("%s", name);

            node = searchByName(name);
            updateNode(node);
            break;
        }

        case 4:
            deleteNode();
            break;

        case 5:
            listPrint();
            break;

        case 6:
            printf("프로그램 종료\n");
            writeFile(); 
            return 0;

        default:
            printf("잘못된 선택입니다.\n");
        }
    }
}
