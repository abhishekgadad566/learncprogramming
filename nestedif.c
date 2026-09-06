#include<stdio.h>
int main()
{
    int a = 19;
    int l = 0;
    if (a>18)
    {
        printf("Congratulations! You are eligible to drive \n \n");
        if (l==1)
        {
            printf("Great! You can drive safely \n");
        }
        else
        {
            printf("You are eligible but you do not have posses a license  \n \n\n");
        }
    }
    else
    {
        printf("OH! You are not eligible");
    }
    return 0;
}