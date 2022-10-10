#include <stdio.h>
// 문자를 입력하시오 : 문자를 입력하시오 : 왜 이 문장이 두 번씩 나타나는지
// scanf 엔터 받는법
// q입력 시 프로그램 종료하는 방법

int main() {
	int i;
	char a,b,tmp;

	for (;;) {
		printf("문자를 입력하시오 : ");
		scanf_s(" %c", &a);
		if (a == 'Q' || a == 'q') {
		break;
		}
		else if ('A' <= a && a <= 'Z') {
			b = a + ('a' - 'A');
			printf("변환된 문자 : %c\n", b);
		}
		else if (a >= 'a' && a <= 'z') {
			b = a - ('a' - 'A');
			printf("변환된 문자 : %c\n", b);
		}
	}
	return 0;
}