#include<stdio.h>
//1. 한 자리 숫자가 나오면 무조건 0을 더한다.
/*int main() {
	char c1, c2, c3, c4, c5, c6,c7,c8;//공백을 받기 위해 char
	char c12=0,c22=0, c32=0, c42=0, c52=0, c62=0;
	printf("학번을 입력하세요 : ");
	scanf_s("%c%c%c%c%c%c%c%c", &c1,1,&c2,1, &c3,1, &c4,1, &c5,1, &c6,1,&c7,1,&c8,1);
	//공백까지 포함하여 총 최대 8글자
	if ((int)c3 >= 49 && (int)c3 <=57) {
		c12 = c1;
		c22 = '0';//공백 문자를 0으로 대체
		c32 = c3;
		c42 = c5;
		c52 = c6;
		c62 = c7;
	}
	printf("%c%c%c%c%c%c", c12, c22, c32, c42, c52, c62);
	return 0;
}*/
int main() {
	int year, klasse, num;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;
	int nyear, nklasse, nnum;
	printf("학년 반 번호를 입력하세요 : ");
	scanf_s("%d %d %d", &year, &klasse, &num);
	//if (klasse < 10) {
	//	replace
	//}
	
	printf("%d%02d%03d", year,klasse,num);
	return 0;
}