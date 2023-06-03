#include <stdio.h>

int main()
{
    int num1;
    float num2;
    float sum;
    printf("Enter 1st digit: ");
    scanf("%d", &num1);

    printf("Enter second digit: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("Sum is %f\n", sum);
    return 0;
}