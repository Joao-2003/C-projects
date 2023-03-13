#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

//declaring data types

int count_letters(string text), count_words(string text), count_sentences(string text);

int letters, words, sentences;

int main(void)
{
    string text = get_string("Text: ");//Get text and store it
    letters = count_letters(text);//Use below mainfuncions to get the amout of letters, words and sentences and store the values
    words = count_words(text);
    sentences = count_sentences(text);
    float L = (float) letters / (float) words * 100;//Calculate letters per 100 words and sentences per 100 words and store it in L and S
    float S = (float) sentences / (float) words * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);//Calculate and round index by using the variables and numerical values given

    if (index < 1)//Print grade based on the index
    {
        printf("Before Grade 1\n");
    }

    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }

    else
    {
        printf("Grade %i\n", index);
    }

}

int count_letters(string text)//Functions that calculate letter, words and sentences and return the values to main
{
    letters = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

int count_words(string text)
{
    words = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words + 1;
}

int count_sentences(string text)
{
    sentences = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
