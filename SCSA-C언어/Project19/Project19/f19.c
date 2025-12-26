#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#pragma warning(disable:4996) 

// 링크드 리스트 자료구조로 주소록 
// 주소록 (이름, 전화, 주소), 이름 중복안됨 (문자열 비교: strcmp(si, s2): 같으면 0 , 다르면 양수/음수)  
// 추가, 검색 (이름으로) , 전체 목록 출력, 수정, 삭제 

typedef struct{
	char name[20]; 
	char tel[20]; 
	char address[20];
	struct Node* next; 
}Node; 

Node* head = NULL, * tail = NULL; 

// 검색 
Node* searchByName(char* name) {
	// 찾으면 노드의 주소를, 못찾으면 null 반환 
	Node* bmp = head; 
	while (bmp != NULL) {
		if (!strcmp(name, bmp->name)) {
			return bmp; 
		} 
		bmp = bmp->next;  // 전진
	}
	return NULL; 
}

// 새 노드 생성 
Node* makeNode() {
	Node* bmp = (Node*)malloc(sizeof(Node));
	printf("name: ");
	scanf("%s", bmp->name);

	if (searchByName(bmp->name) != NULL) {
		printf("이름 중복됨");
		return NULL;
	}

	printf("tel: ");
	scanf("%s", bmp->tel);
	printf("address: ");
	scanf("%s", bmp->address);

	return bmp;
}


// 링크드 리스트 끝에 노드 추가 
void addNode(Node* bmp) {
	if (head == NULL) {
		head = bmp;
		tail = bmp;
	}
	else {
		tail->next = bmp;
		tail = bmp;
	}
	bmp->next = NULL;
}


// 링크드 리스트 모든 노드 출력
void listPrint() {
	Node* bmp = head; 
	while (bmp != NULL) {
		printf("name: %s, tel:%s, address:%s \n", bmp->name, bmp->tel, bmp->address); 
		bmp = bmp->next; 
	}
}

// 노드 수정 
void updateNode(Node* bmp, char *newName) {
	//bmp -> name = newName; 
}

// 노드 삭제 
void deleteNode() {

}


void main() {
	int x, flag=1; 
	Node* bmp = NULL; 
	while (flag) {
		printf("1. 추가  2. 검색  3. 수정  4. 삭제  5. 목록 출력  6. 종료 \n"); 
		scanf("%d", &x);
		switch (x) {
		case 1: 
			bmp = makeNode(); 
			if (bmp != NULL) { // 이름 중복 
				addNode(bmp); 
			}
			break; 
		case 2: {
			char name[20]; // 선언에는 레이블을 사용할 수 없습니다 -> case 실행문 중괄호로 묶어주기 
			printf("검색할 이름: ");
			scanf("%s", name);
			bmp = searchByName(name);
			printf("name: %s, tel:%s, address:%s \n", bmp->name, bmp->tel, bmp->address);
		}
		case 3: {
			char name[20], newName[20];
			printf("수정할 이름:");
			scanf("%s", name);
			
			printf("어떤 값으로 수정할까요? : ");
			scanf("%s", newName); 
		
			bmp = searchByName(name);
			updateNode(bmp , newName);
			break;
		}
		case 4:
			deleteNode(); 
			break;
		case 5:
			listPrint(); 
			break;
		case 6:
			flag = 0; 
			break;
		}
	}
}





