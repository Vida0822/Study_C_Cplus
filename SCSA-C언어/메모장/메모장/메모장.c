#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996) 

void main() {
	int flag = 1;
	int mode;
	char fileName[20];

	while (flag) {
		printf("수행할 작업을 선택하시오: 1. 읽기 2. 쓰기 3. 프로그램 종료 \n"); 
		scanf("%d", &mode);

		printf("작업할 파일명을 입력하시오.");
		scanf("%s", &fileName);

		switch (mode) {
			
		case 1: {
			FILE* fp1; 
			fp1 = fopen(fileName, "r");
            int data = 0;
			if (fp1 == NULL) {
				printf("없는 파일입니다. \n");
			}
			else {
				while ((data = fgetc(fp1)) != EOF) {
					fputc(data, stdout);
				}
				fclose(fp1); 
			}
			break; 
		}
        case 2: {
            FILE* fp2;
            int mode2;

            // 파일 존재 여부 확인
            fp2 = fopen(fileName, "r");

            if (fp2 != NULL) {   // 파일이 이미 존재
                fclose(fp2);

                printf("파일 이름 중복\n");
                printf("작업을 선택하세요\n");
                printf("1. 파일명 다시 입력\n");
                printf("2. 새로 쓰기\n");
                printf("3. 이어쓰기\n");
                scanf("%d", &mode2);

                if (mode2 == 1) {
                    scanf("%s", fileName);
                    fp2 = fopen(fileName, "w");
                }
                else if (mode2 == 2) {
                    fp2 = fopen(fileName, "w");
                }
                else if (mode2 == 3) {
                    fp2 = fopen(fileName, "a");
                }
                else {
                    printf("잘못된 선택\n");
                    break;
                }
            }
            else {
                // 파일이 없으면 그냥 새로 생성
                fp2 = fopen(fileName, "w");
            }

            if (fp2 == NULL) {
                printf("파일 생성 실패\n");
                break;
            }

            // 데이터 입력 
            getchar();
            int data;
            while ((data = getchar()) != '\n') {
                fputc(data, fp2);
            }
            fputc('\n', fp2);   // 엔터도 저장

            fclose(fp2);
            break;
        }
		case 3: 
			flag = 0; 
			break; 
		}
	}
}



