/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        for (j= n; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    




}