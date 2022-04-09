#include <stdio.h>
#include <string.h>
typedef struct {
	char name[10];
	int age;
} Person;

int main() {
	Person p1;
	Person *ptr;
	ptr = &p1;
	strcpy(ptr->name, "¾öÁØ½Ä");
	ptr -> age = 27;
	printf("%s %d", p1.name, p1.age);
}
