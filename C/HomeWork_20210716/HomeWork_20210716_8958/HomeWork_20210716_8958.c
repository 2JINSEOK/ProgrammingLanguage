#include <stdio.h>
// 1. ������ ������ �𸣴µ� ��� �Է¹޾ƾ� �ϴ°���
// 2. ���͸� �Է¹����� for���� ������������
// 3. ���͸� �Է��ؼ� for���� ���������� �� printf�� ������ �ȵǴ���
int main() {
	int num,i;
	char res;
	char tmp;
	int score = 0,finalscore=0;
	printf("������ �Է��ϼ��� : ");
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