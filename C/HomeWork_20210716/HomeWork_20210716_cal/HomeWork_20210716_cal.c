# include <stdio.h>
// ��� ��ȣ�� ��� ������ Ÿ������ �޾ƾ� �ϴ���
// �� switch�����δ� �� �� ������
// 0���� ������ ��� �� ���� �޽����� �� ��������
int main() {
	char ope;
	int num1, num2, ans;

	printf("������ �Է��Ͻÿ� : ");
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
			printf("�߸��� �����Դϴ� !");
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
	else { // �����ڰ� ���� ��� (��� �޽��� ���)
		printf("�߸��� �����Դϴ� !");
	}

	return 0;
}