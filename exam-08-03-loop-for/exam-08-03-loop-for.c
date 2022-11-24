/*
	3. for 문
for( 변수 초기화; 조건식; 증감식)
{
	실행할 코드
}
*/
#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	/*int i;
	for ( i = 0; i < 3; i++)
	{
		printf("i is %d now\n", i);
	}
	printf("\n");

	int j = 0;
	while( j < 3)
	{
		printf("j is %d now\n", j);
		j++;
	}*/

	int num = 0;
	for (;num !=-1;)
	{
		printf("숫자를 입력하세요(-1 입력시 종료) : ");
		scanf("%d", &num);
		if (num == -1)
			printf("종료합니다.");
		else
			printf("%d를 입력하셨네요.\n", num);
	}
}