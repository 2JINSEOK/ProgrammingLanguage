#include <stdio.h>

/*
�Լ� �ۼ���
1) main() ��
2) main() �Ʒ�
*/

// n�� �Է¹޾Ƽ� n!
// ��ȯ�� �Լ��̸� (�Ű�����) // �Ű����ִ� ����
int factorial(int n); // �̹� ������ �ߵǾ��ִ� �Լ� ���� (�������� ���)
int combination(int n, int r);
//int n; // ��������

int main() {
	// �����Լ� �ȿ��� �����ǰ� �����Լ��� ����Ǹ� �Ҹ�

	int n, r; // ��������
	int comb;
	/*int i, j, k, ans;
	int numerator = 1;
	int denominator1 = 1;
	int denominator2 = 1;*/

	printf("n�� �Է��Ͻÿ� : ");
	scanf_s("%d", &n); // 5
	printf("r�� �Է��Ͻÿ� : ");
	scanf_s("%d", &r); // 3

	// n => ����ڿ��� �Է¹��� ������ (5��� ����)
	// 1. int factorial(int n1); ȣ��
	// 2. n1 (�Ű�����) = n (���ڰ�);
	// 3. ���� �Լ��� return ��ȯ
	
	printf("%dC%d => %d", n, r, combination(n, r));
	// �Լ��� ����ϸ� ���� ��
	// 1. �ߺ� ����
	// 2. �������� ���� (������� �״�� �����ϴ� �ͺ���)

	/*for (i = 1; i < n + 1; i++) {
		numerator = numerator * i;
	}
	for (j = 1; j < r + 1; j++) {
		denominator1 = denominator1 * j;
	}
	for (k = 1; k < (n - r + 1); k++) {
		denominator2 = denominator2 * k;
	}
	ans = numerator / (denominator1 * denominator2);
	printf("%dC%d => %d", n, r, ans);*/
	return 0;
}

int combination(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int factorial(int n) { // ��������
	// n1 (�Ű�����)�� ������ �Ҹ�
	// �Լ� ȣ��ÿ� �����ǰ� �Լ� ȣ�� ����Ǹ� �Ҹ�
	 
	int ans = 1;
	int i;
	for (i = 1; i < n + 1; i++) {
		ans = ans * i;
	}
	return ans;

}