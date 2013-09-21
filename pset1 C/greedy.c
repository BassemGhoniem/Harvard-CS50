/*
 * Program : greedy.c
 * date : 21/9/2013
 * ------------------------
 * Make sure that any customer will take minimal amount of coins for
 * change providing the availabl coins are quarters, dimes, nickels, and 
 * pennies. 
 */


#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float change;
    int coins = 0;
    while(true)
    {
        printf("How much change is owed? ");
        change = GetFloat();
        if (change > 0) break;
        else printf("Retry\n");
    }
    
    int cents = round(change * 100);


    coins += cents / 25;
    cents %= 25;
    
    coins += cents / 10;
    cents %= 10;
    
    coins += cents / 5;
    cents %= 5;
    
    coins += cents;
      
    printf("%i\n", coins);
}
