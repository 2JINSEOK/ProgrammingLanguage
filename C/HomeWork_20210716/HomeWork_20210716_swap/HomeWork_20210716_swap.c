#include <stdio.h>
// �� ���� ������� ��ȯ�޴� ���
// swap �Լ����� ���� ���� ��� �޾ƾ� �ϴ���

void swap(int x, int y) {
	int res1,res2, tmp;
	
	printf("swap �� : x = %d, y = %d\n", x, y);
	tmp = x;
	x = y;
	y = tmp;
	//res1 = x;
	//res2 = y;
	printf("swap �� : x = %d, y = %d\n", x, y);
	// 1. �迭 (int a[] = {x, y})
	// 2. ������

	//return 0; // (res1, res2)
}
int sum(int x, int y) {
	printf("sum ����!");
	return x + y;
}

void main() {
	int x, y;
	
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);
	swap(x, y); // 3, 5
	//printf("%d", re);
						 
						 
	// 1. swap(3, 5);
	// 2. int swap(int x, int y)
	// int x = 3, int y = 5
	// 3. �Լ� ����~~
	// 4. return



	//return 0; // ������ ����
}