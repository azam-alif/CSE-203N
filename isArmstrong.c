#include<stdio.h>

int armstrong(int num);

int main(){
    int num, sum;
    scanf("%d",&num);
    sum = armstrong(num);
    if(sum == num){
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}

int armstrong(int num){
    int sum=0, remainder;
    while(1){
        remainder = num % 10;
        sum += (remainder*remainder*remainder);
        num = num / 10;
        if (num < 10){
            sum = sum + (num*num*num);
            break;
        }
    }
    return sum;
}
    
