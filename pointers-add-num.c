/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
int main()
{
    int x = 10, y = 5, sum;
    int *ptr1 = &x;
    int *ptr2 = &y;
    sum = *ptr1 + *ptr2;
    printf("Sum = %d\n", sum);
    return 0;
}