#include <stdio.h>

int main() {
	int a[10];
	int max;
	scanf("%d", &max);
	int i,j,temp;
	for(i = 0; i < max; i++)
		scanf("%d", &a[i]);
	for(i = 0; i < max; i++) {
		for(j = i+1; j < max; j++) {
			if(a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		} 
	}
	for(i = 0; i < max; i++) printf("%d ", a[i]);
}
