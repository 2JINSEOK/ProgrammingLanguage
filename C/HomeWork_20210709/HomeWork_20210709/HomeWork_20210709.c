#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
	double root,root_;

	printf("����� �Է��ϼ��� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == 0) {
		root = -(c / b);
	}
	else if ((b * b - 4 * a * c) < 0) {
		printf("�Ǳ��� �������� �ʽ��ϴ�");
	}
	else {
		root = ((-b + sqrt(b * b - 4 * a * c)) / (2 * a));
		root_ = ((-b - sqrt(b * b - 4 * a * c)) / (2 * a));
		printf("���� %lf %lf �Դϴ�.", root, root_);
	}
	return 0;
}