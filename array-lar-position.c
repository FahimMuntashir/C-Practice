/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>

int main()
{

    int n;
    printf("Enter A number of row : \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter A number of %d : \n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    int large = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > large)
        {
            large = a[i];
            index = i;
        }
    }
    printf("The Largest number position is a[%d] =%d  \n", index, large);
}
