/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/
#include <stdio.h>

int main()
{
    int n, row, col;
    printf("Enter row : ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
}