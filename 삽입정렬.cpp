#include <stdio.h>

int main() {
	int a[10],n,i,j,temp;
	scanf("%d", &n);
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	for(i = 1; i < n; i++) {
		temp = a[i];
		for(j = i; j > 0 && a[j-1]>temp; j--) {
			a[j] = a[j-1];
		}
		a[j] = temp;
		for(int k = 0; k < n; k++) printf("%d ", a[k]);
		printf("\n");
	}
	for(i = 0; i < n; i++) printf("%d ", a[i]);
}
