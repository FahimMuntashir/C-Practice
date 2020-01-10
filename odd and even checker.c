/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a;
    char c;
    do
    {
        printf("Enter a number : ");
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            printf("The Number is even : %d\n", a);
        }
        else
        {
            printf("The number is odd: %d\n", a);
        }
        printf("Are You Check Again? y/n: ");
        scanf("%s", &c);
        system("clear");

    } while (c == 'y');
}