# include<stdio.h>
# define SIZE 5
/*
�迭 (array)
: ���� ������ ������ Ÿ���� ������ ������ ������ �� �ִ� ����
: �ϳ��� �迭 �̸����� ����

�ε��� (index)
: �� ������ ���� (0���� ����!)

*/
int main() {
	// 1. �迭 �������ϰ� ������ �ʱ�ȭ X
	// 5�� ������� ������ �����ϴ� �迭
	int grade[SIZE]; // �迭 ���� ([5] �迭�� ũ�� (���� �Ҵ�))
	int i=0;
	//printf("i: %d\n", grade[0]);

	//for (i = 0; i < SIZE; i++) { // ++i, i++ 
	//   scanf_s("%d", &grade[0]);
	//}
	// i ++, ++i => i = i + 1
	/*
	* i = 1
	nextif = i ++; -- 1
	1) nextif = i;
	2) i = i + 1;
	nextif = 1
	i = 2

	nextip = ++ i; -- 2
	1) i = i + 1;
	2) nextip = i;
	nextip = 2
	i = 2

	*/


	/*grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;*/
	//grade[5] = 60; // �ε����� ������ ����ٴ� ���� �߻�

	printf("%d", grade[0]);

	// 2. �迭 �������ڸ��� ������ �ʱ�ȭ
	int score1[] = { 10, 20, 30, 40, 50 }; // ����� ���� ����
	printf("%d", sizeof(score1)); // 20 
	printf("%d", sizeof(score1[0])); // 4
	printf("%d\n", sizeof(score1) / sizeof(score1[0])); // 20 / 4 ==> 5

	printf("score1: %p\n", score1); // 20 / 4 ==> 5
	printf("&score1[0]: %p\n", &score1[0]);

	int score2[] = { 10, 20, 30, 40, 50 };
	printf("score2: %p\n", score2);
	printf("&score2[0]: %p\n", &score2[0]);
	
	//score1[];
	//score1[2] == score2[2];
	for(i=0;i<SIZE;i++){
		if (score1[i] != score2[i]){
			printf("�ٸ��ϴ�");
			break;
			
			}
	}
	if(i==SIZE)printf("�����ϴ�.");
	/*
	1) �� �迭�� ���Ұ� �������� ?
	score1 == score2 (??)
	&score1[0] = &score2[0] (�ּҰ��� �������� Ȯ��)



	*/



}