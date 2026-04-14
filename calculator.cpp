#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, answer;
    char op;

    while(1){
        const char *error = NULL;

        printf("\nEnter first number:\n");
        scanf("%lf", &a); 

        printf("Enter operator:\n");
        scanf(" %c", &op); 

        printf("Enter second number:\n");
        scanf("%lf", &b);

        if (op == '+')
        {
            answer = a + b;
        }
        else if (op == '-')
        {
            answer = a - b;
        }
        else if (op == '*')
        {
            answer = a * b;
        }
        else if (op == '/')
        {
            answer = a / b;
        }
        else
        {
            error = "Unknown operator!";
        }

        if (error)
        {
            printf(error);
        }
        else
        {
            printf("\n%lf %c %lf = %lf!\n", a, op, b, answer);
        }
    }
    return 0;
}