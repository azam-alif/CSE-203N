#include<stdio.h>
int sum(int *val, int size);

int main(){
    int val[] = {10, 20, 30};
    int mean = sum(val, 3);
    printf("val array address(hexa code): %x\n", val);
    printf("val array address(integer): %d\n", val);
    printf("Mean: %d\n", mean);
    return 0;
}

int sum(int *val, int size){
    int sum = 0, i;
    for(i = 0; i < size; i++){
        sum += val[i];
    }
    return sum/size;
}
