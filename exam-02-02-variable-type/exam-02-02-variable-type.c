/*
c언어 기본 자료형 종류
	char
	short
	int
	long
	long long
	float
	double
	long double
	
*/

#include <stdio.h>
int main() {
	printf("sizeof(100) : %d\n", sizeof(100));
	printf("sizeof(3.14) : %d\n", sizeof(3.14));

	char ch1 = 66, ch2 = 'B';
	short sh1 = 67;
	int in1 = 68;
	printf("%c\n", ch1);
	printf("%d\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", sh1);
	printf("%c\n", in1);

	return 0;
}