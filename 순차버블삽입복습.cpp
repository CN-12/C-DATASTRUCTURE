#include <stdio.h>

int i,j,k,n;

void printAll(int a[]) {
	for(i = 0; i < n; i++) printf("%d ", a[i]);
}

int sort(int a[]) {
	int temp;
  	k = 0;
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
				k++;
			}
		}
	}
	printf("순차 정렬 : ");
	printAll(a);
	printf("\n");
  return k;
}

int bubble(int a[]) {
	int temp;
  	k = 0;
	for(i = 0; i < n-1; i++) {
		for(j = 0; j < n-1; j++) {
			if(a[j] > a[j+1]) {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
        		k++;
			}
		}
	}
	printf("버블 정렬 : ");
	printAll(a);
	printf("\n");
  	return k;
}

int insert(int a[]) {
	int temp;
  	k = 0;
	for(i = 1; i < n; i++) {
		temp = a[i];
		for(j = i; j > 0 && a[j-1] > temp; j--) {
			a[j] = a[j-1];
      		k++;
		}
		a[j] = temp;
	}
	printf("삽입 정렬 : ");
	printAll(a);
	printf("\n");
  	return k;
}
int main() {
	int a[100],select;
	scanf("%d", &n);
	for(i = 0; i < n; i++) scanf("%d", &a[i]);
	printf("1번은 순차 2번은 버블 3번은 삽입\n");
	scanf("%d", &select);
	switch(select) {
		case 1:
			printf("%d", sort(a));
			break;
		case 2:
			printf("%d", bubble(a));
			break;
		case 3:
			printf("%d", insert(a));
			break;	
	}
}
