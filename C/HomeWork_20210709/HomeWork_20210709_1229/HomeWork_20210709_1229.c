#include <stdio.h>

int main() {
	double h, w,stdw,bmi;
	printf("Ű�� �����Ը� �Է��ϼ��� : ");
	scanf_s("%lf %lf", &h, &w);
	if (h < 150) {
		stdw = h - 100;
	}

	// h >= 150
	else if (h < 160) {
		stdw = ((h - 150) / 2) + 50;
	}
	// h >= 160
	else {
		stdw = (h - 100) * 0.9;
	}
	bmi = ((w - stdw) * 100) / stdw;
	
	if (bmi <= 10) {
		printf("����");
	}
	else if (bmi <= 20) {
		printf("��ü��");
	}
	// bim > 20
	else {
		printf("��");
	}
	return 0;
}
