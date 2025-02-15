#include <stdio.h>

int main() {
    double num1, num2, result;
    printf("Enter 1st number : ");
    scanf("%lf", &num1);
    printf("Enter 2nd number : ");
    scanf("%lf", &num2);
    printf("Enter an operator(+,-,*,/) : ");
    char op;
    scanf(" %c", &op);
    if(op == '+'){
        result = num1 + num2;
        printf("Result : %.2lf\n", result);
    } else if(op == '-'){
        result = num1 - num2;
        printf("Result : %.2lf\n", result);
    } else if (op == '*'){
        result = num1 * num2;
        printf("Result : %.2lf\n", result);
    } else if (op == '/'){
        result = num1 / num2;
        printf("Result : %.2lf\n", result);
    } else {
        printf("Invalid Operator");
    }
    return 0;
}
