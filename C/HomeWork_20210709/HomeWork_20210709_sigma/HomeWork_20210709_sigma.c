#include <stdio.h>
// for �� �ȿ� i += i; ��� �ϸ� �� �ȵǴ���
// for ���� �ݺ����� (i)
// i = i + i;
// for i : 1 ~ n

// 
int main() {
	int n, i;
	int ans = 0;
	printf("���� �Է��Ͻÿ� : ");
	scanf_s(" %d", &n);

	for (i = 1; i < n + 1; i++) {
		ans += i;
	}
	/*
	i = 1
	i = 2
	i = 3

	i = 3
	i = 6
	i = 7
	
	*/


	printf("sigma 1 ~ %d�� %d�Դϴ�.", n, ans);
	return 0;
}
