#include<stdio.h>
int main(){
    int a1, a2, a3, max;
    scanf("%d%d%d", &a1, &a2, &a3);
    if (a1+a2>a3 && a2+a3>a1 && a1+a3>a2){
        printf("Can form Triangle\n");
    } else {
        printf("Cann't form Triangle\n");
    }
    return 0;
}
