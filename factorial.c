#include<stdio.h>

int factorial(int n);
int main(){
    int n;
    scanf("%d", &n);
    int fact = factorial(n);
    printf("Factorial of %d is %d\n", n, fact);
    return 0;
}

int factorial(int n){
    int i, fact=1;
    for(i = 2; i<=n; i++){
        fact *= i;
    }
    return fact;
}
