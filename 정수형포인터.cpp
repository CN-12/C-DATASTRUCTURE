#include <stdio.h>

int main() {
	int a = 7;
	int *b = &a;
	int **c = &b;
	printf("a 값은 %d b 값은 %d\n", a, b);
	printf("a 주소 값은 %d b 주소 값은 %d\n", &a, &b);
	printf("b의 포인터는 %d\n", *b);
	printf("c의 더블포인터  %d\n", **c);
	printf("c의 포인터  %d\n", *c);
	printf("c 값은 %d\n", c);
	printf("c의 주소값 %d\n", &c);
}
