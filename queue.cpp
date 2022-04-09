#include <stdio.h>
#define MAX 5
int a[MAX];
int front = 0;
int rear = 0;
int isFull() {
  int tmp = (rear+1) % MAX;
	if(tmp == front) return 1;
	else return 0;
}
void insertq(int n) {
	if(isFull()) printf("큐가 가득 찼습니다\n");
	else {
		rear = (rear+1) % MAX;
		a[rear] = n;
	}
}
int isEmpty() {
	if(front == rear) return 1;
	else return 0;
}

int deleteq() {
	if(isEmpty()) {
		printf("큐가 비어있습니다\n");
		return -1;
	}
	else {
		front = (front+1) % MAX;
		return a[front];
	}
}


int main() {
	int select, n;
	printf("0 QUIT 1 Insert 2 Delete\n");
	do {
		scanf("%d %d", &select, &n);
		switch(select) {
			case 1:
				insertq(n);
				break;
			case 2:
				printf("%d\n", deleteq());
				break;
		}
	} while(select !=0);
} 
