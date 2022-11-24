/*
4. 논리 연산자
	&&(AND)		: 피 연산자가 모두 참이면 참
	||(OR)		: 피 연산자 중 참이 있으면 참
	!(NOT)		: 피 연산자가 참이면 거짓, 거짓이면 참(반전)

5. 삼항 조건 연산자
	조건 ? 참일 경우 결과 : 거짓일 경우 결과
6. 비트 단위 연산자
	&	: 대응이 되는 비트가 모두 1이면 1을 반환함. (비트 AND 연산자)
	|	: 대응이 되는 비트 중에서 하나라도 1이면 1을 반환 (비트 OR 연산자)
	^	: 대응이 되는 비트가 서로 다르면 1을 반환. (비트 XOR 연산자)
	~	: 비트를 1이면 0으로 , 0이면 1로 반전 시킴 (비트 NOT 연산자)
7. 시프트 연산자
	<< 지정한 수만큼 비트들을 전부 왼쪽우로 이동시킴. 
	>> 부호를 유지하면서 지정한 수만큼 비트를 전부 오른쪽으로 이동시킴.
*/
#pragma warning(disable:4996)
#include < stdio.h>

int main() {
	printf("논리 연산자 \n");

	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;

	printf("result 값은 %d\n\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result 값은 %d\n\n", result);

	result = num1 > num2 && num1 == num2;

	printf("result 값은 %d\n", result);

	int num, absolute;

	printf("정수 입력 : ");
	scanf("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("절대값 : %d\n", absolute);

	int a = 3;		//0000 0011
	int b = 5;		//0000 0101

	printf("3 & 5 = %d\n", a & b);
	printf("3 | 5 = %d\n", a | b);
	printf("3 ^ 5 = %d\n", a ^ b);
	printf("~3 = %d\n", ~a);

	// 쉬프트 연산자
	int x, y;
	x = 1;
	y = x << 2; // 왼쪽으로 두 칸 이동
	printf("%d << 2 = %d\n", x, y);

	y = y >> 2;
	printf("%d >> 2 = %d\n", x, y);
}