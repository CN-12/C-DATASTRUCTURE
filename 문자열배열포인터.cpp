#include <stdio.h>

int main() {
	char a[20];
	scanf("%s", &a);
	char *b;
	b = &a[0];
	printf("%s", b);
}
