/*
 ������

	1. ���������
		+, -, *, /, %
	2. ���Կ�����
		=, +=, -=, *=, /=, %=
		:������ �����ʿ� �ִ� ���� ������ ���ʿ� �ִ� ������ ����
	3. �� ������
		>	: ũ��
		>=	: ũ�ų� ����
		<	: �۴�
		<=	: �۰ų� ����
		==	: ����
		!=	: �ٸ���

	������ �켱 ����
			1) ++, --
			2) +, - ��ȣ������(���, ����)
			3) *, / %
			4) +, - ���� ����
			5) <, >, <=, >=
			6) ==, !=
			7) =, +=, -=, ...
*/

#include <stdio.h>
int main() {

	int num1 = 7, num2 = 3;

	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d %% %d = %d\n\n", num1, num2, num1 % num2);

	int num3 = 3, num4 = 4;

	num3 += 3;
	num4 *= 4;
	printf("num += 3�� ��� : %d\n", num3);
	printf("num *= 4�� ��� : %d\n\n", num4);

	int a = 10, b = 11;

	printf("a == b : %d\n", a == b);
	printf("a > b : %d\n", a > b);
	printf("a < b : %d\n", a < b);
	printf("a >= b : %d\n", a >= b);
	printf("a <= b : %d\n", a <= b);
	printf("a != b : %d\n", a =! b);
}