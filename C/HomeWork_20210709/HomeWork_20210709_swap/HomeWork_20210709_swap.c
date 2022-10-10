#include <stdio.h>

int main() {
	int tmp,x, y,x2,y2;
	printf("두 수를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);

	// x2, y2 --> tmp;
	printf("swap 전 : x = %d, y = %d\n", x, y);
	tmp = y; y = x;
	x = tmp;
	printf("swap 후 : x = %d, y = %d", x2, y2);
	return 0;
}