/*
 static 변수 (정적 변수)
	함수 내부(지역), 함수 외부(전역)에서도 사용가능
	프로그램이 시작될 때 할당되고 프로그램이 끝날 때 소멸된다.
*/

#include <stdio.h>

void increaseNumber() {
	static int number = 0;

	number++;
	printf("number: %d\n", number);
}

int main() {
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}