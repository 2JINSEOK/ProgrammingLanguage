#include <stdio.h>
// 1. �ݾ��� ���� ���� ����
// 2. �޴��� ���� ���� �Է�
// 3. ó�� ���� 0���� �Է��� �� ����
// 4. ���� ���� 300���� ������ �ִٰ� ����, �޴� �� ���� 500��
//    ���α׷� ���� (�� �����ϴٰ� ���)
void printMenu() {
	printf("\n\n=========================\n \
���Ǳ� �޴� \n \
1. �ݶ� (800��)\n\
2. ���� (500��)\n\
3. ��Ÿ�ο��� (1500��)\n\
4. ����\n \
======================== \n");
}


int main() {
	int cost;
	int rest;
	int menu,mp;
	int thou, five, hun;

	while (1) {
		printf("�ݾ��� �Է��ϼ��� : ");
		scanf_s("%d", &cost);

		if (cost <= 0) {
			printf("�ٽ� �Է��ϼ���.");
		}
		else if (cost < 500) {
			printf("�ݾ��� �����մϴ�.");
		}
		else {
			break;
		}
		//printf("sadasdasda");
	}

	// true: 0 �̿� ��� �� (��ǥ��: 1)
	// false: 0

	// a, a()
	while (1) {		
		printMenu(); // �Լ� ȣ��

		printf("�޴��� ������:");
		scanf_s("%d", &menu);
		if (menu == 1) mp = 800;		
		else if (menu == 2) mp = 500;
		else if (menu == 3) mp = 1500;
		
		else if (menu == 4) {
			printf("���α׷� ���� ..\n");
			break; // �ϳ��� �ݺ��� ����
		}
		else {
			printf("�ٽ� �Է��ϼ��� ...\n");
			continue; // �ݺ��� �����
		}
		
		if (cost < mp) {
			printf("������ �� �����ϴ�");
		}
		else { // cost >= mp
			cost = cost - mp;
			//printf("%d", cost);
		}

		printf("�ܵ� : %d", cost);
		
		if (cost == 0) {
			break;
		}
		
		thou = cost / 1000;
		five = (cost - (1000 * thou)) / 500;
		hun = (cost - (1000 * thou) - (500 * five)) / 100;
		printf("õ�� : %d, ����� : %d, ��� : %d", thou, five, hun);
	}

	//
	return 0;
}


