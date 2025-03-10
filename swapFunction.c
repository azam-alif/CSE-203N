#include<stdio.h>
void swap(int *a, int *b);

int main(){
    int a=5, b=8;
    printf("Before: (a, b) = (%d, %d)\n", a, b);
    swap(&a, &b);
    printf("After: (a, b) = (%d, %d)\n", a, b);
    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
