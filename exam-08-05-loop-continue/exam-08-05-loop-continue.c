/*
continue��
	�ݺ����� �ǳʶڴ�.
*/

#include <stdio.h>
int main() {

	int num;
	for ( num = 0; num <= 5; num++)
	{
		if (num == 3)continue;
		printf("%d\n", num);
	}

	return 0;
}