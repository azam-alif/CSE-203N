#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;             // Get last digit
        reversed = reversed * 10 + remainder; // Append it to reversed number
        num = num/ 10;                        // Remove last digit
    } while (num != 0);                    // Continue until all digits are processed

    printf("Reversed number: %d\n", reversed);
    return 0;
}

