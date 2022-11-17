/*
 scanf()
	데이터 입력에 사용되는 함수

*/
#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int main() {
	//char character;
	//int inum;
	//float fnum;

	//scanf("%c", &character);
	//scanf("%d", &inum);
	//scanf("%f", &fnum);

	//printf("%c, %d, %f \n", character, inum, fnum);

	int num1, num2, num3;
	float fnum1, fnum2;

	printf(" 세 개의 정수 입력 : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("입력된 정수들 : %d %d %d \n", num1, num2, num3);

	return 0;
}