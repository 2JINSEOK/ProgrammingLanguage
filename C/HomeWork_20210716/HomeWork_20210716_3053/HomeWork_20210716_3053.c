#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
// 택시는 결국 마름모 넓이
int main() {
	int R=0;
	double Euclid,TAXI;
	
	printf("반지름을 입력하세요 : ", R);
	scanf_s("%d", &R);
	Euclid = R * R * M_PI; // L2 distance(**)
	TAXI = (R * 2) * (R * 2) * 0.5; // L1 distance(**)
	// 여기서 *(double)(1/2.0)를 하게되면 계속 0이 나오는 이유
	/*
	정수 / 정수 = 정수
	정수 / 실수 = 실수
	실수 / 정수 = 실수
	실수 / 실수 = 실수

	(double)(1/2)
	1. (1/2) => 0
	2. (double)0 => 0.0

	(1/2.0) => 0.5
	*/
	
	printf("%lf\n", Euclid);
	printf("%lf\n", TAXI);

	return 0;
}