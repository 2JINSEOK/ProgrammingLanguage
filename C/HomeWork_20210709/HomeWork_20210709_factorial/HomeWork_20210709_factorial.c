#include <stdio.h>

int main() {
	int n, i;
	int ans = 1;
	printf("���� �Է��Ͻÿ� : ");
	scanf_s(" %d", &n);

	for (i = 1; i < n + 1; i++) {
		ans = ans * i;
	}
	printf("%d!�� %d�Դϴ�.", n, ans);
	return 0;
}