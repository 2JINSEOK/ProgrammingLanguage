#include <stdio.h>

int main() {
	int score;
	
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("�հ� : ���� A");
	}
	// score < 90
	else if (score >= 80) {
		printf("�հ� : ���� B");
	}
	// score < 80
	else if (score >= 70) {
		printf("�հ� : ���� C");
	}
	// score < 70
	else if (score >= 60) {
		printf("�հ� : ���� D");
	}
	// score < 60
	else {
		printf("���հ� : ���� F");
	}
	return 0;
}