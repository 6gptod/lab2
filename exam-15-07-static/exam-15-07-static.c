/*
 static ���� (���� ����)
	�Լ� ����(����), �Լ� �ܺ�(����)������ ��밡��
	���α׷��� ���۵� �� �Ҵ�ǰ� ���α׷��� ���� �� �Ҹ�ȴ�.
*/

#include <stdio.h>

void increaseNumber() {
	static int number = 0;

	number++;
	printf("number: %d\n", number);
}

int main() {
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();
	increaseNumber();

	return 0;
}