#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
// �ýô� �ᱹ ������ ����
int main() {
	int R=0;
	double Euclid,TAXI;
	
	printf("�������� �Է��ϼ��� : ", R);
	scanf_s("%d", &R);
	Euclid = R * R * M_PI; // L2 distance(**)
	TAXI = (R * 2) * (R * 2) * 0.5; // L1 distance(**)
	// ���⼭ *(double)(1/2.0)�� �ϰԵǸ� ��� 0�� ������ ����
	/*
	���� / ���� = ����
	���� / �Ǽ� = �Ǽ�
	�Ǽ� / ���� = �Ǽ�
	�Ǽ� / �Ǽ� = �Ǽ�

	(double)(1/2)
	1. (1/2) => 0
	2. (double)0 => 0.0

	(1/2.0) => 0.5
	*/
	
	printf("%lf\n", Euclid);
	printf("%lf\n", TAXI);

	return 0;
}