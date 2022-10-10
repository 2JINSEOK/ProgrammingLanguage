#include<stdio.h>
#include<math.h>
//초기 int n의 값을 설정해주지 않으면 오류가 뜨는 이유
// 값이 제대로 안나왔던 이유
int main() {
	int n;
	double pi = 0;
	int i;

	printf("반복횟수를 입력하세요. : ");
	scanf_s("%d", &n);
	for (i = 1; i < n + 1; i++) {
		double j = pow(-1, i - 1);
		pi += (((double)4 / ((2 * i) - 1)) * j);
	}
	printf("%f", pi);
	return 0;
}