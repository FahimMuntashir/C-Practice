/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>

int main()
{
    // int a[10];
    // a[0]=10;

    // a[1]=20;
    // a[2]=a[0]+a[1];
    // printf("%d %d %d\n", a[0], a[1], a[2]);

    // int b[10]={10,20,30,40};
    // printf("%d %d %d %d", b[0], b[1], b[2], b[3]);

    int n;
    printf("Enter A number of row : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter A number of %d : \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("%d %d %d\n", a[0], a[1], a[2]);
    int large = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > large)
        {
            large = a[i];
        }
    }
    printf("The Largest number is %d : \n", large);
}