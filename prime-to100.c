#include<stdio.h>
int main(){
    int i, j,prime;
    for(i=2; i<100; i++){
        prime = 1;
        for(j=2; j*j<=i; j++){
            if((i%j)==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d is prime\n", i);
        }
    }
    return 0;
}
