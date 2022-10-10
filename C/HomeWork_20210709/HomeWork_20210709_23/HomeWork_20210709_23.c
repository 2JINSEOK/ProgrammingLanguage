#include <stdio.h>
// 1. 금액이 음수 값이 나옴
// 2. 메뉴에 없는 값을 입력
// 3. 처음 돈을 0원을 입력할 때 실행
// 4. 제가 돈을 300원을 가지고 있다고 가정, 메뉴 싼 생수 500원
//    프로그램 실행 (돈 부족하다고 출력)
void printMenu() {
	printf("\n\n=========================\n \
자판기 메뉴 \n \
1. 콜라 (800원)\n\
2. 생수 (500원)\n\
3. 비타민워터 (1500원)\n\
4. 종료\n \
======================== \n");
}


int main() {
	int cost;
	int rest;
	int menu,mp;
	int thou, five, hun;

	while (1) {
		printf("금액을 입력하세요 : ");
		scanf_s("%d", &cost);

		if (cost <= 0) {
			printf("다시 입력하세요.");
		}
		else if (cost < 500) {
			printf("금액이 부족합니다.");
		}
		else {
			break;
		}
		//printf("sadasdasda");
	}

	// true: 0 이외 모든 수 (대표값: 1)
	// false: 0

	// a, a()
	while (1) {		
		printMenu(); // 함수 호출

		printf("메뉴를 고르세요:");
		scanf_s("%d", &menu);
		if (menu == 1) mp = 800;		
		else if (menu == 2) mp = 500;
		else if (menu == 3) mp = 1500;
		
		else if (menu == 4) {
			printf("프로그램 종료 ..\n");
			break; // 하나의 반복문 종료
		}
		else {
			printf("다시 입력하세요 ...\n");
			continue; // 반복문 재시작
		}
		
		if (cost < mp) {
			printf("구입할 수 없습니다");
		}
		else { // cost >= mp
			cost = cost - mp;
			//printf("%d", cost);
		}

		printf("잔돈 : %d", cost);
		
		if (cost == 0) {
			break;
		}
		
		thou = cost / 1000;
		five = (cost - (1000 * thou)) / 500;
		hun = (cost - (1000 * thou) - (500 * five)) / 100;
		printf("천원 : %d, 오백원 : %d, 백원 : %d", thou, five, hun);
	}

	//
	return 0;
}


