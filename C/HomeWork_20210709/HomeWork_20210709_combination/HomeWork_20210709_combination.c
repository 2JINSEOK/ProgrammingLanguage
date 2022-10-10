#include <stdio.h>

/*
함수 작성법
1) main() 위
2) main() 아래
*/

// n을 입력받아서 n!
// 반환형 함수이름 (매개변수) // 매개해주는 변수
int factorial(int n); // 이미 구현이 잘되어있는 함수 가정 (독립적인 기능)
int combination(int n, int r);
//int n; // 전역변수

int main() {
	// 메인함수 안에서 생성되고 메인함수가 종료되면 소멸

	int n, r; // 지역변수
	int comb;
	/*int i, j, k, ans;
	int numerator = 1;
	int denominator1 = 1;
	int denominator2 = 1;*/

	printf("n을 입력하시오 : ");
	scanf_s("%d", &n); // 5
	printf("r을 입력하시오 : ");
	scanf_s("%d", &r); // 3

	// n => 사용자에게 입력받은 데이터 (5라고 가정)
	// 1. int factorial(int n1); 호출
	// 2. n1 (매개변수) = n (인자값);
	// 3. 메인 함수에 return 반환
	
	printf("%dC%d => %d", n, r, combination(n, r));
	// 함수를 사용하면 좋은 점
	// 1. 중복 제거
	// 2. 가독성이 좋음 (연산식을 그대로 노출하는 것보다)

	/*for (i = 1; i < n + 1; i++) {
		numerator = numerator * i;
	}
	for (j = 1; j < r + 1; j++) {
		denominator1 = denominator1 * j;
	}
	for (k = 1; k < (n - r + 1); k++) {
		denominator2 = denominator2 * k;
	}
	ans = numerator / (denominator1 * denominator2);
	printf("%dC%d => %d", n, r, ans);*/
	return 0;
}

int combination(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n - r));
}

int factorial(int n) { // 지역변수
	// n1 (매개변수)의 생성과 소멸
	// 함수 호출시에 생성되고 함수 호출 종료되면 소멸
	 
	int ans = 1;
	int i;
	for (i = 1; i < n + 1; i++) {
		ans = ans * i;
	}
	return ans;

}