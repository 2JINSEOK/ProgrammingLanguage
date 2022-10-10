#include <stdio.h>

int main() {
	int n, i;
	int ans = 1;
	printf("수를 입력하시오 : ");
	scanf_s(" %d", &n);

	for (i = 1; i < n + 1; i++) {
		ans = ans * i;
	}
	printf("%d!은 %d입니다.", n, ans);
	return 0;
}