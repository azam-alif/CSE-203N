#include<stdio.h>
int main(){
    int year;
    scanf("%d", &year);
    if (year % 100 == 0 && year % 400 == 0){
        printf("Year %d is leap year.\n");
    } else if ( year % 100 != 0 && year % 4 == 0){
        printf("Year %d is leap year.\n");
    } else {
        printf("Year %d is not leap year.\n");
    }
    return 0;
}
