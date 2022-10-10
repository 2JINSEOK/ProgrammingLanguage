#include <stdio.h>

int main() {
	int n, i, ans = 0;
	printf("수를 입력하시오 : ");
	scanf_s("%d", &n);

	for (i = 1; i < n + 1; i++) {
		if (i % 2 == 0) {
			ans += i;
		}
	}
	printf("1 ~ %d 중 2의 배수의 합은 %d 입니다.", n, ans);
	return 0;
}