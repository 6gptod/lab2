/*
	4. strcat(str1, str2)
		���ڿ� �̾� ������
	5. strncat(str1, str2, count)
		���ϴ� ���� ��ŭ �̾� ������
	6. strcmp(str1, str2)
		�� ���ڿ� ��� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
	7. strcmp(str1, str2, count)
		count�� ���ڸ� ���Ͽ� �� ���ڿ� �� ������ 0, �ٸ��� 0�� �ƴ� �� ��ȯ
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
int main() {

	char str1[50] = "Michael ";
	char str2[50] = "Michael ";

	//strcat ���ڿ� ���̱�
	strcat(str1, " Bolton");
	puts(str1);

	//str2 �� 6���� ���� ���̱�
	strncat(str2, "Jackson Five", 7);
	puts(str2);

	// str1 �� str2 ��
	printf("�� ��� : %d\n", strcmp(str1, str2));

	// str1 �� str2 �� ���� 7�� ���ڸ� ��
	printf("�� ��� : %d\n", strncmp(str1, str2, 7));
	return 0;
}