#include<stdio.h>
#include<math.h>
//�ʱ� int n�� ���� ���������� ������ ������ �ߴ� ����
// ���� ����� �ȳ��Դ� ����
int main() {
	int n;
	double pi = 0;
	int i;

	printf("�ݺ�Ƚ���� �Է��ϼ���. : ");
	scanf_s("%d", &n);
	for (i = 1; i < n + 1; i++) {
		double j = pow(-1, i - 1);
		pi += (((double)4 / ((2 * i) - 1)) * j);
	}
	printf("%f", pi);
	return 0;
}