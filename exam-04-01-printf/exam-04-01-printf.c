/*
printf() �Լ�
	�ܼ� ȭ�鿡 ���ڿ� ��� �Լ�

	���� ����
		\t ��(tab)
		\n �� �ٲ�(enter)
		\b �� ĭ �������� �̵�
		\r �� ������ �̵�
		\a �����
		\' ���� ����ǥ
		\" ū ����ǥ
		\? ����ǥ
		\\ �齽����

	���� ����
		%d : ��ȣ�ִ� 10����
		%u : ��ȣ���� 10����
		%o : ��ȣ���� 8ģ��
		%x : ��ȣ�ִ� 16����
		%f : 10���� ����� �ε��Ҽ��� �Ǽ�
		%e : ���� ����� �ε��Ҽ��� �Ǽ�
		%g : ���� ���� %f�� %e �� ����
		%c : ���� �����ϴ� ����
		%s : ���ڿ�
		%p : ������ �ּҰ�
		%% : %�� ��� ���ڷ�
*/

#include <stdio.h>
int main() {
	printf("I Love C language!\n");
	printf("It is so funny!\n");

	printf("\" I am a boy. \"\n");
	printf("I am a \'boy.\' \n");
	printf("I\t am\t a \tboy. \n");
	printf("I \bam a boy. \n");
	printf("I am a boy.\\\?\n");

	char character = 'X';
	int inumber = 92;
	double dnumber = 20.201005;
	printf("%c\n", character);
	printf("%d\n", character);
	printf("%d\n", inumber);
	printf("%x\n", inumber);
	printf("%o\n", inumber);
	printf("%f\n", dnumber);
	printf("%e\n", dnumber);

	char character2 = 'H';
	int num = 548;
	float fnum = 1234567;
	printf("%10f\n", character2);
	printf("%-10f\n", character2);
	printf("%10.3f\n", num);
	printf("%-10.3f\n", num);

}