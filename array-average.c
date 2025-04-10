#include <stdio.h>

float average(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    int n = 5;

    float avg = average(nums, n);
    printf("Average = %.2f\n", avg);

    return 0;
}
