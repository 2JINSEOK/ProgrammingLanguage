# include <stdio.h>
// ��� �迭�� ����� ������ ���� ���� ��
// input ���� �� ���� �������� ���ڸ� �Է��ߴµ� ���� ��� ���ڰ� �ԷµǴ� ������
int main() {

	char result[100];
	int i;
	char input;
	int cnt = 0;
	printf("OX ���� ä�� : ");

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