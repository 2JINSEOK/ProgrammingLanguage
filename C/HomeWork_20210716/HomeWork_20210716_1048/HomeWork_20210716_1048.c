#include <stdio.h>

int main() {
	int a, b, i, j;
	i = 1;
	int res;
	printf("������ �Է��ϼ���. : ");
	scanf_s("%d %d", &a, &b);
	for (j = 1; j < b + 1; j++) {
		i << 1;
	}
	// ���������� ǥ���� 01�������� �ϳ��� ������ shift
	res = a * i;
	printf("%d", res);
	return 0;
}