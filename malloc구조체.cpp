#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Person {
	char name[20];
	int age;
	int money;
}Person;

int main() {
	Person *p1 = (Person *)malloc(sizeof(Person));
	strcpy(p1->name, "¾öÁØ½Ä");
	p1->age = 27;
	p1->money = 10000;
	printf("%s %d %d", p1->name, p1->age, p1->money);
	free(p1);
}
