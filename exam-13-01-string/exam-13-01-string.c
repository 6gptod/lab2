/*
 ���ڿ�
	C���� ���ڿ��� ū ����ǥ(")�� �̿��ؼ� ǥ��
	���ڿ��� ����(char)�� �̷���� �迭
	���ڿ� ���� ��(NULL) ���ڷ� ǥ��
*/

#include <stdio.h>

int main() {
	char good[] = "Good!";
	char* bad = "Bad!";

	printf("%s \n", good);
	printf("%s \n", bad);

	//�迭 ����� ���ڿ� ����
	good[0] = 'H';
	printf("%s \n", good);

	bad[0] = 'S'; // �� ���� ������
	bad = "new bad"; // ����
}