/*
break문
	반복문을 벗어난다.
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;

	while (1) {
		printf("-1 입력 시 종료: ");
		scanf("%d", &num);

		if (num == -1)
			break;
	}
}