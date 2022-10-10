#include <stdio.h>
#include <math.h>
/*
1. 정수를 입력받는다.
2. 각각의 자리의 숫자를 어떻게 분리하고 표현할 것인가
3. 새로운 숫자의 자리를 각각 어떻게 표현할 것인가
4. 각각의 반복을 어떻게 표현할 것인가
5. 모든 숫자에 대해 어떻게 일반화를 할 것인가
6. 가장 가까운 정수를 빼는 표현
7. 숫자 분리과정 : n을 입력받고 10으로 나누면 그 나머지의 값이 일의자리 몫이 십의자리
8. 루프를 어떻게 돌릴것인가
9. for문을 탈출하기 위한 조건문
10. if문을 만들었다면 반드시 else 문 또한 있어야하는지
11. 그렇다면 else 문에서 다시 처음으로 돌아가려면 어떻게 해야하는지

int main() {
	int n, x, y, old_num1, new_num,old_num2;
	int cnt = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &old_num1);
	old_num2 = old_num1;
	for (;;) {// for문을 계속 반복, break 조건 만족시 탈출
		
		x = old_num2 / 10;// 정수 십의자리
		y = old_num2 % 10;// 정수 일의자리
		new_num = (y * 10) + ((x + y) % 10);
		printf("new_num : %d\n", new_num);
		cnt++;
		if (new_num == old_num1) {
			break;
		}
		
	}
	printf("%d\n", cnt);
	return 0;
}*/
int main() {
	int n, x, y, new_num, old_num;
	int cnt = 0;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &old_num);
	new_num = old_num;
	for (;;) {// for문을 계속 반복, break 조건 만족시 탈출

		x = new_num / 10;// 정수 십의자리
		y = new_num % 10;// 정수 일의자리
		new_num = (y * 10) + ((x + y) % 10);
		//printf("new_num : %d\n", new_num);
		cnt++;
		if (new_num == old_num) {
			break;
		}

	}
	printf("%d\n", cnt);
	return 0;
}