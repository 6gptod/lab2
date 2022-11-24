/*
	1 2 3 4 5 6 7
	.
	.
	.
	43 44 45 46 47 48 49

	출력 순서는

	1
	2 8
	15 19 3
	.
	.
	.
*/

#include <stdio.h>
int main() {
	int arr[7][7];
	int anw[7][7];
	int i, j;
	int x = 0;
	int num = 1;
	int count = 0;
	for ( i = 0; i < 7; i++)
	{
		for ( j = 0; j < 7; j++)
		{
			arr[i][j] = num;
			printf("%d ", arr[i][j]);
			num++;
		}
		printf("\n");
	}

	printf("\n");
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			
		}
		printf("\n");
	}

}