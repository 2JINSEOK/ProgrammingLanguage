#include <stdio.h>
// �Է¹޴� ������ ������ �𸣴µ� scanf_s���� ���� ������ ��� �޾ƾ� �ϴ���
int main() {
	char c1, c2, c3, c4, c, alc;
	int numc, realc ;
	printf("16������ �Է��ϼ��� : ");
	//scanf_s("%c%c%c", &c1, &c2, &c3);
	while (1) {
		scanf_s("%c", &c);
		if (c == '\n') break;

		realc = c - '0';

		// ���ڰ� �ƴ� ���
		// 'A' - '0' = 17 => 10
		if (realc >= 10) realc -= 7;

		// '7' - '0'
		// 7
		// ������ ���
		 ///

		// 'A' => 65
		// 'A' => '10'

		//if (c >= '0' && c <= '9') {

		numc = realc;
		//for(i=0;i<=4;i++)

		//while (numc != 0) 
		// {
		
		// 7 -> 1
		// 3 -> 1
		// 1 -> 1
		
		// 7AF
		// 
		// 0111
		// 1234
		int res = 0; // ��Ʈ ���� ����
		for (int i = 3; i >= 0; i--) {
			res = numc >> i & 1;
			printf("%d", res);
		}
		printf("\n");
		
		//for (int i = 0; i < 4; i++){
		//	//if (numc % 2 != 0) {
		//	printf("%d", numc % 2); // 0
		//	numc = numc / 2; // 0
		//	
		//}

		
		
		// 0100 >> 1 (4)
		// 0010      (2)

		// ��Ʈ������ (>> n): * 2^-n
		//           (<< n): * 2^n


		// 7 -> 2����
		// 7 -> 0111
		// (0000) 0111 >> 3
		//   0000
		// & 0001
		// -------
		//  0000

		// 7
		// 0111 >> 2
		//   0001
		// & 0001
		// --------
		// 0001

		// 7
		// 0111 >> 1
		//   0011
		// & 0001
		// -----
		// 

		printf("\n");
		/*}
		else {
			printf("%d", numc % 2);
			break;
		}*/
	}

	//}
	//// ���ĺ��� ���
	//else if (c >= 'A' && c <= 'F') {
	//	alc = c;
	//}
	/*if ((int)c >= 49 && (int)c <= 57) {
		c % 2 = a;

	}*/
	/*A = 10;
	B = 11;
	C = 12;
	D = 13;
	E = 14;
	F = 15;
	else {
		while (1) {
			if (c % 2 != 0) {
				printf("%c", c);
			}
			else {
				printf("%c", c);
				break;
			}
		}
	}*/



return 0;
}