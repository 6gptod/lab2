/*
	�ݺ���
		Ư���� �κ��� �ڵ尡 �ݺ������� ����� �� �ֵ��� �ϴ� ����

	1. while ��
	while(����){
	
	�ݺ� ����� �ڵ�
	}


*/
#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	/*int num = 0;
	while (num < 3) {
		printf("num is %d now\n", num);
		num++;
	}*/

	int num2 = 0;
	while (num2 != -1) {
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num2);
		if (num2 == -1)
			printf("�����մϴ�.");
		else
			printf("%d��(��) �Է��ϼ̽��ϴ�.\n", num2);
	}

	return 0;
}