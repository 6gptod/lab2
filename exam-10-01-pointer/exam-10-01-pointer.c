/*
 포인터
	메모리의 주소값을 의미하며 주소값을 저장하는 변수를 가리켜
	'포인터 변수'라고 한다.
*/

#include <stdio.h>

int main() {
	char cnum = 5;
	int inum = 999;
	double dnum = 3.14;

	// 포인터*연산자 선언, 참조&연산자로 포인터 변수 생성
	char* cptr = &cnum;
	int* iptr = &inum;
	double* dptr = &dnum;

	// 포인터 변수의 출력에는 형식문자 %p를 입력
	printf("%p\n", cptr);
	printf("%p\n", iptr);
	printf("%p\n", dptr);

	int num = 10;
	int* pnum;
	pnum = &num;

	printf("%d\n", *pnum);


	*pnum = 20;
	printf("num : %d\n", num);
	(*pnum)++;	(*pnum)++;
	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);
	return 0;
}