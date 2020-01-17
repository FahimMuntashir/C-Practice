/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>


void main()
{
    int y;
    char c;
    printf("Enter any year: \n");
    scanf("%d", &y);
    do
    {
        if (y % 400 == 0)
        {
            printf("It is leap-year\n");
        }
        else if (y % 100 != 0 && y % 4 == 0)
        {
            printf("It is leap-year\n");
        }
        else
        {
            printf("It's not leap-year\n");
        }
        printf("do  you want to check again? y/n :\n");
        scanf("%s", &c);
        system("clear");

    } while (c == 'y');
}