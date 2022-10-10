#include <stdio.h>
// 1. 문자의 개수를 모르는데 몇개를 입력받아야 하는건지
// 2. 엔터를 입력받으면 for문을 빠져나오도록
// 3. 엔터를 입력해서 for문을 빠져나오면 왜 printf가 실행이 안되는지
int main() {
	int num,i;
	char res;
	char tmp;
	int score = 0,finalscore=0;
	printf("개수를 입력하세요 : ");
	scanf_s("%d", &num);
	//printf("%d", num);
	scanf_s("%c", &tmp, 1);
	// enter
	/*
	5
	O O X X O X X O O O
	1 2 0 0 3 0 0 1 2 3

	OOXXOOXXOO
	OXOXOXOXOXOXOX
	OOOOOOOOOO
	OOOOXOOOOXOOOOX
	*/

	for (i = 1; i <= num; i++) {
		finalscore = 0;
		score = 0;
		while (1) {
			scanf_s("%c", &res, 1);
			if (res == '\n') {
				break;
			}
			else if (res == 'O') {
				score++;
				finalscore += score;
			}
			else if (res == 'X') {
				score = 0;
			}
			

	
		}
		printf("%d\n", finalscore);
	}
	
	//printf("sadjfhalk");
	return 0;
}