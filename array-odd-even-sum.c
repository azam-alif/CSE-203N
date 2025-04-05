#include<stdio.h>
int main(){
    int n, i, even_sum = 0, odd_sum = 0;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0){
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }
    if(even_sum > odd_sum){
        printf("Sum of even numbers is greater. Which is %d\n", even_sum);
    } else if(even_sum == odd_sum) {
        printf("Sum of even numbers is equal to the sum of  odd numbers. Which is %d\n", even_sum);
    } else {
        printf("Sum of odd numbers is greater. Which is %d\n", odd_sum);
    }
    return 0;
}


    

