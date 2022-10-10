#include <stdio.h>
#include<math.h>
// 1. 두 범위 사이의 소수를 어떻게 받을 것인가
// 2. 소수 조건에서 2,3,5는 포함시키는 방법
int main() {
	int m, n;//m,n이 (1 ≤ M ≤ N ≤ 1,000,000)이라는 조건을 넣어야 하는지
	int i, j;
	int cnt;

	//printf("정수 M, N을 입력하세요 : "); // 범위 지정
	scanf_s("%d %d", &m, &n);
	//printf("%d %d\n", m, n);
	/*
	7 (소수)
	 2 3 4 5 6 

	8 (소수 x)
	 2 3 // 4  5 6 7


	24 (소수 X)
	2 3 4 // 6 8 12


	25 (소수 X)
	5 //
	
	*/


	for (i = m; i <= n; i++) { // 7
		cnt = 0; // cnt = 0 초기화 
		for (j = 2; j <= (int)sqrt(i); j++) { // 1 2 3 4 5 6 7 
			if (i % j == 0) {
				break;
			}
		}
		if (j== (int)sqrt(i)+1) {
			printf("%d\n", i);
		}

		/*if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
			printf("%d\n", i);
		}*/

	}
	
	return 0;
}