#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    int age;
};

int main() {
    struct Student students[5];  
    int i;

    for (i = 0; i < 5; i++) {
        students[i].roll = i + 1;
        printf("Enter name and age for roll %d: ", students[i].roll);
        scanf("%s %d", students[i].name, &students[i].age);
    }
    printf("\nDetails of student with roll 2:\n");
    printf("Roll: %d\nName: %s\nAge: %d\n", students[1].roll, students[1].name, students[1].age);
    return 0;
}
