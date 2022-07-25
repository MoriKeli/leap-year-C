/*Write a program that asks the user for a year and prints whether it is a leap year or not.*/
#include <stdio.h>

int main()
{
    int yr;
    printf("Enter a year:");
    scanf("\n%d", & yr);

    if (yr%400==0)
    {
        printf("%d is a leap year.\n", yr);
    }
    else if (yr%100==0)
    {
        printf("%d is not a leap year.\n", yr);
    }
    else if (yr%4==0)
    {
        printf("%d is a leap year.\n", yr);
    }
    else
    {
        printf("%d is not a leap year.\n", yr);
    }

    return 0;
}