#include <stdio.h>
int main() {
    float num1, num2, result;
    char operator;
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '+':
            result = num1+num2;
            printf("%.2f\n", result);
            break;
        case'-':
            result = num1 - num2;
            printf("%.2f\n",result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f\n", result);
            break;
        case '/':
            if (num2==0){
                printf("Error cannot divide by zero!\n");
            } else{
                result=num1/num2;
                printf("%.2f\n", result);
            }
            break;
        default:
            printf("Unknown operator\n");

    }

    return 0;
}
