/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>

int main()
{
    int i, n;

    printf("Print all even numbers till: ");
    scanf("%d", &n);

    printf("All even numbers from 1 to %d are: \n", n);

  
    for (i = 2; i <= n; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}