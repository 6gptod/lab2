/*
	반복분
		특정한 부분의 코드가 반복적으로 수행될 수 있도록 하는 구문

	1. while 문
	while(조건){
	
	반복 수행될 코드
	}


*/
#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	/*int num = 0;
	while (num < 3) {
		printf("num is %d now\n", num);
		num++;
	}*/

	int num2 = 0;
	while (num2 != -1) {
		printf("숫자를 입력하세요(-1 입력시 종료) : ");
		scanf("%d", &num2);
		if (num2 == -1)
			printf("종료합니다.");
		else
			printf("%d을(를) 입력하셨습니다.\n", num2);
	}

	return 0;
}