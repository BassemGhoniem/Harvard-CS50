/*
 * Program : mario.c
 * the mario implementation of hacker edition :)
 * Date : 23/ 9/ 2013
 */
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    while(true)
    {
        printf("Height: ");
        n = GetInt();
        if (n < 24 && n >= 0) break;
        else printf("Enter positive number less than 24. \n");
    }
    
    for(int i = 0;i < n; i++)
    {
        for(int j = 0; j < n - (i + 1); j++) printf(" ");
        for(int j = 0; j < i + 1; j++) printf("#");
        printf("  ");
        for(int j = 0; j < i + 1; j++) printf("#");
        
        printf("\n");
    }
    return 0;
}
        
