/*
	3. for ��
for( ���� �ʱ�ȭ; ���ǽ�; ������)
{
	������ �ڵ�
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
		printf("���ڸ� �Է��ϼ���(-1 �Է½� ����) : ");
		scanf("%d", &num);
		if (num == -1)
			printf("�����մϴ�.");
		else
			printf("%d�� �Է��ϼ̳׿�.\n", num);
	}
}