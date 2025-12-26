#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

// 링크드 리스트 노드 정의 
typedef struct {
	int data;  // 숫자 데이터 저장 
	//Node* next;  // 다음 노드 주소 
	struct Node* next; // typedef 가 정의되기 전이라 여기서는 sturct 사용해줘야함? 
} Node; 

void main(){
	//Node node1; 
	//node1.data = 1;

	//Node* p = (Node*)malloc(sizeof(Node)); 
	//p->data = 2; 

	//printf("%d, %d \n", node1.data, p->data); 
	//free(p); 

	/*
	* 노드 입력
	*/
	Node *head=NULL, *tail = NULL, *bmp = NULL; // head: 첫 노드 주소 , tail: 마지막 노드 주소, bmp : 현재 노드 주소 
	int flag = 1; 

	while (flag) { // C에서는 boolean type 이 없다 
		bmp = (Node*)malloc(sizeof(Node));  // *** 동적 할당 
		printf("정수를 입력: "); 
		scanf("%d", &bmp->data); 

		// 링크드 리스트에 연결 
		if (head == NULL) { // 현재 bmp 가 첫번째 노드 
			head = bmp; // head에 현재 노드 주소 할당, 현재 노드가 첫번째 노드니까
			tail = bmp; // 노드가 하나이므로 마지막 노드도 됨. tail에 마지막 노드 주소 할당 
		}
		else {
			tail->next = bmp; // 기존의 마지막 노드(이전 노드)가 새 노드를 가리키게 함 
			tail = bmp; // 마지막 노드 자체를 바꿈 
		}
		tail->next = NULL;  // 쓰레기값 제거 위해 NULL 대입

		printf("반복 계속할거냐? 멈추려면 0입력"); 
		scanf("%d", &flag); 
	}


	/*
	* 노드 출력
	*/
	bmp = head; 
	while (bmp != NULL) {
		printf("node val: %d\n", bmp->data); 
		bmp = bmp->next; // 타고 가기 
	}

	/*
	메모리 해제 
	*/
	bmp = head;
	while (bmp->next != NULL) {
		head = bmp->next; 
		printf("delete note val : %d \n", bmp->data); 
		free(bmp); 
		bmp = head; 
	}
}
