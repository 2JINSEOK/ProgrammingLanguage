#include <stdio.h>

int main() {
	int score;
	
	printf("성적을 입력하세요 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("합격 : 학점 A");
	}
	// score < 90
	else if (score >= 80) {
		printf("합격 : 학점 B");
	}
	// score < 80
	else if (score >= 70) {
		printf("합격 : 학점 C");
	}
	// score < 70
	else if (score >= 60) {
		printf("합격 : 학점 D");
	}
	// score < 60
	else {
		printf("불합격 : 학점 F");
	}
	return 0;
}