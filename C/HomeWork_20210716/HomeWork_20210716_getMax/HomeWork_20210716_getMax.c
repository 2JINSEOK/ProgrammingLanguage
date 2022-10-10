#include <stdio.h>

/*
변수
- 종류: 전역변수 (0으로 초기화), 지역변수 (쓰레기값 초기화) (생존 시간)
- 타입: 데이터 타입 (공간 사이즈 결정)
*/

// 
//int res; // 전역변수 // 0으로 초기화


int getMax(int x, int y) {

	//int res; // 지역변수 // 쓰레기값이 들어가 있음 (오류!)

	//if (x > y) { // 1
	//	res = x;
	//}
	//else if (y > x) { // 2
	//	res = y;
	//}
	//else { // 3
	//	res = -1; // error
	//	   
	//	   //printf("error");
	//}

	int res = (x > y) ? x : y;
	return res;
}

int main() {
	int x, y;
	int res; // 2

	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &x, &y);
	res = getMax(x, y);
	if (res == 1) {
		printf("error");
	}
	else{
		printf("%d", res);
	}
	
	
	return 0;
}