#include <stdio.h>

/*
����
- ����: �������� (0���� �ʱ�ȭ), �������� (�����Ⱚ �ʱ�ȭ) (���� �ð�)
- Ÿ��: ������ Ÿ�� (���� ������ ����)
*/

// 
//int res; // �������� // 0���� �ʱ�ȭ


int getMax(int x, int y) {

	//int res; // �������� // �����Ⱚ�� �� ���� (����!)

	//if (x > y) { // 1
	//	res = x;
	//}
	//else if (y > x) { // 2
	//	res = y;
	//}
	//else { // 3
	//	res = -1; // error
	//	   
	//	   //printf("error");
	//}

	int res = (x > y) ? x : y;
	return res;
}

int main() {
	int x, y;
	int res; // 2

	printf("�� ���� �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);
	res = getMax(x, y);
	if (res == 1) {
		printf("error");
	}
	else{
		printf("%d", res);
	}
	
	
	return 0;
}