#include <stdio.h>
//# define SIZE num
// �ĺ��� ���� �Է¹��� ����, �� ���� ��ŭ �迭�� ũ�⸦ �����ϴ� ���

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
	value: 1��
		��ǥ��

	*/
	printf("�� ���� �ĺ��ڰ� �ֽ��ϱ� ? ");
	scanf_s("%d", &num);
	while (1) {

		//printf("�� ���� �ĺ��ڰ� �ֽ��ϱ� ? ");
		//scanf_s("%d", &num);
		//int candidate[5] = { 0, };
		printf("** -1�� ������ ����˴ϴ�... **\n");
		printf("1 ~ %d �ĺ��ڰ� �ֽ��ϴ�...!\n", num);
		printf("\n\n");
		printf("�� �� �ĺ��ڸ� �����Ͻðڽ��ϱ� ? ");
		//scanf_s("%d", &vote);
		scanf_s("%d", &vote);
		if (vote == -1) break;
		else if (vote > num || vote < 0) {
			printf("��ȿ�� ��ȣ�� �ƴմϴ� !\n");
			printf("1 ~ %d ������ ��ȣ�� �����ּ��� !\n", num);
		}

		// 0 1 2 3 4 ... 10 
		/*for (i = 0; i < num; i++) {
			if(i == vote-1) cnt[i] += 1;
		}*/

		// 5�� �ĺ��� -> 4�� �ε����� ���� (��ǥ�� ����)�� ����
		// �ֻ��� ������
		cnt[vote - 1] ++; // ��¥ ���� ���!



		printf("\n\n");
		printf("========== Voting Result ==========\n");
		for (i = 0; i < num; i++) {
			printf("\t%d\t\t%d          \n", i + 1, cnt[i]);
		}


		/*else if (vote > num) {
			printf("��ȿ�� ��ȣ�� �ƴմϴ� !\n");
			printf("1 ~ %d ������ ��ȣ�� �����ּ��� !\n", num);
		}*/
	}
	printf("���α׷��� ����˴ϴ� ..");
	return 0;

}