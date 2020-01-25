/*
 Author : Fahim Muntashir
 mail : fahim.tech.me@gmail.com
*/

#include <stdio.h>
int main()
{
    int a[6]; 
    //= {20, 30, 40, 20, 80, 40};
    int sum = 0;
    for (int i = 0; i < 6; i++)
    {
        printf("Enter num : ");
        scanf("%d", &a[i]);
    }
    

    /*
    or a[0]=20;
        a[1]=30; 
        a[2]=40;
        a[3]=20;
        a[4]=80;
        a[5]=40;
    */
    for (int i = 0; i < 6; i++)
    {
        sum = sum + a[i];
    }
    printf("The sum is : %d\n", sum);
}