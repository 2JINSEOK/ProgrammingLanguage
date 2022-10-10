#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	int cnt = 0;

	for (c = 1; c <= 100; c++) {
		for (a = 1; a <= 100; a++) {
			for (b = 1; b <= 100; b++) {
				// c==sqrt(a^2+b^2)는 안되는지
				//조건문 안의 조건문
				if (c * c == a * a + b * b && a < b) {
					cnt++;
					printf("c=%d b=%d a=%d %d\n", c, b, a, cnt);
				}
			}
		}

	}

	return 0;
}