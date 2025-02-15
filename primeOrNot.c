#include<stdio.h>
int main(){
    int a, i = 2;
    scanf("%d", &a);
    for(i; i < a; i++){
        if (a % i == 0){
            printf("%d is not prime\n", a);
            return 0;
        }
    }
    printf("%d is prime\n");
    return 0;
}
