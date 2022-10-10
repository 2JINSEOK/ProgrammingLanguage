#include <stdio.h>
// 입력받는 문자의 개수를 모르는데 scanf_s에서 글자 개수를 어떻게 받아야 하는지
int main() {
	char c1, c2, c3, c4, c, alc;
	int numc, realc ;
	printf("16진수를 입력하세요 : ");
	//scanf_s("%c%c%c", &c1, &c2, &c3);
	while (1) {
		scanf_s("%c", &c);
		if (c == '\n') break;

		realc = c - '0';

		// 숫자가 아닐 경우
		// 'A' - '0' = 17 => 10
		if (realc >= 10) realc -= 7;

		// '7' - '0'
		// 7
		// 숫자일 경우
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
		int res = 0; // 비트 저장 변수
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

		// 비트연산자 (>> n): * 2^-n
		//           (<< n): * 2^n


		// 7 -> 2진수
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
	//// 알파벳일 경우
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