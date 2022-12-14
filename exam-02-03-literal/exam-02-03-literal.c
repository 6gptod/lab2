/*
리터럴(Literal
	값이 그 자체로 고정된 상수를 의미

	예)
	정수형 상수 : 10, -10
	실수형 상수 : 2.2, 3.14, -5.1
	문자형 상수 : 'A', 'B', 'C'

매크로 상수
	심볼릭 상수 일종
	컴파일시 가장 먼저 매크로 상수 처리

심볼릭 상수
	상수에 이름을 붙여준 것
	초기값 저장하면 변경 불가
	프로그램 흐름을 따라 컴파일 됨.
*/

#include <stdio.h>
#define LENGTH 10
int main() {
	int number = -3;			//변수
	const int NUMBER = 5;		//상수

	printf("%d\n", number);
	printf("%d\n", LENGTH);
}