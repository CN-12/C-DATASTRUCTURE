#include <stdio.h>
#define STACK_SIZE 5

int a[STACK_SIZE];
int top = -1;
int pop() {
	if(top == -1) {
		printf("������ ����ֽ��ϴ�\n");
	}
	else {
		printf("%d�� �������Խ��ϴ�\n", a[top]);
		a[top] = 0;
		top--;
	}
}
void push(int n) {
	if(top == STACK_SIZE-1) {
		printf("������ ����á���ϴ�\n");
	}
	else {
		top++;
		a[top] = n;
	}	
}

int main() {
	int select, n;
	printf("0 ���� 1 push 2 pop ���� �� �ڿ� �־��ּ���\n");
	printf("pop�� �ڵ����� �Ǵ� ���� ��� �����ּ���\n");
	do {
		scanf("%d %d", &select, &n);
		switch(select) {
			case 1:
				push(n);
				break;
			case 2:
				pop();
				break;
		}
	}while (select != 0);
}
