#include <stdio.h>
#include <string.h>
struct Person {
	char name[20];
	int age;
	int money;
};

int main() {
	struct Person p1;
	strcpy(p1.name, "���ؽ�");
	p1.age = 27;
	p1.money = 10000;
	printf("�̸��� %s\n", p1.name);
	printf("���̴� %d\n", p1.age);
	printf("���� ������ ���� %d", p1.money);
}
