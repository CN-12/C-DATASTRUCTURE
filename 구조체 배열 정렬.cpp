#include <stdio.h>
#include <string.h>

typedef struct {
	int score;
	char name[20];
} Student;

int main() {
	int i,j;
	int count = 5;
	Student st[count];
	for(i = 0; i < count; i++) {
		scanf("%s %d", st[i].name, &st[i].score);
    }
	for(i = 0; i < count-1; i++) {
    Student temp;
		for(j = 0; j < count-1; j++) {
			if(st[j].score < st[j+1].score) {
				temp = st[j];
				st[j] = st[j+1];
				st[j+1] = temp;
			}
		}
    }
	for(i = 0; i < count; i++)
		printf("%dµîÀº %s\n", i+1, st[i].name);
}
