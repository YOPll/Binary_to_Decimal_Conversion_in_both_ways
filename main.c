#include <stdio.h>
void   ft_dec(void)
{
    int rem;
    int bin;
    int weight = 1;
    int result = 0;

    
    printf("Please! Enter the binary number :");
    scanf("%d", &bin);

    while (bin != 0)
    {
        rem = bin % 10;
        result = result + rem * weight;
        bin = bin / 10;
        weight = weight * 2;
    }
    
    printf("The Decimal number is : %d\n", result);
}

void    ft_binary(void)
{
    int rem;
    int dec;
    int weight = 1;
    int result = 0;

    printf("Please! Enter the Decimal number :");
    scanf("%d", &dec);

    while (dec != 0)
    {
        rem = dec % 2;
        result = result + rem * weight;
        dec = dec / 2;
        weight = weight * 10;
    }
    
    printf("The binary number is : %d\n", result);
}

int main(void)
{
    int choice;

    printf("For Binary to Decimal Type: 1\n");
    printf("For Decimal to Binary Type: 2\n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        ft_dec();
    }
    else if (choice == 2)
    {
        ft_binary();
    }
    else
        printf("error 404\n");
}