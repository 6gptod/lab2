/*
 함수란?
	프로그래밍에서 함수(function)란 하나의 특별한 목적의 작업을 수행하기 위해
	독립적으로 설계된 프로그램 코드의 집합.

	리턴 타입 함수명(매개변수타입 매개변수명){
		
		실행할 코드 집합

		return 리턴값;

	}
*/

#include <stdio.h>

//사용자 정의 함수의 선언

int add(int a, int b) {
	return a + b;
}

int main(void) {
	int result;
	result = add(3, 5);

	printf("하수가 반환한 값 : %d\n", result);
	return 0;
}