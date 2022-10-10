#include <stdio.h>
// for 문 안에 i += i; 라고 하면 왜 안되는지
// for 문에 반복변수 (i)
// i = i + i;
// for i : 1 ~ n

// 
int main() {
	int n, i;
	int ans = 0;
	printf("수를 입력하시오 : ");
	scanf_s(" %d", &n);

	for (i = 1; i < n + 1; i++) {
		ans += i;
	}
	/*
	i = 1
	i = 2
	i = 3

	i = 3
	i = 6
	i = 7
	
	*/


	printf("sigma 1 ~ %d는 %d입니다.", n, ans);
	return 0;
}
