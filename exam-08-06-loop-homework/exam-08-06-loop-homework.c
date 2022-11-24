/*
	¼÷Á¦!!!


    *
   **
  ***
 ****
 

   *  
  ***
 *****
 
   *  
  ***
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
	int i, j, x, y;
	/*for (i = 0; i < 7; i++)
	{
		for ( j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//2
	/*for (i = 0; i < 5; i++)
	{
		for ( x = 5; x >= i; x--)
		{
			printf(" ");
		}
		for ( j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//3

	/*for (i = 0; i < 7; i++)
	{
		for ( x = 5; x >= i; x--)
		{
			printf(" ");
		}
		for ( j = 0; j <= i; j++)
		{
			printf("*");
		}
		for (y = 0; y < i; y++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//4
	for (i = 0; i < 7; i++)
	{
		for (x = 5; x >= i; x--)
		{
			printf(" ");
		}
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		for (y = 0; y < i; y++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i < 6; i++)
	{
		for ( x = 0; x <= i; x++)
		{
			printf(" ");
		}
		for ( j = 6; j > i; j--)
		{
			printf("*");
		}
		for ( y = 5; y > i; y--)
		{
			printf("*");
		}
		printf("\n");
	}
}