/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/
#include <stdio.h>

int main()
{
    int number, count = 0, i;
    printf("Enter any number :");
    scanf("%d", &number);
    for (i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("Prime number \n");
    }
    else
    {
        printf("Not prime number\n");
    }
}