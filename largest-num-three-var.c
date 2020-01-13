/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter the first num  :");
    scanf("%d", &a);
    printf("enter the second num :");
    scanf("%d", &b);

    printf("enter the third num :");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf(" The first num is largest : %d\n ", a);
    }
    else if (b > c && b > a)
    {
        printf("the Second num is the largest: %d\n", b);
    }
    else
    {
        printf(" the Third num is the largest: %d\n", c);
    }
}