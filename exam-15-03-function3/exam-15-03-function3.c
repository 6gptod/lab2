#include <stdio.h>

int getBigger(int n1, int n2) {
	if (n1 > n2) {
		return n1;
	}
	else if(n1 < n2) {
		return n2;
	}
	else {
		return 0;
	}
}

int main() {

	int result;

	result = getBigger(3, 5);
	printf("ù ��° ��� : %d\n", result);
	result = getBigger(8, 2);
	printf("�� ��° ��� : %d\n", result);
	result = getBigger(4, 4);
	printf("�� ��° ��� : %d\n", result);

	return 0;
}