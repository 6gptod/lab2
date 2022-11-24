/*
4. �� ������
	&&(AND)		: �� �����ڰ� ��� ���̸� ��
	||(OR)		: �� ������ �� ���� ������ ��
	!(NOT)		: �� �����ڰ� ���̸� ����, �����̸� ��(����)

5. ���� ���� ������
	���� ? ���� ��� ��� : ������ ��� ���
6. ��Ʈ ���� ������
	&	: ������ �Ǵ� ��Ʈ�� ��� 1�̸� 1�� ��ȯ��. (��Ʈ AND ������)
	|	: ������ �Ǵ� ��Ʈ �߿��� �ϳ��� 1�̸� 1�� ��ȯ (��Ʈ OR ������)
	^	: ������ �Ǵ� ��Ʈ�� ���� �ٸ��� 1�� ��ȯ. (��Ʈ XOR ������)
	~	: ��Ʈ�� 1�̸� 0���� , 0�̸� 1�� ���� ��Ŵ (��Ʈ NOT ������)
7. ����Ʈ ������
	<< ������ ����ŭ ��Ʈ���� ���� ���ʿ�� �̵���Ŵ. 
	>> ��ȣ�� �����ϸ鼭 ������ ����ŭ ��Ʈ�� ���� ���������� �̵���Ŵ.
*/
#pragma warning(disable:4996)
#include < stdio.h>

int main() {
	printf("�� ������ \n");

	int num1 = 20, num2 = 10;
	int result;
	result = 1 && 1;

	printf("result ���� %d\n\n", result);

	result = num1 == 20 && num2 == 10;
	printf("result ���� %d\n\n", result);

	result = num1 > num2 && num1 == num2;

	printf("result ���� %d\n", result);

	int num, absolute;

	printf("���� �Է� : ");
	scanf("%d", &num);

	absolute = num > 0 ? num : num * -1;
	printf("���밪 : %d\n", absolute);

	int a = 3;		//0000 0011
	int b = 5;		//0000 0101

	printf("3 & 5 = %d\n", a & b);
	printf("3 | 5 = %d\n", a | b);
	printf("3 ^ 5 = %d\n", a ^ b);
	printf("~3 = %d\n", ~a);

	// ����Ʈ ������
	int x, y;
	x = 1;
	y = x << 2; // �������� �� ĭ �̵�
	printf("%d << 2 = %d\n", x, y);

	y = y >> 2;
	printf("%d >> 2 = %d\n", x, y);
}