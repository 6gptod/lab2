/*
	2. switch 문
*/

#include <stdio.h>
int main() {

	int num = 1;

	switch (num) {
	case 0:
		printf("0 입니다.\n");
		break;
	case 1:
		printf("1 입니다. \n");
		break;
	case 2:
		printf("2 입니다. \n");
		break;
	case 3:
		printf("3 입니다. \n");
		break;
	default:
		printf("0~3이 아닙니다.\n");
		break;
	}

	char ch = 'w';
		switch (ch) {
		case 'w':
			printf("앞으로 이동\n");
			break;
		case 'a':
			printf("왼쪽으로 이동\n");
			break;
		case 's':
			printf("뒤로 이동\n");
			break;
		case 'd':
			printf("오른쪽으로 이동\n");
			break;
		default:
			printf("자동 공격\n");
			break;


		}
	return 0;
}