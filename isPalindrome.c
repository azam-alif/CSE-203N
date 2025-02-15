#include<stdio.h>
int main(){
    int a1, a2, a3;
    scanf("%d%d%d", &a1, &a2, &a3);
    if ((a1+a2) == a3){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}

