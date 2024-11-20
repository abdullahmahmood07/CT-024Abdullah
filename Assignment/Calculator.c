#include <stdio.h>
int main() {
    char operator;
    double num1, num2, result;
    printf("Welcome to the Basic Calculator!\n");
    printf("Choose an operation (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator){
        case '+':
            result = num1 + num2;
            printf("Result: %.lf + %.lf = %.lf\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.lf - %.lf = %.lf\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.lf * %.lf = %.lf\n", num1, num2, result);
            break;

        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.lf / %.lf = %.lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("Error: Invalid operator selected.\n");
    }

    return 0;
}
