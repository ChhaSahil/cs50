#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int c, b=1, Height;
    do
    {
       Height = get_int("Height:");//prompts an input from user
    }
    while (Height < 1);
    while (Height > 8)
    {
        Height = get_int("Height:");
    }
    c = Height-1;
    for(int i = 1; i <= Height; i++)
    {
        for (int j = 1; j <= c; j++)
        {
        printf(" ");
        }
        for(int k = 1; k <= b; k++)
        {
        printf("#");//prints the hash symbol for mario
        }
        c--;
        b++;
        printf("\n");
    }

}
