#include <stdio.h>
#include <string.h>
typedef struct {
	char name[20];
	char subject[20];
} Teacher;
typedef struct {
	char name[20];
	int age;
	Teacher t;
} Student;

int main() {
	Teacher first = {"���ؽ�", "��Ʈ����"};
	int i,age=18;
	Student S1;
	strcpy(S1.name, "���");
	S1.age = age;
	S1.t = first;
	printf("%s %d\n", S1.name, S1.age);
	printf("%s %s", S1.t.name, S1.t.subject);
}
