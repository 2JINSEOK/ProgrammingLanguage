# include<stdio.h>
# define SIZE 5
/*
배열 (array)
: 같은 종류의 데이터 타입의 변수를 여러개 저장할 수 있는 공간
: 하나의 배열 이름으로 공유

인덱스 (index)
: 각 원소의 순서 (0부터 시작!)

*/
int main() {
	// 1. 배열 생성만하고 데이터 초기화 X
	// 5명 사용자의 점수를 저장하는 배열
	int grade[SIZE]; // 배열 생성 ([5] 배열의 크기 (정적 할당))
	int i=0;
	//printf("i: %d\n", grade[0]);

	//for (i = 0; i < SIZE; i++) { // ++i, i++ 
	//   scanf_s("%d", &grade[0]);
	//}
	// i ++, ++i => i = i + 1
	/*
	* i = 1
	nextif = i ++; -- 1
	1) nextif = i;
	2) i = i + 1;
	nextif = 1
	i = 2

	nextip = ++ i; -- 2
	1) i = i + 1;
	2) nextip = i;
	nextip = 2
	i = 2

	*/


	/*grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;*/
	//grade[5] = 60; // 인덱스가 범위를 벗어났다는 오류 발생

	printf("%d", grade[0]);

	// 2. 배열 생성하자마자 데이터 초기화
	int score1[] = { 10, 20, 30, 40, 50 }; // 사이즈가 생략 가능
	printf("%d", sizeof(score1)); // 20 
	printf("%d", sizeof(score1[0])); // 4
	printf("%d\n", sizeof(score1) / sizeof(score1[0])); // 20 / 4 ==> 5

	printf("score1: %p\n", score1); // 20 / 4 ==> 5
	printf("&score1[0]: %p\n", &score1[0]);

	int score2[] = { 10, 20, 30, 40, 50 };
	printf("score2: %p\n", score2);
	printf("&score2[0]: %p\n", &score2[0]);
	
	//score1[];
	//score1[2] == score2[2];
	for(i=0;i<SIZE;i++){
		if (score1[i] != score2[i]){
			printf("다릅니다");
			break;
			
			}
	}
	if(i==SIZE)printf("같습니다.");
	/*
	1) 두 배열이 원소값 동일한지 ?
	score1 == score2 (??)
	&score1[0] = &score2[0] (주소값이 동일한지 확인)



	*/



}