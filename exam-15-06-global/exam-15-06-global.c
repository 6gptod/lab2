/*
 ���� ����
	���α׷��� ���۰� ���ÿ� �޸� ������ �Ҵ�Ǿ� ������ ������ ����
	���α׷� ��� �������� ���� ����
	���� ������ ���� ���� �̸��� ������ ��� ���� ������ ���ȴ�.
*/

#include <stdio.h>

int number = 0;

void pirntNumber(void) {
	printf("���� ���� number�� %d�� �����ϰ� �ִ�!\n", number);
}
int main(void) {
	int number = 3;
	printf("���� ���� number�� %d�� �����ϰ� �ִ�!\n", number);
	printNumber();

	return 0;
}