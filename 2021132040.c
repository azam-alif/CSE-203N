#include<stdio.h>
int main(){
    int i, n, evens = 0, odds = 0, zeros= 0;
    // i for loop handling. And evens, odds and zeros are initialized with 0. 
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    if (n<=0){
        printf("Invalid input.\n");
        return 0;
    }

    int num[n]; //initialized an array for n numbers
    printf("Enter the numbers: ");
    for(i=0; i<n; i++){
        scanf("%d", &num[i]);
    } 
      
    printf("\n\n");

    for(i=0; i<n; i++){
        if(num[i] == 0){
            printf("Zero: %d\n", num[i]);
            zeros++; //increasing variable zeros by 1.
                     
        } else if(num[i]%2==0){
            printf("Even: %d, Square: %d\n", num[i], num[i]*num[i]);
            evens++; //increasing variable evens by 1.

        } else if(num[i]%2!=0){
            printf("Odd: %d, Cube: %d\n", num[i], num[i]*num[i]*num[i]);
            odds++; //increasing variable odds by 1.

        }
    }

    printf("Total Even Numbers: %d\n",evens);
    printf("Total Odd Numbers: %d\n",odds);
    printf("Total Zeros: %d\n",zeros);
    return 0;
}
