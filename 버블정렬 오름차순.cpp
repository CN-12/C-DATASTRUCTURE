#include <stdio.h>

int main() {
	int a[10];
	int i,j,max,temp;
	scanf("%d", &max);
	for(i = 0; i < max; i++) scanf("%d", &a[i]);
	for(i = 0; i < max-1; i++)
		for(j = 0; j < max-1; j++) {
			if(a[j] < a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	for(i = 0; i < max; i++) printf("%d ", a[i]);
}
