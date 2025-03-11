#include<stdio.h>
int main(){
    int i = 5;
    int *j = &i, **k = &j;
    printf("Value of j: %u\n", j);
    printf("Address of i: %u\n", &i);
    printf("Value of i accessing via j: %d\n", *j);
    printf("Value of i accessing via j and k: %d\n", **k);
    *j = *j + 2;
    printf("After incrementing by 2: \n");
    printf("Value of j: %u\n", j);
    printf("Address of i: %u\n", &i);
    printf("Value of i accessing via j: %d\n", *j);
    printf("Value of i accessing via j and k: %d\n", **k);
    return 0;
}
