#include <stdio.h>
#include <math.h>
/*
1. ������ �Է¹޴´�.
2. ������ �ڸ��� ���ڸ� ��� �и��ϰ� ǥ���� ���ΰ�
3. ���ο� ������ �ڸ��� ���� ��� ǥ���� ���ΰ�
4. ������ �ݺ��� ��� ǥ���� ���ΰ�
5. ��� ���ڿ� ���� ��� �Ϲ�ȭ�� �� ���ΰ�
6. ���� ����� ������ ���� ǥ��
7. ���� �и����� : n�� �Է¹ް� 10���� ������ �� �������� ���� �����ڸ� ���� �����ڸ�
8. ������ ��� �������ΰ�
9. for���� Ż���ϱ� ���� ���ǹ�
10. if���� ������ٸ� �ݵ�� else �� ���� �־���ϴ���
11. �׷��ٸ� else ������ �ٽ� ó������ ���ư����� ��� �ؾ��ϴ���

int main() {
	int n, x, y, old_num1, new_num,old_num2;
	int cnt = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &old_num1);
	old_num2 = old_num1;
	for (;;) {// for���� ��� �ݺ�, break ���� ������ Ż��
		
		x = old_num2 / 10;// ���� �����ڸ�
		y = old_num2 % 10;// ���� �����ڸ�
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
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &old_num);
	new_num = old_num;
	for (;;) {// for���� ��� �ݺ�, break ���� ������ Ż��

		x = new_num / 10;// ���� �����ڸ�
		y = new_num % 10;// ���� �����ڸ�
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