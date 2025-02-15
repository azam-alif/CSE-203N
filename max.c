#include<stdio.h>
int main(){
    int a, b, c, max;
    printf("Enter three values: ");
    scanf("%d%d%d", &a, &b, &c);
    max = a;
    if (b > a && b > c){
        max = b;
    } else if (c > a && c > b){
        max = c;
    }
    printf("%d is the max value\n", max);
    return 0;
}
