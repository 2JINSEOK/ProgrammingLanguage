#include<stdio.h>
// int ���� �ʱ�ȭ ��Ű�� ���� �� ���� ������ �ߴ�����
// ���� ����ϴ� ���
int main() {
	char seat[10] = {'O','O','O','O','O','O','O','O','O','O'};
	int choice;
	int i;
	int j;

	while (1) {

		printf("====== SEATS =======\n");
		printf("1 2 3 4 5 6 7 8 9 10\n");
		printf("====================\n");

		for (i = 0; i < 10; i++) {
			printf("%c ", seat[i]);
		}
		printf("\n");
		
		// ��� �¼��� �� á���� Ȯ��
		// seat �迭�� ��� 'X'���� Ȯ��
		// �ϳ��� 'O' �����ϸ� �ȵ�
		for (i = 0; i < 10; i++) {
			if (seat[i] == 'O') break; // �� �¼��� ����	
		}
		if (i == 10) {
			printf("��� �¼��� �� á���ϴ� ... !"); //
			printf("���α׷��� ����˴ϴ� ..\n");
			break; // while(1) ����
		}

		/*
		i = 0
		seat[9] = 'X'
		break;


		
		*/

		printf("�����ϰ��� �ϸ� -1�� �Է��Ͻÿ� ..\n");
	
		printf("�¼��� �����Ͻÿ� : ");
		scanf_s("%d", &choice);
		

		if (choice == -1) { // ���� ����
			printf("���α׷��� ����˴ϴ� ..");
			break;
		}
		if (choice > 10 || choice < 1) {
			printf("��ȿ�� �¼� ��ȣ�� �ƴմϴ� !\n");
			printf("1 ~ 10�� �¼��� �Է����ּ���!\n");
			continue; // �ݺ��� �����!
		}

		// ���� �¼� - 'X' -- 1
		// ���� �¼� - 'O'
		if (seat[choice - 1] == 'X') {
			printf("%d�� �ڸ��� ������ �� �����ϴ� !\n", choice);
		}

		// �Ϲ� �򼭹�
		else if (seat[choice - 1] == 'O') {
			seat[choice - 1] = 'X';
			printf("����Ǿ����ϴ� !\n"); // ������ ���
		}
		
	}
	//
	

	return 0;
}