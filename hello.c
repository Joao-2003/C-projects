#include <stdio.h> //libraries used
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? "); //asks name and atribbutes it to variable with type string
    printf("hello, %s\n", name); //prints hello, and inputed names
}
