#include <stdio.h>
#include<math.h>
// 1. �� ���� ������ �Ҽ��� ��� ���� ���ΰ�
// 2. �Ҽ� ���ǿ��� 2,3,5�� ���Խ�Ű�� ���
int main() {
	int m, n;//m,n�� (1 �� M �� N �� 1,000,000)�̶�� ������ �־�� �ϴ���
	int i, j;
	int cnt;

	//printf("���� M, N�� �Է��ϼ��� : "); // ���� ����
	scanf_s("%d %d", &m, &n);
	//printf("%d %d\n", m, n);
	/*
	7 (�Ҽ�)
	 2 3 4 5 6 

	8 (�Ҽ� x)
	 2 3 // 4  5 6 7


	24 (�Ҽ� X)
	2 3 4 // 6 8 12


	25 (�Ҽ� X)
	5 //
	
	*/


	for (i = m; i <= n; i++) { // 7
		cnt = 0; // cnt = 0 �ʱ�ȭ 
		for (j = 2; j <= (int)sqrt(i); j++) { // 1 2 3 4 5 6 7 
			if (i % j == 0) {
				break;
			}
		}
		if (j== (int)sqrt(i)+1) {
			printf("%d\n", i);
		}

		/*if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			printf("%d\n", i);
		}*/

	}
	
	return 0;
}