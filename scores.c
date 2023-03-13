#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n; //declare data type of n
    n = get_int("How many scores? "); //ask the amount of scores and store it inside n

    int scores[n]; //n is the size of the array scores of type integer

    for (int i = 0; i < n; i++) //initialize counter i, check if i is less than the total size of the array
    {                           //if so, ask for a score and store it's value inside an element of array in order and for the next one
        scores[i] = get_int("Score: ");
    }

    int sum; //declare data type of sum
    for (int i = 0; i < n; i++) //initialize counter i, check if i is less than the total size of the array
    {                           //if so, add values of the elements of the arrray scores inside sum in order and go for the next one
        sum = sum + scores[i];
    }

    float average = 1.0 * sum/n; //declare data type, calculate average and store it inside variable average

    printf("The average score is: %.2f\n", average); //print the average

}
