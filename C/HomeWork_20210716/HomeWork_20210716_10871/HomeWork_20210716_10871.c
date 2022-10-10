#include<stdio.h>
// 한 번 입력한 숫자를 계속 가지고 있는 방법
// 1. N, X 값을 입력받는다
// 2. 수열을 이루는 정수를 입력받고 저장한다.
// 3. 배열을 사용하지 못하므로 for문을 통해 입력받는 숫자를 그때마다 판단하여 출력한다.
// 4. 앞에 입력했던 것까지 누적해서 나타내는 법
int main() {
	int N, X, i, j;
	int num = 0;
	int res;

	printf("1 <= N, X <= 10,000\n");
	printf("정수 N, X 값을 입력하세요. : ");
	scanf_s("%d %d", &N, &X);

	for (i = 1; i < N + 1; i++) {
		scanf_s("%d ", &num);
		if (num < X) {
			printf("%d %d번째 ", num,i);
		}
	}

	return 0;
}