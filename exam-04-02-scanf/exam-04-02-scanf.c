/*
 scanf()
	������ �Է¿� ���Ǵ� �Լ�

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

	printf(" �� ���� ���� �Է� : ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("�Էµ� ������ : %d %d %d \n", num1, num2, num3);

	return 0;
}