#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
	double root,root_;

	printf("계수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a == 0) {
		root = -(c / b);
	}
	else if ((b * b - 4 * a * c) < 0) {
		printf("실근이 존재하지 않습니다");
	}
	else {
		root = ((-b + sqrt(b * b - 4 * a * c)) / (2 * a));
		root_ = ((-b - sqrt(b * b - 4 * a * c)) / (2 * a));
		printf("근은 %lf %lf 입니다.", root, root_);
	}
	return 0;
}