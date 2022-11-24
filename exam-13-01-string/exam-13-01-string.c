/*
 문자열
	C언어에서 문자열은 큰 따옴표(")를 이용해서 표현
	문자열은 문자(char)로 이루어진 배열
	문자열 끝은 널(NULL) 문자로 표시
*/

#include <stdio.h>

int main() {
	char good[] = "Good!";
	char* bad = "Bad!";

	printf("%s \n", good);
	printf("%s \n", bad);

	//배열 기반의 문자열 변수
	good[0] = 'H';
	printf("%s \n", good);

	bad[0] = 'S'; // 값 변경 물가능
	bad = "new bad"; // 가능
}