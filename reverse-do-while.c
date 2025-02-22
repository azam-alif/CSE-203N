#include<stdio.h>
int main(){
    int a, reverse = 0, remainder;
    scanf("%d", &a);
    do{
        remainder = a%10;
        reverse = reverse * 10 + remainder;
        a = a/10;
    } while (a != 0);
    printf("reverse = %d\n", reverse);
    return 0;
}
