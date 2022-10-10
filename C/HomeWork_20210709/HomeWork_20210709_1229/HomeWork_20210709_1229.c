#include <stdio.h>

int main() {
	double h, w,stdw,bmi;
	printf("키와 몸무게를 입력하세요 : ");
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
		printf("정상");
	}
	else if (bmi <= 20) {
		printf("과체중");
	}
	// bim > 20
	else {
		printf("비만");
	}
	return 0;
}
