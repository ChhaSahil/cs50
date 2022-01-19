#include<ctype.h>
#include<stdio.h>
#include<cs50.h>
#include<math.h>
#include<string.h>
int main(void)
{
    string t = get_string("Text :"); //prompts the user to enter text
    float word = 0.0, sentence = 0.0, letters = 0.0;

    for (int i = 0; i < strlen(t); i++)
    {
        if (isspace(t[i]))
        {
            word++;//calculates words
        }
        if ((t[i] == '!') || (t[i] == '.') || (t[i] == '?'))
        {
            sentence++;//calculates sentences
        }
        if (isalpha(t[i]))
        {
            letters++;//calculates letters
        }
    }
    word = word + 1;
    word = (float)word;

    float L;
    float avg = letters / word;
    L = avg * 100.0;
    float S = (sentence / word) * 100.0;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    if (index < 1)
    {
        printf("Before Grade 1\n");//Displays Grade
    }
    else if ((index >= 1) && (index <= 16))
    {
        printf("Grade %i\n", (int)round(index)); //Displays Grade
    }
    else
    {
        printf("Grade 16+\n");//Displays Grade
    }
}
