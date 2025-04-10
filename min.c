#include<stdio.h>
int main(){
    int a, b, c, min;
    printf("Enter three values: ");
    scanf("%d%d%d", &a, &b, &c);
    min = a;
    if (b < min){
        min = b;
    }
    if (c < min){
        min = c;
    }
    printf("%d is the min value\n", min);
    return 0;
}
