# include <stdio.h>
// 산술 기호를 어떠한 데이터 타입으로 받아야 하는지
// 왜 switch문으로는 할 수 없는지
// 0으로 나눴을 경우 왜 에러 메시지가 안 나오는지
int main() {
	char ope;
	int num1, num2, ans;

	printf("수식을 입력하시오 : ");
	scanf_s("%d%c%d", &num1, &ope, 1, &num2);

	/*switch (ope) {
	case '+' :
		ans = num1 + num2;
		printf("%d %c %d = %d", num1, ope,num2, ans);
		break;
	}*/
	if (ope == '+') {
		ans = num1 + num2;
		printf("%d %c %d = %d", num1, ope, num2, ans);
	}
	else if (ope == '-') {
		ans = num1 - num2;
		printf("%d %c %d = %d", num1, ope, num2, ans);
	}
	else if (ope == '*') {
		ans = num1 * num2;
		printf("%d %c %d = %d", num1, ope, num2, ans);
	}
	else if (ope == '/') {
		 // 5 / 0 ->
		if (num2 == 0) {
			printf("잘못된 연산입니다 !");
		}
		else {
			ans = num1 / num2;
			printf("%d %c %d = %d", num1, ope, num2, ans);
		}
		
	}
	else if (ope == '%') {
		ans = num1 % num2;
		printf("%d %c %d = %d", num1, ope, num2, ans);
	}
	else { // 연산자가 없는 경우 (경고 메시지 출력)
		printf("잘못된 연산입니다 !");
	}

	return 0;
}