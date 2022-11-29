#pragma warning(disable:4996)
#include <stdio.h>

void guide(void) {

	printf("inputNumber 함수를 통해 정수를 입력할 수 있습니다.\n");
	printf("또한 printNumber 함수를 통해 입력한 정수를 출력할 수도 있습니다.\n");
}

void printNumber(int num) {
	printf("당신이 입력한 정수는 %d입니다. \n", num);
}

int inputNumber(void) {
	int num;
	printf("정수를 입력해 주세요: ");
	scanf("%d", &num);

	return num;
}

int main() {

	guide();
	int num = inputNumber(); // 반환값을 저장할 수 있다.
	printNumber(num);
	return 0;
}