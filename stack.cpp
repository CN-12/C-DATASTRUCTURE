#include <stdio.h>
#define STACK_SIZE 5

int a[STACK_SIZE];
int top = -1;
int pop() {
	if(top == -1) {
		printf("스택이 비어있습니다\n");
	}
	else {
		printf("%d가 빠져나왔습니다\n", a[top]);
		a[top] = 0;
		top--;
	}
}
void push(int n) {
	if(top == STACK_SIZE-1) {
		printf("스택이 가득찼습니다\n");
	}
	else {
		top++;
		a[top] = n;
	}	
}

int main() {
	int select, n;
	printf("0 종료 1 push 2 pop 값은 그 뒤에 넣어주세요\n");
	printf("pop은 자동으로 되니 값은 상관 말아주세요\n");
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
