#include <stdio.h>

int main() {
	int n, i, ans = 0;
	printf("���� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);

	for (i = 1; i < n + 1; i++) {
		if (i % 2 == 0) {
			ans += i;
		}
	}
	printf("1 ~ %d �� 2�� ����� ���� %d �Դϴ�.", n, ans);
	return 0;
}