#include <stdio.h>
// 1. 테스트 케이스 개수 입력
// 2. 길이가 0보다 크고 80보다 작다는 것이 왜 주어졌는지
int main() {
	int n,i;
	int m;
	char res;
	char tmp;
	
	printf("케이스의 개수를 입력하세요 : ");
	scanf_s("(%d, %d)", &n, &m);
	printf("%d %d", n, m);
	//for (i = 1; i <= n; i++) {
		//printf("결과를 입력하세요 : ");// 문자열을 입력받아야 하는 건지
		//scanf_s("%c %c", &tmp, &res);
		
		/*
		%d (decimal): 정수값을 10진수 입력/출력
		%s (string): 문자열 하나 입력/출력
		%c (char) : 문자 하나 입력/출력
		%x (hex): 정수값을 16진수 입력/출력 
		%o (oct): 정수값을 8진수 입력/출력

		
		
		*/


	//}
	
	//scanf_s("%c %s", &res,1,s,10);//C6064 오류 해결방법
	//scanf_s("%c %c", &tmp,&res);//왜 문자를 입력할 수 없는 것인지
	//printf("%c", res);

	return 0;
}