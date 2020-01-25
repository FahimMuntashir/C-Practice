/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/
#include <stdio.h>

int main()
{
    int a[100], i, n;
    printf("Enter How many numbers : ");
    scanf("%d\n", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d\n", &a[i]);
    }
    int max = a[0];
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf(" The Max is : %d\n", max);

    int min =a[0];
    for ( i = 1; i <n ; i++)
    {
        if (min > a[i])
        {
            min=a[i];
        }
        
    }
    printf("min = %d\n", min);
}