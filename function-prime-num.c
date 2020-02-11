/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int count;
    for (count = 10; count <= 100; count++)
    {
        if (isPrime(count))
        {
            printf("%d  is Prime \n", count);
        }
    }
    return 0;
}