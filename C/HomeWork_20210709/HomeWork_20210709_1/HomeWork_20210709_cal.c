# include <stdio.h>
// ��� ��ȣ�� ��� ������ Ÿ������ �޾ƾ� �ϴ���
// �� switch�����δ� �� �� ������
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
	else if () {}
	else if () {}
	else if () {}
	else { // �����ڰ� ���� ��� (��� �޽��� ���)

	}

	return 0;
}