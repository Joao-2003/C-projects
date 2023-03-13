#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //gets numerical input (between 1-8) from user
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while(n<1 || n>8);

    //uses input in a loop that determines the height (number of rows)
    for(int i = 0; i < n; i++)
    {
        //inside loop, uses conditionals to determine weight of each row (number of columns)
        for(int k = 0; k < n-i-1; k++)
        {
            printf(" ");
        }
        for(int j = 0; j <= i; j++)
        {
            printf("#");
        }
        //moves to next row
        printf("\n");
    }
}
