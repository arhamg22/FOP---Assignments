#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;
    int i, n;
    long long factorial = 1;
    int powerResult = 1;

    printf("----- Simple Calculator -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case 5:
            printf("Enter base and exponent: ");
            scanf("%f %f", &num1, &num2);
            for (i = 0; i < (int)num2; i++) {
                powerResult *= (int)num1;
            }
            printf("Result: %d\n", powerResult);
            break;
        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            for (i = 1; i <= n; i++) {
                factorial *= i;
            }
            printf("Result: %lld\n", factorial);
            break;
        default:
            printf("Invalid choice! Please select a valid option.\n");
    }
    