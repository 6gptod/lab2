/*
���ǹ�
	���ǽ��� ����� ���� ������ ����� �����ϵ��� �����ϴ� �ڵ�

1-1 if��
if(����){
	���ǽ��� ���� ��� ���� �ڵ�
}

if(���ǽ�)
	������ �ڵ�;	(�ڵ尡 �ϳ��� ���)

1-2 if ~ else ��
	if(����){
	���ǽ��� ���� ��� ���� �ڵ�
}
	else{
	������ ������ ��� ���� �ڵ�
}
if(���ǽ�)
	������ �ڵ�;	(�ڵ尡 �ϳ��� ���)
else
	������ �ڵ�

1-3 if ~ else if ~ else
	���� ���� �߰� ����

		if(����){
	���ǽ��� ���� ��� ���� �ڵ�
}
else if{
	������ �� �� ��� ���� �ڵ�
}
	else{
	������ ������ ��� ���� �ڵ�
}
*/

#include <stdio.h>
int main() {
	
	//1-1
	int num = 3;

	if (num < 3) {
		printf(" num is small than 3!");
	}
	if (num == 3) {
		printf("num is 3!");
	}
	if (num > 3) {
		printf("num is bigger than 3!");
	}
	printf("\n");
	//1-2 if ~ else ��

	char alpha = 'A';

	if (alpha == 'B')
		printf("alpha is B.");
	else
		printf("alpha is not B.");
	printf("\n");
	//1-3

	int score = 75;

	if (score > 90) {
		printf("�� �Դϴ�.");
	}
	else if (score > 80) {
		printf("�� �Դϴ�.");
	}
	else if (score > 70) {
		printf("�� �Դϴ�.");
	}
	else if (score > 60) {
		printf("�� �Դϴ�.");
	}
	else {
		printf("�� �Դϴ�.");
	}
	return 0;
}