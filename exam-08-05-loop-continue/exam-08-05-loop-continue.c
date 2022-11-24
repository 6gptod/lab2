/*
continue문
	반복문을 건너뛴다.
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