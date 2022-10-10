#include <stdio.h>

int main() {
	int a, b, i, j;
	i = 1;
	int res;
	printf("정수를 입력하세요. : ");
	scanf_s("%d %d", &a, &b);
	for (j = 1; j < b + 1; j++) {
		i << 1;
	}
	// 이진법으로 표현된 01에서부터 하나씩 옆으로 shift
	res = a * i;
	printf("%d", res);
	return 0;
}