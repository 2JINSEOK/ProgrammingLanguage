#include<stdio.h>

int main() {
	int a, b, c, min;

	printf("������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	/*min = (a < b) ? (a) : (b);
	min = (min < c) ? (min) : (c);*/

	min = (a < b) ? ((a<c)? (a) : (c)) : (b);

	printf("%d", min);

	return 0;
}