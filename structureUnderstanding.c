#include <stdio.h>

struct Student {
    char name[20];
    int roll;
};

int main() {
    struct Student s1 = {"Alice", 101};
    struct Student *s2 = &s1;
    printf("s1 variable location: %d\n", s2);
    printf("(direct acccess)name: %s, roll: %d\n", s1.name, s1.roll);
    printf("(via pionter)name: %s, roll: %d\n", s2->name, s2->roll);
    return 0;
}

