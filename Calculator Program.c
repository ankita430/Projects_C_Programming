#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;
    char repeat = 'y';
    int is_valid_calculation;

    printf("Welcome to the Calculator Program!\n");

    do {
        is_valid_calculation = 1; 

        printf("Enter first number: ");
        scanf("%f", &num1);
        
        printf("Enter operation (+, -, *, /): ");
        
        scanf(" %c", &operation);

        printf("Enter second number: ");
        scanf("%f", &num2);
        
        switch (operation) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed!\n");
                    is_valid_calculation = 0; // Set flag to 0 for invalid calculation
                } else {
                    result = num1 / num2;
                }
                break;
            default:
                printf("Error: Invalid operation. Please enter +, -, *, or /.\n");
                is_valid_calculation = 0; // Set flag to 0 for invalid calculation
                break;
        }

        if (is_valid_calculation) {
            printf("%.2f %c %.2f = %.2f\n", num1, operation, num2, result);
        }

        printf("Would you like to calculate again? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("Thank you for using the Calculator program. Goodbye!\n");

    return 0;
}
