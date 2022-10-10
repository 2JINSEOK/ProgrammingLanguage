# include <stdio.h>
// 결과 배열의 사이즈가 정해져 있지 않을 떄
// input 값에 한 번에 여러개의 문자를 입력했는데 과연 모든 문자가 입력되는 것인지
int main() {

	char result[100];
	int i;
	char input;
	int cnt = 0;
	printf("OX 문제 채점 : ");

	// "OOXXOXXOOO\n"
	for (i = 0; i < sizeof(result)/sizeof(result[0]); i++) {
		scanf_s("%c", &input, 1);
		if (input == '\n') {
			break;
		}
		
		result[i] = input;
		cnt++;
		
	}

	for (i = 0; i < cnt; i++) {
		//printf("%c", result[i]);
		if (result[i] == 'O') {

		}
		else {

		}
	}

	return 0;
}