#include<stdio.h>
int main()
{
    int a, b, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b); 
    printf("Enter an operator (+, -, *, /, %): ");
    char operation;
    scanf(" %c", &operation);


    switch(operation)
    {
       case '+':
        result = a + b;
        printf("Sum = %d\n", result);
        break;

        case '-':
        result = a - b;
        printf("substration = %d\n", result);
        break;

        case '*':
        result = a * b;
        printf("multiplication = %d\n", result);
        break;

        case '/':
        result = a / b;
        printf("division = %d\n", result);
        break;

        case '%':
        result = a % b;
        printf("remainder = %d\n", result);
        break;
        default:
        printf("Invalid operator!\n");
        break;
    }

}