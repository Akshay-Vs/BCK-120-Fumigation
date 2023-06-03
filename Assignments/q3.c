#include <stdio.h>

int main()
{
    int amount;
    float interest, years, simple_interest;
    printf("Enter Principle Amount: ");
    scanf("%d", &amount);
    printf("Enter Interest Rate: ");
    scanf("%f", &interest);
    printf("Enter Number of years: ");
    scanf("%f", &years);

    simple_interest = (amount*interest*years)/100;
    printf("Interest: %f",simple_interest);
    return 0;