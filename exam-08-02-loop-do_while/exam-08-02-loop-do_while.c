/*
2. do ~ while
*/

#include <stdio.h>

int main() {
	int num = 0;

	do {
		printf("num is %d now\n", num);
		num++;
	} while (num < 3);
}