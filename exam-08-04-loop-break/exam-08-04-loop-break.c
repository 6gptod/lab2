/*
break��
	�ݺ����� �����.
*/

#include <stdio.h>
#pragma warning(disable:4996)

int main() {
	int num;

	while (1) {
		printf("-1 �Է� �� ����: ");
		scanf("%d", &num);

		if (num == -1)
			break;
	}
}