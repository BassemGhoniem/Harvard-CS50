/*
 * This program take a credit card number and check either that number
 * is valid visa, or master card, or american express credit card number
 * or not.
 * Date 23/9/2013
 * Bassem :)
 */


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Number: ");
    long long number = GetLongLong();
    
    int sum = 0, sumOfProd = 0, rmd, tens;
    while(number != 0)
    {
        rmd = number % 100;
        number /= 100;
        
        sum += rmd % 10;
        tens = rmd / 10;
        sumOfProd += tens < 5 ? tens * 2: tens * 2 / 10 + tens * 2 % 10;
    }
    
    sum += sumOfProd;
    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        if (rmd == 4 || rmd / 10 == 4)
        {
            printf("VISA\n");
        }
        else if((rmd > 9) && (rmd % 10 < 6))
        {
            printf("MASTERCARD\n");
        }
        else
            printf("AMEX\n");
    }
    
    return 0;
}
        
