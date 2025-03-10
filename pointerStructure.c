#include <stdio.h>

struct student {
    int sno;
    char sname[30];
    float perc;
};

int main() {
    struct student s = {56, "Raj", 98.2};
    struct student *st= &s;

    printf("Details of the students:\n");
    printf("Roll Number = %d\n", st->sno);
    printf("Student Name = %s\n", st->sname);
    printf("Percentage = %f\n", st->perc);

    return 0;
}
