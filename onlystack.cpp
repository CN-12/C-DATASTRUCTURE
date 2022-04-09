#include <stdio.h>
#define STACK_SIZE 5

int a[5];
int top = -1;
int isFull() {
	if(top>=STACK_SIZE-1) return 1;
	else return 0;
}
int isEmpty() {
	if(top < 0) return 1;
	else return 0;
}
int pop() {
	if(isEmpty()) printf("스택이 비어있습니다\n");
	else {
		int popN = a[top];
		top--;
		return popN; 
	}
}
void push(int n) {
	if(isFull()) printf("스택이 가득 차버렸습니다\n");
	else {
		top++; 
		a[top] = n; 
	}
}

int main() {
	int select,n;
	do {
		scanf("%d %d", &select, &n);
		switch(select) {
			case 1:
				push(n);
				break;
			case 2:
				printf("빠진 값은 %d\n",pop());
				break;
		}
	} while(select != 0);
}
