#include<stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter three values: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > max){
        max = b;
    }
    if (c > max){
        max = c;
    }
    printf("%d is the max value\n", max);
    return 0;
}
