#include <stdio.h>
// �н����尡 20�� �̳���� �Ͽ��µ� scanf_s���� ���� ���� ��� ����� �ϴ���
// ���� ���� ���� �Է� ���ð� 4���� �̱� ������ 4���ڷ� ���缭 �ۼ���.
int main() {
	char c1, c2, c3, c4,c,c_,cp;
	char c12, c22, c32, c42;
	char c13, c23, c33, c43;
	int i;
	
	printf("�н����带 �Է��ϼ��� : ");
	//scanf_s("%c%c%c%c", &c1, 1, &c2, 1, &c3, 1, &c4, 1);
	/*
	c12 = (int)c1 + 2;
	c22 = (int)c2 + 2;
	c32 = (int)c3 + 2;
	c42 = (int)c4 + 2;
	c13 = ((int)c1 * 7) % 80 + 48;
	c23 = ((int)c2 * 7) % 80 + 48;
	c33 = ((int)c3 * 7) % 80 + 48;
	c43 = ((int)c4 * 7) % 80 + 48;
	
	printf("%c%c%c%c\n", c12, c22, c32, c42);
	printf("%c%c%c%c\n", c13, c23, c33, c43);
	*/
	i = 0;
	while (i < 20) {
		scanf_s("%c", &c); // 'T' 'E' 'S' 'T' '\n'
		if (c == '\n') break;

		cp = ((int)c * 7) % 80 + 48;
		c_ = (int)c + 2;
		printf("%c\n", cp);
		printf("%c", c_);
		i++;
	}

	//while (i < 20) {
	//	scanf_s("%c", &c); // 'T' 'E' 'S' 'T' '\n'
	//	if (c == '\n') break;

	//	cp = ((int)c * 7) % 80 + 48;
	//	c_ = (int)c + 2;
	//	printf("%c\n", cp);
	//	printf("%c\n", c_);
	//	i++;
	//}
	return 0;
}