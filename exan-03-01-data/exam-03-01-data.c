/*
데이터 표현방식
	정수 표현

	실수 표현

	unsigned 자료형

*/

#include<stdio.h>
int main() {
	float err_num = 0;
	for (int i = 0; i < 100; i++)
	{
		err_num += 0.1;
	}
	printf("%f\n", err_num);

	char cnum = 128;
	unsigned char u_cnum = 128;
	short snum = 32768;
	unsigned short u_snum = 32768;

	printf("%d\n", cnum);
	printf("%d\n", u_cnum);
	printf("%d\n", snum);
	printf("%d\n", u_snum);
}