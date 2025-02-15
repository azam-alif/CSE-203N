#include<stdio.h>
int main(){
    int a, b, c, min;
    printf("Enter three values: ");
    scanf("%d%d%d", &a, &b, &c);
    min = a;
    if (b < a && b < c){
        min = b;
    } else if (c < a && c < b){
        min = c;
    }
    printf("%d is the min value\n", min);
    return 0;
}
