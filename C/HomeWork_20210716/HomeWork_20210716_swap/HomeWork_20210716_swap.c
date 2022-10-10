#include <stdio.h>
// 두 가지 결과값을 반환받는 방법
// swap 함수에서 리턴 값을 어떻게 받아야 하는지

void swap(int x, int y) {
	int res1,res2, tmp;
	
	printf("swap 전 : x = %d, y = %d\n", x, y);
	tmp = x;
	x = y;
	y = tmp;
	//res1 = x;
	//res2 = y;
	printf("swap 후 : x = %d, y = %d\n", x, y);
	// 1. 배열 (int a[] = {x, y})
	// 2. 포인터

	//return 0; // (res1, res2)
}
int sum(int x, int y) {
	printf("sum 시작!");
	return x + y;
}

void main() {
	int x, y;
	
	printf("두 수를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);
	swap(x, y); // 3, 5
	//printf("%d", re);
						 
						 
	// 1. swap(3, 5);
	// 2. int swap(int x, int y)
	// int x = 3, int y = 5
	// 3. 함수 실행~~
	// 4. return



	//return 0; // 정상적 종료
}