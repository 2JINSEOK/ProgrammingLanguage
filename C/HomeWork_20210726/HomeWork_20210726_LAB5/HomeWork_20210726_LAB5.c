# include <stdio.h>
# include <limits.h>

int main() {
	int num;
	int input;
	int i, j;
	int number[100];
	int rank[100] = { 0, };
	
	/*for (i = 0; i < 100; i++) {
		printf("%d ", rank[i]);
	}*/

	printf("�� ���� �� ? ");
	scanf_s("%d", &num);
	/*for (i = 0; i < num; i++) {
		printf("���� �Է��Ͻÿ� : ");
		scanf_s("%d", &input2);
		input1[i] = input2;
	}
	for (j = 0; j < num; j++) {
		if (input1[j] > max) {
			max = input1[j];
		}
	}*/
	for (i = 0; i < num; i++) {
		printf("���� �Է��Ͻÿ� : ");
		scanf_s("%d", &input);
		number[i] = input;

	}
	
	for (i = 0; i < num; i++) {
		rank[i] = 1;
		for (j = 0; j < num; j++) {
			if (number[i] > number[j]) rank[i]++;
			
		}
	}
	
	printf("========= ���� �ű�� =========\n");
	for (i = 0; i < num; i++) {
		printf("num: %d => order: %d\n",number[i], rank[i]);
	}

	return 0;
}