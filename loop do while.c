/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
void main()
{
    int a = 1;
    int n=20;

    do
    {
        printf("%d\n", a++);
    } while (a <= n);
    do
    {
        printf("%d\n", a++);
    } while (a >= 1);
}