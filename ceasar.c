#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(int argc, string argv[])//Main is modified to receive command line arguments
{
    if (argc != 2)//If amount of arguments is not 2 (./ceasar + key), print error
    {
        printf("Usage: ./ceasar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)//Check each character of key, if any of them is not a number, print error
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./ceasar key\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);//Turn key into a integer

    string plaintext = get_string("plaintext: ");//Receive plaintext
    printf("ciphertext: ");//Print "ciphertext" and
    for (int j = 0; j < strlen(plaintext); j++)//Check each chacter of plaintext
    {
        if (isupper(plaintext[j]))//If upper, apply key in such a way it continues upper
        {
            printf("%c", (plaintext[j] + k - 65) % 26 + 65);
        }
        else if (islower(plaintext[j]))//If lower, apply key in such a way it continues lower
        {
            printf("%c", (plaintext[j] + k - 97) % 26 + 97);
        }
        else//If not alphabetical, do not modify
        {
            printf("%c", (plaintext[j]));
        }
    }
    printf("\n");
}
