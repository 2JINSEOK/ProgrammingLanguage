#include <stdio.h>

int main() {
	int tmp,x, y,x2,y2;
	printf("�� ���� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	// x2, y2 --> tmp;
	printf("swap �� : x = %d, y = %d\n", x, y);
	tmp = y; y = x;
	x = tmp;
	printf("swap �� : x = %d, y = %d", x2, y2);
	return 0;
}