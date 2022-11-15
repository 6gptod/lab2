/*
변수란?
	메모리 공간에 붙여진 이름.
	c 프로그램에서 사용되는 모든 값은 메모리 공간에 저장.
	메모리 공간에 이름을 붙여 접근 가능.

변수 선언 및 초기화
	자료형 변수명 = 값

변수명 규칙
	알파벳, 숫자, 언더바 로만 구성.
	숫자로 시작 (x)
	공백포함 (x)
	키워드 변수명 (x)
	<주의> c언어는 알파벳 대/소문자 구분을 한다!!
	
*/

#include <stdio.h>
int main() {
	int number1, number2; 
	number1 = 1;
	number2 = 2;

	int number3 = 3, number4 = 4;

	number1 = 5;

	printf("%d\n", number1);
	printf("%d\n", number2);
	printf("%d\n", number3);
	printf("%d\n", number4);

	/* 사용 가능한 변수명들 */
	int num = 3;
	int number5 = 5;
	int num_ber = 10;
	int Number = 15;

}