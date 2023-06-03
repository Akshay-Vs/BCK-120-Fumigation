#include <stdio.h>

int main()
{
    float income, tax;
    printf("Enter your income in lakhs: ");
    scanf("%f", &income);

    if (income < 2.5)
        tax = income;
    else if (income < 5)
        tax = income * 5 / 100;
    else if (income < 10)
        tax = income * 20 / 100;
    else if (income < 50)
        tax = income * 30 / 100;

    printf("Your calculated tax: %f Lakhs\n",tax);
}