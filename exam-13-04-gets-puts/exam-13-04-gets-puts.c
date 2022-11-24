/*
	gets()
		문자열 입력
	puts()
		문자열 출력
*/

#include <stdio.h>
int main() {
	char ch[30];
	gets(ch);
	puts(ch);
	printf("이 문자열은 다음 줄에서 출력 됩니다.\n");

	return 0;
}