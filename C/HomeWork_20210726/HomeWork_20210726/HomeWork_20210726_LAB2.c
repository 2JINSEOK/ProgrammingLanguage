#include <stdio.h>
//# define SIZE num
// 후보자 수를 입력받은 다음, 그 숫자 만큼 배열의 크기를 설정하는 방법

int main() {
	int num;
	//int candidate[100]; //
	/*
	index: 0 1 2 3 4 .... 99
	value:


	*/
	int vote;
	int i;
	int cnt[100] = { 0, };
	/*
	index: 0(1)  1(2)  2  3  4  ....  99
	value: 1번
		득표수

	*/
	printf("몇 명의 후보자가 있습니까 ? ");
	scanf_s("%d", &num);
	while (1) {

		//printf("몇 명의 후보자가 있습니까 ? ");
		//scanf_s("%d", &num);
		//int candidate[5] = { 0, };
		printf("** -1을 누르면 종료됩니다... **\n");
		printf("1 ~ %d 후보자가 있습니다...!\n", num);
		printf("\n\n");
		printf("몇 번 후보자를 선택하시겠습니까 ? ");
		//scanf_s("%d", &vote);
		scanf_s("%d", &vote);
		if (vote == -1) break;
		else if (vote > num || vote < 0) {
			printf("유효한 번호가 아닙니다 !\n");
			printf("1 ~ %d 사이의 번호를 눌러주세요 !\n", num);
		}

		// 0 1 2 3 4 ... 10 
		/*for (i = 0; i < num; i++) {
			if(i == vote-1) cnt[i] += 1;
		}*/

		// 5번 후보자 -> 4번 인덱스의 원소 (득표수 저장)를 증가
		// 주사위 굴리기
		cnt[vote - 1] ++; // 진짜 많이 사용!



		printf("\n\n");
		printf("========== Voting Result ==========\n");
		for (i = 0; i < num; i++) {
			printf("\t%d\t\t%d          \n", i + 1, cnt[i]);
		}


		/*else if (vote > num) {
			printf("유효한 번호가 아닙니다 !\n");
			printf("1 ~ %d 사이의 번호를 눌러주세요 !\n", num);
		}*/
	}
	printf("프로그램이 종료됩니다 ..");
	return 0;

}