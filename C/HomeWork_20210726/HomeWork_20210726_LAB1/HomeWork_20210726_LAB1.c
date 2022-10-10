#include<stdio.h>
// int 값을 초기화 시키지 않을 때 마다 에러가 뜨는이유
// 에러 출력하는 방법
int main() {
	char seat[10] = {'O','O','O','O','O','O','O','O','O','O'};
	int choice;
	int i;
	int j;

	while (1) {

		printf("====== SEATS =======\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("====================\n");

		for (i = 0; i < 10; i++) {
			printf("%c ", seat[i]);
		}
		printf("\n");
		
		// 모든 좌석이 꽉 찼는지 확인
		// seat 배열이 모두 'X'인지 확인
		// 하나라도 'O' 존재하면 안됨
		for (i = 0; i < 10; i++) {
			if (seat[i] == 'O') break; // 빈 좌석이 있음	
		}
		if (i == 10) {
			printf("모든 좌석이 꽉 찼습니다 ... !"); //
			printf("프로그램이 종료됩니다 ..\n");
			break; // while(1) 종료
		}

		/*
		i = 0
		seat[9] = 'X'
		break;


		
		*/

		printf("종료하고자 하면 -1을 입력하시오 ..\n");
	
		printf("좌석을 선택하시오 : ");
		scanf_s("%d", &choice);
		

		if (choice == -1) { // 종료 조건
			printf("프로그램이 종료됩니다 ..");
			break;
		}
		if (choice > 10 || choice < 1) {
			printf("유효한 좌석 번호가 아닙니다 !\n");
			printf("1 ~ 10번 좌석을 입력해주세요!\n");
			continue; // 반복문 재시작!
		}

		// 현재 좌석 - 'X' -- 1
		// 현재 좌석 - 'O'
		if (seat[choice - 1] == 'X') {
			printf("%d번 자리는 예약할 수 없습니다 !\n", choice);
		}

		// 일반 평서문
		else if (seat[choice - 1] == 'O') {
			seat[choice - 1] = 'X';
			printf("예약되었습니다 !\n"); // 무조건 출력
		}
		
	}
	//
	

	return 0;
}