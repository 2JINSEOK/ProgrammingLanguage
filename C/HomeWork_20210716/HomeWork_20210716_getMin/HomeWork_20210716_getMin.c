#include <stdio.h>
int res;
int getMin(int x, int y) {

	//int res;

	if (x < y) {
		res = x;
	}
	else if (y < x) {
		res = y;
	}
	else {
		printf("error");
	}

	return res;
}

int main() {
	int x, y;
	//int res;

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);
	res = getMin(x, y);
	printf("%d", res);

	return 0;
}