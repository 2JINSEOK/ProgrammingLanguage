#include <stdio.h>
// ���ڸ� �Է��Ͻÿ� : ���ڸ� �Է��Ͻÿ� : �� �� ������ �� ���� ��Ÿ������
// scanf ���� �޴¹�
// q�Է� �� ���α׷� �����ϴ� ���

int main() {
	int i;
	char a,b,tmp;

	for (;;) {
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s(" %c", &a);
		if (a == 'Q' || a == 'q') {
		break;
		}
		else if ('A' <= a && a <= 'Z') {
			b = a + ('a' - 'A');
			printf("��ȯ�� ���� : %c\n", b);
		}
		else if (a >= 'a' && a <= 'z') {
			b = a - ('a' - 'A');
			printf("��ȯ�� ���� : %c\n", b);
		}
	}
	return 0;
}