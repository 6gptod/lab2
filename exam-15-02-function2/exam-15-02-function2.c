#include <stdio.h>

int add(int a, int b);

int main() {

	int result;

	result = add(3, 9);
	printf("%d\n", result);

	return 0;
}

int add(int a, int b) {
	return a + b;
}