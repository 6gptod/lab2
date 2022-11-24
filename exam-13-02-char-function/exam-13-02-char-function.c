/*
 char 관련 함수

	getchar()

	putchar()
*/

#include <stdio.h>
int main() {

	int ch1, ch2;
	ch1 = getchar();
	ch2 = getchar();

	putchar(ch1); putchar(ch2);
	return 0;
}