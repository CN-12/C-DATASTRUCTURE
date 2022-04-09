#include <stdio.h>
#include <string.h>
struct Person {
	char name[20];
	int age;
	int money;
};

int main() {
	struct Person p1;
	strcpy(p1.name, "엄준식");
	p1.age = 27;
	p1.money = 10000;
	printf("이름은 %s\n", p1.name);
	printf("나이는 %d\n", p1.age);
	printf("현재 보유한 돈은 %d", p1.money);
}
