#include <stdio.h>

int main() {
	int a = 7;
	int *b = &a;
	int **c = &b;
	printf("a ���� %d b ���� %d\n", a, b);
	printf("a �ּ� ���� %d b �ּ� ���� %d\n", &a, &b);
	printf("b�� �����ʹ� %d\n", *b);
	printf("c�� ����������  %d\n", **c);
	printf("c�� ������  %d\n", *c);
	printf("c ���� %d\n", c);
	printf("c�� �ּҰ� %d\n", &c);
}
