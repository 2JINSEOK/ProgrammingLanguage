#include <stdio.h>
// ����ȯ
// �ٸ� ����� �ִ���
int main() {
	char letter;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &letter, 1);


	// letter : char�� ����
	// 'letter'
	// 'l', 'e'
	// "letter": ���ڿ�
	// 
	// 'A' <= 'C' <= 'Z'
	if ('A' <= letter && letter <= 'Z') {
		printf("%c�� �빮�� �Դϴ�.", letter);
	}
	else if ('a' <= letter && letter <= 'z') {
		printf("%c�� �ҹ��� �Դϴ�.", letter);
	}
	else if ('0' <= letter && letter <= 57) {
		printf("%c�� ���� �Դϴ�.", letter);
	}
	else {
		printf("��Ÿ���� �Դϴ�.");
	}
	return 0;
}