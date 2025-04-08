#include<stdio.h>

int armstrong(int num, int power);
int size(int num);

int main(){
    int num, sum, power;
    scanf("%d",&num);
    power = size(num);
    sum = armstrong(num, power);
    if(sum == num){
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}

int armstrong(int num, int power){
    int sum=0, remainder,i;
    while(1){
        int temp = 1;
        remainder = num % 10;
        for(i=0; i<power; i++){
            temp = temp*remainder;
        }
        sum += temp;
        num = num / 10;
        if (num == 0){
            break;
        }
    }
    return sum;
}

int size(int num){
    int count = 0;
    while(1){
        num = num/10;
        count++;
        if (num == 0){
            break;
        }
    }
    return count;
}
