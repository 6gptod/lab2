/*
 �Լ���?
	���α׷��ֿ��� �Լ�(function)�� �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	���������� ����� ���α׷� �ڵ��� ����.

	���� Ÿ�� �Լ���(�Ű�����Ÿ�� �Ű�������){
		
		������ �ڵ� ����

		return ���ϰ�;

	}
*/

#include <stdio.h>

//����� ���� �Լ��� ����

int add(int a, int b) {
	return a + b;
}

int main(void) {
	int result;
	result = add(3, 5);

	printf("�ϼ��� ��ȯ�� �� : %d\n", result);
	return 0;
}