#pragma warning(disable:4996)
#include <stdio.h>

void guide(void) {

	printf("inputNumber �Լ��� ���� ������ �Է��� �� �ֽ��ϴ�.\n");
	printf("���� printNumber �Լ��� ���� �Է��� ������ ����� ���� �ֽ��ϴ�.\n");
}

void printNumber(int num) {
	printf("����� �Է��� ������ %d�Դϴ�. \n", num);
}

int inputNumber(void) {
	int num;
	printf("������ �Է��� �ּ���: ");
	scanf("%d", &num);

	return num;
}

int main() {

	guide();
	int num = inputNumber(); // ��ȯ���� ������ �� �ִ�.
	printNumber(num);
	return 0;
}