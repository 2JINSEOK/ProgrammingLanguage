#include <stdio.h>
// 형변환
// 다른 방법이 있는지
int main() {
	char letter;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &letter, 1);


	// letter : char형 변수
	// 'letter'
	// 'l', 'e'
	// "letter": 문자열
	// 
	// 'A' <= 'C' <= 'Z'
	if ('A' <= letter && letter <= 'Z') {
		printf("%c는 대문자 입니다.", letter);
	}
	else if ('a' <= letter && letter <= 'z') {
		printf("%c는 소문자 입니다.", letter);
	}
	else if ('0' <= letter && letter <= 57) {
		printf("%c는 숫자 입니다.", letter);
	}
	else {
		printf("기타문자 입니다.");
	}
	return 0;
}