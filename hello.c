#include<cs50.h>
#include<stdio.h>
int main(void)
{
    string name = get_string("What's your name?:");//store the name entered by user
    printf("Hello,%s\n", name);//responds to user
}
